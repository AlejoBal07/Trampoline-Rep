#!/usr/bin/env python3
# -*- coding: UTF-8 -*-

# This script only tries to compiles the examples 
# provided with Trampoline. The objective is to limit
# basic regressions on these examples.
# It first make a copy of the 'examples' dir. Then, it:
# - searches for .oil files in the examples/ subdirectories
# - tries to find the README.md associated (same dir)
# - finds in this README.md the 'goil' command
# - run the goil command
# - compile the project (python or CMake based)
# - show results
#
# The copy is a directory (in trampoline root dir) with name:
dirCompile = 'tmpExamplesCompilation'

from os import walk
from os.path import join,isdir,isfile,dirname,abspath
from shutil import copytree
import re
from subprocess import run,DEVNULL
from enum import Enum, auto
import sys

def BLACK () :
  return '\033[90m'

def RED () :
  return '\033[91m'

def GREEN () :
  return '\033[92m'

def YELLOW () :
  return '\033[93m'

def BOLD () :
  return '\033[1m'

def ENDC () :
  return '\033[0m'

verbose = True

class TestState(Enum):
    FAIL = auto()
    SKIP_NO_GOIL = auto()
    OK   = auto()

    def __str__(self):
        if self is TestState.FAIL:
            return BOLD()+RED()+'failed'+ENDC()
        elif self is TestState.SKIP_NO_GOIL:
            return BOLD()+YELLOW()+'skipped'+ENDC()+' (no goil rule)'
        elif self is TestState.OK:
            return BOLD()+GREEN()+'ok'+ENDC()
        else:
            return 'internal error+"self.name.lower()"'

def getOilFiles(base):
    oilExamples = []
    for root, dirs, files in walk(base):
        for fileName in files:
            if fileName.endswith('.oil'):
                oilExamples.append((fileName,root))
    return oilExamples

def debug(msg):
    if verbose:
        print(msg)

#done only once
regexGoilCmd = re.compile('goil.*target.*')
def getOILCmd(oilDir):
    ''' extract the goil command from the README.md file
    located in the same directory.
    '''
    cmd = None
    readmeFile = join(oilDir,'README.md')
    if isfile(readmeFile):
        with open(readmeFile, 'r') as file:
            for line in file.readlines():
                if regexGoilCmd.match(line):
                    cmd = line
    else:
        debug('skip example, no README.md file')
    return cmd

def runGoil(oilDir):
    ''' find the goil cmd and run it. Return a TestState:
     - SKIP_NO_GOIL if there is no goil command (in README.md)
     - FAIL if goil execution returned an error
     - OK   if goil ran properly
    '''
    result = TestState.FAIL
    cmd = getOILCmd(oilDir)
    if cmd:
        # 2 - call goil
        process = None
        try:
            process = run(cmd.split(),cwd=oilDir,stdout=DEVNULL,stderr=DEVNULL)
        except OSError:
            print('the command "'+cmd+ '" failed.')
        if process and process.returncode == 0:
            #goil ok
            result = TestState.OK
        else:
            result = TestState.FAIL
    else:
        result = TestState.SKIP_NO_GOIL

    return result

def compileOilProject(oilDir):
    result = TestState.FAIL
    # Python based or CMake based?
    if isfile(join(oilDir,'CMakeLists.txt')):
        #compile CMake based project.
        pass
    elif isfile(join(oilDir,'make.py')):
        #compile PYTHON based project.
        cmd = join(oilDir,'make.py')
        process = None
        try:
            process = run(cmd.split(),cwd=oilDir,stdout=DEVNULL)
        except OSError:
            print('the command "'+cmd+ '" failed.')
        if process and process.returncode == 0:
            result = TestState.OK
    else:
        result = TestState.FAIL
    return result

def printResult(result,oilDir,oilFile):
    print('test '+oilDir.split(dirCompile+'/')[1]+' -> '+oilFile+' :'+str(result))

def eval(oilDir):
    ''' Eval one example: 1- goil, 2- compilation
    '''
    #debug('dir '+ oilDir+' -> '+oilFile)
    # 1 run goil
    result = runGoil(oilDir)
    if result == TestState.OK:
        # 2 compile project
        result = compileOilProject(oilDir)
    return result

if __name__ == '__main__':
	#get script path directory (as built is done relatively to that dir):
    pathname = dirname(sys.argv[0])
    scriptWorkingDir = abspath(pathname)
    dirExamples  = join(scriptWorkingDir,'../examples')
    dirCompile   = join(scriptWorkingDir,join('../',dirCompile))

    fullResult = {}
    for state in TestState:
        fullResult[state] = 0

    # 1 - make a copy of examples dir
    if not isdir(dirCompile):
        copytree(dirExamples,dirCompile,symlinks=True)
    # 2 - get examples files in this tree and eval them
    oilExamples = getOilFiles(dirCompile)
    debug(str(len(oilExamples)) + ' examples to compile.')
    for oilFile,oilDir in oilExamples:
        result = eval(oilDir)
        fullResult[result] += 1
        printResult(result,oilDir,oilFile)
    # 3 - full results
    print('Summary:')
    for state in TestState:
        print('=> '+str(state)+': '+str(fullResult[state]))    

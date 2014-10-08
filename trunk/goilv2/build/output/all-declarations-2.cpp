#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_33__32_AttributeSet::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_33__32_AttributeSet * p = (const cPtr_sint_33__32_AttributeSet *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_33__32_AttributeSet) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_valueList.objectCompare (p->mAttribute_valueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_33__32_AttributeSet::objectCompare (const GALGAS_sint_33__32_AttributeSet & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_AttributeSet::GALGAS_sint_33__32_AttributeSet (void) :
GALGAS_attributeRange () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_AttributeSet GALGAS_sint_33__32_AttributeSet::constructor_default (LOCATION_ARGS) {
  return GALGAS_sint_33__32_AttributeSet::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_sint_33__32_List::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_AttributeSet::GALGAS_sint_33__32_AttributeSet (const cPtr_sint_33__32_AttributeSet * inSourcePtr) :
GALGAS_attributeRange (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_33__32_AttributeSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_AttributeSet GALGAS_sint_33__32_AttributeSet::constructor_new (const GALGAS_location & inAttribute_location,
                                                                                  const GALGAS_sint_33__32_List & inAttribute_valueList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32_AttributeSet result ;
  if (inAttribute_location.isValid () && inAttribute_valueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_33__32_AttributeSet (inAttribute_location, inAttribute_valueList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List GALGAS_sint_33__32_AttributeSet::reader_valueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_33__32_List result ;
  if (NULL != mObjectPtr) {
    const cPtr_sint_33__32_AttributeSet * p = (const cPtr_sint_33__32_AttributeSet *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sint_33__32_AttributeSet) ;
    result = p->mAttribute_valueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List cPtr_sint_33__32_AttributeSet::reader_valueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_valueList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @sint32AttributeSet class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_33__32_AttributeSet::cPtr_sint_33__32_AttributeSet (const GALGAS_location & in_location,
                                                              const GALGAS_sint_33__32_List & in_valueList
                                                              COMMA_LOCATION_ARGS) :
cPtr_attributeRange (in_location COMMA_THERE),
mAttribute_valueList (in_valueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_33__32_AttributeSet::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32_AttributeSet ;
}

void cPtr_sint_33__32_AttributeSet::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@sint32AttributeSet:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_valueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_33__32_AttributeSet::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_33__32_AttributeSet (mAttribute_location, mAttribute_valueList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sint32AttributeSet type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_33__32_AttributeSet ("sint32AttributeSet",
                                                 & kTypeDescriptor_GALGAS_attributeRange) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_33__32_AttributeSet::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32_AttributeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_33__32_AttributeSet::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_33__32_AttributeSet (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_AttributeSet GALGAS_sint_33__32_AttributeSet::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32_AttributeSet result ;
  const GALGAS_sint_33__32_AttributeSet * p = (const GALGAS_sint_33__32_AttributeSet *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_33__32_AttributeSet *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint32AttributeSet", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_36__34_AttributeMinMax::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_36__34_AttributeMinMax * p = (const cPtr_sint_36__34_AttributeMinMax *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_36__34_AttributeMinMax) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_min.objectCompare (p->mAttribute_min) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_max.objectCompare (p->mAttribute_max) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_36__34_AttributeMinMax::objectCompare (const GALGAS_sint_36__34_AttributeMinMax & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeMinMax::GALGAS_sint_36__34_AttributeMinMax (void) :
GALGAS_attributeRange () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeMinMax GALGAS_sint_36__34_AttributeMinMax::constructor_default (LOCATION_ARGS) {
  return GALGAS_sint_36__34_AttributeMinMax::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_sint_36__34_::constructor_default (HERE),
                                                              GALGAS_sint_36__34_::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeMinMax::GALGAS_sint_36__34_AttributeMinMax (const cPtr_sint_36__34_AttributeMinMax * inSourcePtr) :
GALGAS_attributeRange (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34_AttributeMinMax) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeMinMax GALGAS_sint_36__34_AttributeMinMax::constructor_new (const GALGAS_location & inAttribute_location,
                                                                                        const GALGAS_sint_36__34_ & inAttribute_min,
                                                                                        const GALGAS_sint_36__34_ & inAttribute_max
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_AttributeMinMax result ;
  if (inAttribute_location.isValid () && inAttribute_min.isValid () && inAttribute_max.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_36__34_AttributeMinMax (inAttribute_location, inAttribute_min, inAttribute_max COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_sint_36__34_AttributeMinMax::reader_min (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_sint_36__34_AttributeMinMax * p = (const cPtr_sint_36__34_AttributeMinMax *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sint_36__34_AttributeMinMax) ;
    result = p->mAttribute_min ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ cPtr_sint_36__34_AttributeMinMax::reader_min (UNUSED_LOCATION_ARGS) const {
  return mAttribute_min ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_sint_36__34_AttributeMinMax::reader_max (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_sint_36__34_AttributeMinMax * p = (const cPtr_sint_36__34_AttributeMinMax *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sint_36__34_AttributeMinMax) ;
    result = p->mAttribute_max ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ cPtr_sint_36__34_AttributeMinMax::reader_max (UNUSED_LOCATION_ARGS) const {
  return mAttribute_max ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @sint64AttributeMinMax class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_36__34_AttributeMinMax::cPtr_sint_36__34_AttributeMinMax (const GALGAS_location & in_location,
                                                                    const GALGAS_sint_36__34_ & in_min,
                                                                    const GALGAS_sint_36__34_ & in_max
                                                                    COMMA_LOCATION_ARGS) :
cPtr_attributeRange (in_location COMMA_THERE),
mAttribute_min (in_min),
mAttribute_max (in_max) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_36__34_AttributeMinMax::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_AttributeMinMax ;
}

void cPtr_sint_36__34_AttributeMinMax::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@sint64AttributeMinMax:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_min.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_max.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_36__34_AttributeMinMax::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_36__34_AttributeMinMax (mAttribute_location, mAttribute_min, mAttribute_max COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @sint64AttributeMinMax type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_AttributeMinMax ("sint64AttributeMinMax",
                                                    & kTypeDescriptor_GALGAS_attributeRange) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34_AttributeMinMax::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_AttributeMinMax ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34_AttributeMinMax::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_AttributeMinMax (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeMinMax GALGAS_sint_36__34_AttributeMinMax::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_AttributeMinMax result ;
  const GALGAS_sint_36__34_AttributeMinMax * p = (const GALGAS_sint_36__34_AttributeMinMax *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_AttributeMinMax *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64AttributeMinMax", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_36__34_AttributeSet::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_36__34_AttributeSet * p = (const cPtr_sint_36__34_AttributeSet *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_36__34_AttributeSet) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_valueList.objectCompare (p->mAttribute_valueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_36__34_AttributeSet::objectCompare (const GALGAS_sint_36__34_AttributeSet & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeSet::GALGAS_sint_36__34_AttributeSet (void) :
GALGAS_attributeRange () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeSet GALGAS_sint_36__34_AttributeSet::constructor_default (LOCATION_ARGS) {
  return GALGAS_sint_36__34_AttributeSet::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_sint_36__34_List::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeSet::GALGAS_sint_36__34_AttributeSet (const cPtr_sint_36__34_AttributeSet * inSourcePtr) :
GALGAS_attributeRange (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34_AttributeSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeSet GALGAS_sint_36__34_AttributeSet::constructor_new (const GALGAS_location & inAttribute_location,
                                                                                  const GALGAS_sint_36__34_List & inAttribute_valueList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_AttributeSet result ;
  if (inAttribute_location.isValid () && inAttribute_valueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_36__34_AttributeSet (inAttribute_location, inAttribute_valueList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List GALGAS_sint_36__34_AttributeSet::reader_valueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_36__34_List result ;
  if (NULL != mObjectPtr) {
    const cPtr_sint_36__34_AttributeSet * p = (const cPtr_sint_36__34_AttributeSet *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sint_36__34_AttributeSet) ;
    result = p->mAttribute_valueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List cPtr_sint_36__34_AttributeSet::reader_valueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_valueList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @sint64AttributeSet class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_36__34_AttributeSet::cPtr_sint_36__34_AttributeSet (const GALGAS_location & in_location,
                                                              const GALGAS_sint_36__34_List & in_valueList
                                                              COMMA_LOCATION_ARGS) :
cPtr_attributeRange (in_location COMMA_THERE),
mAttribute_valueList (in_valueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_36__34_AttributeSet::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_AttributeSet ;
}

void cPtr_sint_36__34_AttributeSet::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@sint64AttributeSet:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_valueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_36__34_AttributeSet::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_36__34_AttributeSet (mAttribute_location, mAttribute_valueList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sint64AttributeSet type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_AttributeSet ("sint64AttributeSet",
                                                 & kTypeDescriptor_GALGAS_attributeRange) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34_AttributeSet::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_AttributeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34_AttributeSet::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_AttributeSet (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_AttributeSet GALGAS_sint_36__34_AttributeSet::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_AttributeSet result ;
  const GALGAS_sint_36__34_AttributeSet * p = (const GALGAS_sint_36__34_AttributeSet *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_AttributeSet *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64AttributeSet", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_33__32_AttributeMinMax::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_33__32_AttributeMinMax * p = (const cPtr_uint_33__32_AttributeMinMax *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_33__32_AttributeMinMax) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_min.objectCompare (p->mAttribute_min) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_max.objectCompare (p->mAttribute_max) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_33__32_AttributeMinMax::objectCompare (const GALGAS_uint_33__32_AttributeMinMax & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeMinMax::GALGAS_uint_33__32_AttributeMinMax (void) :
GALGAS_attributeRange () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeMinMax GALGAS_uint_33__32_AttributeMinMax::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_33__32_AttributeMinMax::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_uint::constructor_default (HERE),
                                                              GALGAS_uint::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeMinMax::GALGAS_uint_33__32_AttributeMinMax (const cPtr_uint_33__32_AttributeMinMax * inSourcePtr) :
GALGAS_attributeRange (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_33__32_AttributeMinMax) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeMinMax GALGAS_uint_33__32_AttributeMinMax::constructor_new (const GALGAS_location & inAttribute_location,
                                                                                        const GALGAS_uint & inAttribute_min,
                                                                                        const GALGAS_uint & inAttribute_max
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32_AttributeMinMax result ;
  if (inAttribute_location.isValid () && inAttribute_min.isValid () && inAttribute_max.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_33__32_AttributeMinMax (inAttribute_location, inAttribute_min, inAttribute_max COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint_33__32_AttributeMinMax::reader_min (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_33__32_AttributeMinMax * p = (const cPtr_uint_33__32_AttributeMinMax *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_33__32_AttributeMinMax) ;
    result = p->mAttribute_min ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_uint_33__32_AttributeMinMax::reader_min (UNUSED_LOCATION_ARGS) const {
  return mAttribute_min ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint_33__32_AttributeMinMax::reader_max (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_33__32_AttributeMinMax * p = (const cPtr_uint_33__32_AttributeMinMax *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_33__32_AttributeMinMax) ;
    result = p->mAttribute_max ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_uint_33__32_AttributeMinMax::reader_max (UNUSED_LOCATION_ARGS) const {
  return mAttribute_max ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @uint32AttributeMinMax class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_33__32_AttributeMinMax::cPtr_uint_33__32_AttributeMinMax (const GALGAS_location & in_location,
                                                                    const GALGAS_uint & in_min,
                                                                    const GALGAS_uint & in_max
                                                                    COMMA_LOCATION_ARGS) :
cPtr_attributeRange (in_location COMMA_THERE),
mAttribute_min (in_min),
mAttribute_max (in_max) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_33__32_AttributeMinMax::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32_AttributeMinMax ;
}

void cPtr_uint_33__32_AttributeMinMax::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@uint32AttributeMinMax:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_min.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_max.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_33__32_AttributeMinMax::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_33__32_AttributeMinMax (mAttribute_location, mAttribute_min, mAttribute_max COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @uint32AttributeMinMax type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_33__32_AttributeMinMax ("uint32AttributeMinMax",
                                                    & kTypeDescriptor_GALGAS_attributeRange) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_33__32_AttributeMinMax::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32_AttributeMinMax ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_33__32_AttributeMinMax::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_33__32_AttributeMinMax (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeMinMax GALGAS_uint_33__32_AttributeMinMax::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32_AttributeMinMax result ;
  const GALGAS_uint_33__32_AttributeMinMax * p = (const GALGAS_uint_33__32_AttributeMinMax *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_33__32_AttributeMinMax *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint32AttributeMinMax", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_33__32_AttributeSet::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_33__32_AttributeSet * p = (const cPtr_uint_33__32_AttributeSet *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_33__32_AttributeSet) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_valueList.objectCompare (p->mAttribute_valueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_33__32_AttributeSet::objectCompare (const GALGAS_uint_33__32_AttributeSet & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeSet::GALGAS_uint_33__32_AttributeSet (void) :
GALGAS_attributeRange () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeSet GALGAS_uint_33__32_AttributeSet::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_33__32_AttributeSet::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_uint_33__32_List::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeSet::GALGAS_uint_33__32_AttributeSet (const cPtr_uint_33__32_AttributeSet * inSourcePtr) :
GALGAS_attributeRange (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_33__32_AttributeSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeSet GALGAS_uint_33__32_AttributeSet::constructor_new (const GALGAS_location & inAttribute_location,
                                                                                  const GALGAS_uint_33__32_List & inAttribute_valueList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32_AttributeSet result ;
  if (inAttribute_location.isValid () && inAttribute_valueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_33__32_AttributeSet (inAttribute_location, inAttribute_valueList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List GALGAS_uint_33__32_AttributeSet::reader_valueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_33__32_List result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_33__32_AttributeSet * p = (const cPtr_uint_33__32_AttributeSet *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_33__32_AttributeSet) ;
    result = p->mAttribute_valueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List cPtr_uint_33__32_AttributeSet::reader_valueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_valueList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @uint32AttributeSet class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_33__32_AttributeSet::cPtr_uint_33__32_AttributeSet (const GALGAS_location & in_location,
                                                              const GALGAS_uint_33__32_List & in_valueList
                                                              COMMA_LOCATION_ARGS) :
cPtr_attributeRange (in_location COMMA_THERE),
mAttribute_valueList (in_valueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_33__32_AttributeSet::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32_AttributeSet ;
}

void cPtr_uint_33__32_AttributeSet::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@uint32AttributeSet:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_valueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_33__32_AttributeSet::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_33__32_AttributeSet (mAttribute_location, mAttribute_valueList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @uint32AttributeSet type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_33__32_AttributeSet ("uint32AttributeSet",
                                                 & kTypeDescriptor_GALGAS_attributeRange) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_33__32_AttributeSet::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32_AttributeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_33__32_AttributeSet::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_33__32_AttributeSet (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_AttributeSet GALGAS_uint_33__32_AttributeSet::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32_AttributeSet result ;
  const GALGAS_uint_33__32_AttributeSet * p = (const GALGAS_uint_33__32_AttributeSet *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_33__32_AttributeSet *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint32AttributeSet", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_36__34_AttributeMinMax::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_36__34_AttributeMinMax * p = (const cPtr_uint_36__34_AttributeMinMax *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34_AttributeMinMax) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_min.objectCompare (p->mAttribute_min) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_max.objectCompare (p->mAttribute_max) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_36__34_AttributeMinMax::objectCompare (const GALGAS_uint_36__34_AttributeMinMax & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeMinMax::GALGAS_uint_36__34_AttributeMinMax (void) :
GALGAS_attributeRange () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeMinMax GALGAS_uint_36__34_AttributeMinMax::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_36__34_AttributeMinMax::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_uint_36__34_::constructor_default (HERE),
                                                              GALGAS_uint_36__34_::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeMinMax::GALGAS_uint_36__34_AttributeMinMax (const cPtr_uint_36__34_AttributeMinMax * inSourcePtr) :
GALGAS_attributeRange (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34_AttributeMinMax) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeMinMax GALGAS_uint_36__34_AttributeMinMax::constructor_new (const GALGAS_location & inAttribute_location,
                                                                                        const GALGAS_uint_36__34_ & inAttribute_min,
                                                                                        const GALGAS_uint_36__34_ & inAttribute_max
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_AttributeMinMax result ;
  if (inAttribute_location.isValid () && inAttribute_min.isValid () && inAttribute_max.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_36__34_AttributeMinMax (inAttribute_location, inAttribute_min, inAttribute_max COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_AttributeMinMax::reader_min (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_36__34_AttributeMinMax * p = (const cPtr_uint_36__34_AttributeMinMax *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_36__34_AttributeMinMax) ;
    result = p->mAttribute_min ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ cPtr_uint_36__34_AttributeMinMax::reader_min (UNUSED_LOCATION_ARGS) const {
  return mAttribute_min ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_AttributeMinMax::reader_max (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_36__34_AttributeMinMax * p = (const cPtr_uint_36__34_AttributeMinMax *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_36__34_AttributeMinMax) ;
    result = p->mAttribute_max ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ cPtr_uint_36__34_AttributeMinMax::reader_max (UNUSED_LOCATION_ARGS) const {
  return mAttribute_max ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @uint64AttributeMinMax class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_36__34_AttributeMinMax::cPtr_uint_36__34_AttributeMinMax (const GALGAS_location & in_location,
                                                                    const GALGAS_uint_36__34_ & in_min,
                                                                    const GALGAS_uint_36__34_ & in_max
                                                                    COMMA_LOCATION_ARGS) :
cPtr_attributeRange (in_location COMMA_THERE),
mAttribute_min (in_min),
mAttribute_max (in_max) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_36__34_AttributeMinMax::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_AttributeMinMax ;
}

void cPtr_uint_36__34_AttributeMinMax::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@uint64AttributeMinMax:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_min.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_max.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_36__34_AttributeMinMax::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_36__34_AttributeMinMax (mAttribute_location, mAttribute_min, mAttribute_max COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @uint64AttributeMinMax type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_AttributeMinMax ("uint64AttributeMinMax",
                                                    & kTypeDescriptor_GALGAS_attributeRange) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_AttributeMinMax::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_AttributeMinMax ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_AttributeMinMax::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_AttributeMinMax (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeMinMax GALGAS_uint_36__34_AttributeMinMax::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_AttributeMinMax result ;
  const GALGAS_uint_36__34_AttributeMinMax * p = (const GALGAS_uint_36__34_AttributeMinMax *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_AttributeMinMax *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64AttributeMinMax", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_36__34_AttributeSet::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_36__34_AttributeSet * p = (const cPtr_uint_36__34_AttributeSet *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34_AttributeSet) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_valueList.objectCompare (p->mAttribute_valueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_36__34_AttributeSet::objectCompare (const GALGAS_uint_36__34_AttributeSet & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeSet::GALGAS_uint_36__34_AttributeSet (void) :
GALGAS_attributeRange () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeSet GALGAS_uint_36__34_AttributeSet::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_36__34_AttributeSet::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_uint_36__34_List::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeSet::GALGAS_uint_36__34_AttributeSet (const cPtr_uint_36__34_AttributeSet * inSourcePtr) :
GALGAS_attributeRange (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34_AttributeSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeSet GALGAS_uint_36__34_AttributeSet::constructor_new (const GALGAS_location & inAttribute_location,
                                                                                  const GALGAS_uint_36__34_List & inAttribute_valueList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_AttributeSet result ;
  if (inAttribute_location.isValid () && inAttribute_valueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_36__34_AttributeSet (inAttribute_location, inAttribute_valueList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List GALGAS_uint_36__34_AttributeSet::reader_valueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_List result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_36__34_AttributeSet * p = (const cPtr_uint_36__34_AttributeSet *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_36__34_AttributeSet) ;
    result = p->mAttribute_valueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List cPtr_uint_36__34_AttributeSet::reader_valueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_valueList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @uint64AttributeSet class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_36__34_AttributeSet::cPtr_uint_36__34_AttributeSet (const GALGAS_location & in_location,
                                                              const GALGAS_uint_36__34_List & in_valueList
                                                              COMMA_LOCATION_ARGS) :
cPtr_attributeRange (in_location COMMA_THERE),
mAttribute_valueList (in_valueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_36__34_AttributeSet::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_AttributeSet ;
}

void cPtr_uint_36__34_AttributeSet::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@uint64AttributeSet:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_valueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_36__34_AttributeSet::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_36__34_AttributeSet (mAttribute_location, mAttribute_valueList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @uint64AttributeSet type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_AttributeSet ("uint64AttributeSet",
                                                 & kTypeDescriptor_GALGAS_attributeRange) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_AttributeSet::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_AttributeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_AttributeSet::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_AttributeSet (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_AttributeSet GALGAS_uint_36__34_AttributeSet::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_AttributeSet result ;
  const GALGAS_uint_36__34_AttributeSet * p = (const GALGAS_uint_36__34_AttributeSet *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_AttributeSet *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64AttributeSet", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_autostart_5F_obj::objectCompare (const GALGAS_autostart_5F_obj & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_obj::GALGAS_autostart_5F_obj (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_obj::GALGAS_autostart_5F_obj (const cPtr_autostart_5F_obj * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autostart_5F_obj) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_autostart_5F_obj::reader_location (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_autostart_5F_obj * p = (const cPtr_autostart_5F_obj *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autostart_5F_obj) ;
    result = p->mAttribute_location ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_autostart_5F_obj::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @autostart_obj class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_autostart_5F_obj::cPtr_autostart_5F_obj (const GALGAS_location & in_location
                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_location (in_location) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @autostart_obj type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autostart_5F_obj ("autostart_obj",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_autostart_5F_obj::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autostart_5F_obj ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_autostart_5F_obj::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autostart_5F_obj (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_obj GALGAS_autostart_5F_obj::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autostart_5F_obj result ;
  const GALGAS_autostart_5F_obj * p = (const GALGAS_autostart_5F_obj *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autostart_5F_obj *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autostart_obj", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_autostart_5F_false::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autostart_5F_false * p = (const cPtr_autostart_5F_false *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autostart_5F_false) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_autostart_5F_false::objectCompare (const GALGAS_autostart_5F_false & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_false::GALGAS_autostart_5F_false (void) :
GALGAS_autostart_5F_obj () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_false GALGAS_autostart_5F_false::constructor_default (LOCATION_ARGS) {
  return GALGAS_autostart_5F_false::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_false::GALGAS_autostart_5F_false (const cPtr_autostart_5F_false * inSourcePtr) :
GALGAS_autostart_5F_obj (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autostart_5F_false) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_false GALGAS_autostart_5F_false::constructor_new (const GALGAS_location & inAttribute_location
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autostart_5F_false result ;
  if (inAttribute_location.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autostart_5F_false (inAttribute_location COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @autostart_false class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_autostart_5F_false::cPtr_autostart_5F_false (const GALGAS_location & in_location
                                                  COMMA_LOCATION_ARGS) :
cPtr_autostart_5F_obj (in_location COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_autostart_5F_false::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autostart_5F_false ;
}

void cPtr_autostart_5F_false::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@autostart_false:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_autostart_5F_false::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autostart_5F_false (mAttribute_location COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @autostart_false type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autostart_5F_false ("autostart_false",
                                           & kTypeDescriptor_GALGAS_autostart_5F_obj) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_autostart_5F_false::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autostart_5F_false ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_autostart_5F_false::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autostart_5F_false (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_false GALGAS_autostart_5F_false::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autostart_5F_false result ;
  const GALGAS_autostart_5F_false * p = (const GALGAS_autostart_5F_false *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autostart_5F_false *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autostart_false", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_autostart_5F_void::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autostart_5F_void * p = (const cPtr_autostart_5F_void *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autostart_5F_void) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_autostart_5F_void::objectCompare (const GALGAS_autostart_5F_void & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_void::GALGAS_autostart_5F_void (void) :
GALGAS_autostart_5F_obj () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_void GALGAS_autostart_5F_void::constructor_default (LOCATION_ARGS) {
  return GALGAS_autostart_5F_void::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_void::GALGAS_autostart_5F_void (const cPtr_autostart_5F_void * inSourcePtr) :
GALGAS_autostart_5F_obj (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autostart_5F_void) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_void GALGAS_autostart_5F_void::constructor_new (const GALGAS_location & inAttribute_location
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autostart_5F_void result ;
  if (inAttribute_location.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autostart_5F_void (inAttribute_location COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @autostart_void class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_autostart_5F_void::cPtr_autostart_5F_void (const GALGAS_location & in_location
                                                COMMA_LOCATION_ARGS) :
cPtr_autostart_5F_obj (in_location COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_autostart_5F_void::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autostart_5F_void ;
}

void cPtr_autostart_5F_void::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@autostart_void:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_autostart_5F_void::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autostart_5F_void (mAttribute_location COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @autostart_void type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autostart_5F_void ("autostart_void",
                                          & kTypeDescriptor_GALGAS_autostart_5F_obj) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_autostart_5F_void::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autostart_5F_void ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_autostart_5F_void::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autostart_5F_void (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_autostart_5F_void GALGAS_autostart_5F_void::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autostart_5F_void result ;
  const GALGAS_autostart_5F_void * p = (const GALGAS_autostart_5F_void *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autostart_5F_void *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autostart_void", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impType * p = (const cPtr_impType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impType) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_desc.objectCompare (p->mAttribute_desc) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impType::objectCompare (const GALGAS_impType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType::GALGAS_impType (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType::GALGAS_impType (const cPtr_impType * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType GALGAS_impType::constructor_new (const GALGAS_location & inAttribute_location,
                                                const GALGAS_dataType & inAttribute_type,
                                                const GALGAS_lstring & inAttribute_name,
                                                const GALGAS_bool & inAttribute_multiple,
                                                const GALGAS_lstring & inAttribute_desc
                                                COMMA_LOCATION_ARGS) {
  GALGAS_impType result ;
  if (inAttribute_location.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_desc.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impType (inAttribute_location, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_desc COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_impType::reader_location (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_location ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_impType::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataType GALGAS_impType::reader_type (UNUSED_LOCATION_ARGS) const {
  GALGAS_dataType result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_type ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataType cPtr_impType::reader_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_impType::reader_name (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_name ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_impType::reader_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_impType::reader_multiple (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_multiple ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_impType::reader_multiple (UNUSED_LOCATION_ARGS) const {
  return mAttribute_multiple ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_impType::reader_desc (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_impType * p = (const cPtr_impType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impType) ;
    result = p->mAttribute_desc ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_impType::reader_desc (UNUSED_LOCATION_ARGS) const {
  return mAttribute_desc ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @impType class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impType::cPtr_impType (const GALGAS_location & in_location,
                            const GALGAS_dataType & in_type,
                            const GALGAS_lstring & in_name,
                            const GALGAS_bool & in_multiple,
                            const GALGAS_lstring & in_desc
                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_location (in_location),
mAttribute_type (in_type),
mAttribute_name (in_name),
mAttribute_multiple (in_multiple),
mAttribute_desc (in_desc) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impType ;
}

void cPtr_impType::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@impType:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_desc.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impType (mAttribute_location, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_desc COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @impType type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impType ("impType",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType GALGAS_impType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_impType result ;
  const GALGAS_impType * p = (const GALGAS_impType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impAutoDefaultType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impAutoDefaultType * p = (const cPtr_impAutoDefaultType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impAutoDefaultType) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_desc.objectCompare (p->mAttribute_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_withAuto.objectCompare (p->mAttribute_withAuto) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impAutoDefaultType::objectCompare (const GALGAS_impAutoDefaultType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impAutoDefaultType::GALGAS_impAutoDefaultType (void) :
GALGAS_impType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impAutoDefaultType::GALGAS_impAutoDefaultType (const cPtr_impAutoDefaultType * inSourcePtr) :
GALGAS_impType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impAutoDefaultType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impAutoDefaultType GALGAS_impAutoDefaultType::constructor_new (const GALGAS_location & inAttribute_location,
                                                                      const GALGAS_dataType & inAttribute_type,
                                                                      const GALGAS_lstring & inAttribute_name,
                                                                      const GALGAS_bool & inAttribute_multiple,
                                                                      const GALGAS_lstring & inAttribute_desc,
                                                                      const GALGAS_bool & inAttribute_withAuto,
                                                                      const GALGAS_object_5F_t & inAttribute_defaultValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_impAutoDefaultType result ;
  if (inAttribute_location.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_desc.isValid () && inAttribute_withAuto.isValid () && inAttribute_defaultValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impAutoDefaultType (inAttribute_location, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_desc, inAttribute_withAuto, inAttribute_defaultValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_impAutoDefaultType::reader_withAuto (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_impAutoDefaultType * p = (const cPtr_impAutoDefaultType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impAutoDefaultType) ;
    result = p->mAttribute_withAuto ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_impAutoDefaultType::reader_withAuto (UNUSED_LOCATION_ARGS) const {
  return mAttribute_withAuto ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_impAutoDefaultType::reader_defaultValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_object_5F_t result ;
  if (NULL != mObjectPtr) {
    const cPtr_impAutoDefaultType * p = (const cPtr_impAutoDefaultType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impAutoDefaultType) ;
    result = p->mAttribute_defaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t cPtr_impAutoDefaultType::reader_defaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_defaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @impAutoDefaultType class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impAutoDefaultType::cPtr_impAutoDefaultType (const GALGAS_location & in_location,
                                                  const GALGAS_dataType & in_type,
                                                  const GALGAS_lstring & in_name,
                                                  const GALGAS_bool & in_multiple,
                                                  const GALGAS_lstring & in_desc,
                                                  const GALGAS_bool & in_withAuto,
                                                  const GALGAS_object_5F_t & in_defaultValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_impType (in_location, in_type, in_name, in_multiple, in_desc COMMA_THERE),
mAttribute_withAuto (in_withAuto),
mAttribute_defaultValue (in_defaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impAutoDefaultType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impAutoDefaultType ;
}

void cPtr_impAutoDefaultType::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@impAutoDefaultType:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_withAuto.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impAutoDefaultType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impAutoDefaultType (mAttribute_location, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_desc, mAttribute_withAuto, mAttribute_defaultValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @impAutoDefaultType type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impAutoDefaultType ("impAutoDefaultType",
                                           & kTypeDescriptor_GALGAS_impType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impAutoDefaultType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impAutoDefaultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impAutoDefaultType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impAutoDefaultType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impAutoDefaultType GALGAS_impAutoDefaultType::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_impAutoDefaultType result ;
  const GALGAS_impAutoDefaultType * p = (const GALGAS_impAutoDefaultType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impAutoDefaultType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impAutoDefaultType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impBoolType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impBoolType * p = (const cPtr_impBoolType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impBoolType) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_desc.objectCompare (p->mAttribute_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_withAuto.objectCompare (p->mAttribute_withAuto) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_trueSubAttributes.objectCompare (p->mAttribute_trueSubAttributes) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_falseSubAttributes.objectCompare (p->mAttribute_falseSubAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impBoolType::objectCompare (const GALGAS_impBoolType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impBoolType::GALGAS_impBoolType (void) :
GALGAS_impAutoDefaultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impBoolType::GALGAS_impBoolType (const cPtr_impBoolType * inSourcePtr) :
GALGAS_impAutoDefaultType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impBoolType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impBoolType GALGAS_impBoolType::constructor_new (const GALGAS_location & inAttribute_location,
                                                        const GALGAS_dataType & inAttribute_type,
                                                        const GALGAS_lstring & inAttribute_name,
                                                        const GALGAS_bool & inAttribute_multiple,
                                                        const GALGAS_lstring & inAttribute_desc,
                                                        const GALGAS_bool & inAttribute_withAuto,
                                                        const GALGAS_object_5F_t & inAttribute_defaultValue,
                                                        const GALGAS_implementationObjectMap & inAttribute_trueSubAttributes,
                                                        const GALGAS_implementationObjectMap & inAttribute_falseSubAttributes
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_impBoolType result ;
  if (inAttribute_location.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_desc.isValid () && inAttribute_withAuto.isValid () && inAttribute_defaultValue.isValid () && inAttribute_trueSubAttributes.isValid () && inAttribute_falseSubAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impBoolType (inAttribute_location, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_desc, inAttribute_withAuto, inAttribute_defaultValue, inAttribute_trueSubAttributes, inAttribute_falseSubAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_impBoolType::reader_trueSubAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_impBoolType * p = (const cPtr_impBoolType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impBoolType) ;
    result = p->mAttribute_trueSubAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap cPtr_impBoolType::reader_trueSubAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_trueSubAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_impBoolType::reader_falseSubAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_impBoolType * p = (const cPtr_impBoolType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impBoolType) ;
    result = p->mAttribute_falseSubAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap cPtr_impBoolType::reader_falseSubAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_falseSubAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @impBoolType class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impBoolType::cPtr_impBoolType (const GALGAS_location & in_location,
                                    const GALGAS_dataType & in_type,
                                    const GALGAS_lstring & in_name,
                                    const GALGAS_bool & in_multiple,
                                    const GALGAS_lstring & in_desc,
                                    const GALGAS_bool & in_withAuto,
                                    const GALGAS_object_5F_t & in_defaultValue,
                                    const GALGAS_implementationObjectMap & in_trueSubAttributes,
                                    const GALGAS_implementationObjectMap & in_falseSubAttributes
                                    COMMA_LOCATION_ARGS) :
cPtr_impAutoDefaultType (in_location, in_type, in_name, in_multiple, in_desc, in_withAuto, in_defaultValue COMMA_THERE),
mAttribute_trueSubAttributes (in_trueSubAttributes),
mAttribute_falseSubAttributes (in_falseSubAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impBoolType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impBoolType ;
}

void cPtr_impBoolType::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@impBoolType:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_withAuto.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_trueSubAttributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_falseSubAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impBoolType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impBoolType (mAttribute_location, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_desc, mAttribute_withAuto, mAttribute_defaultValue, mAttribute_trueSubAttributes, mAttribute_falseSubAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @impBoolType type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impBoolType ("impBoolType",
                                    & kTypeDescriptor_GALGAS_impAutoDefaultType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impBoolType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impBoolType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impBoolType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impBoolType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impBoolType GALGAS_impBoolType::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_impBoolType result ;
  const GALGAS_impBoolType * p = (const GALGAS_impBoolType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impBoolType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impBoolType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impEnumType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impEnumType * p = (const cPtr_impEnumType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impEnumType) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_desc.objectCompare (p->mAttribute_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_withAuto.objectCompare (p->mAttribute_withAuto) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_valuesMap.objectCompare (p->mAttribute_valuesMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impEnumType::objectCompare (const GALGAS_impEnumType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impEnumType::GALGAS_impEnumType (void) :
GALGAS_impAutoDefaultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impEnumType::GALGAS_impEnumType (const cPtr_impEnumType * inSourcePtr) :
GALGAS_impAutoDefaultType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impEnumType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impEnumType GALGAS_impEnumType::constructor_new (const GALGAS_location & inAttribute_location,
                                                        const GALGAS_dataType & inAttribute_type,
                                                        const GALGAS_lstring & inAttribute_name,
                                                        const GALGAS_bool & inAttribute_multiple,
                                                        const GALGAS_lstring & inAttribute_desc,
                                                        const GALGAS_bool & inAttribute_withAuto,
                                                        const GALGAS_object_5F_t & inAttribute_defaultValue,
                                                        const GALGAS_enumValues & inAttribute_valuesMap
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_impEnumType result ;
  if (inAttribute_location.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_desc.isValid () && inAttribute_withAuto.isValid () && inAttribute_defaultValue.isValid () && inAttribute_valuesMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impEnumType (inAttribute_location, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_desc, inAttribute_withAuto, inAttribute_defaultValue, inAttribute_valuesMap COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues GALGAS_impEnumType::reader_valuesMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumValues result ;
  if (NULL != mObjectPtr) {
    const cPtr_impEnumType * p = (const cPtr_impEnumType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impEnumType) ;
    result = p->mAttribute_valuesMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues cPtr_impEnumType::reader_valuesMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_valuesMap ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @impEnumType class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impEnumType::cPtr_impEnumType (const GALGAS_location & in_location,
                                    const GALGAS_dataType & in_type,
                                    const GALGAS_lstring & in_name,
                                    const GALGAS_bool & in_multiple,
                                    const GALGAS_lstring & in_desc,
                                    const GALGAS_bool & in_withAuto,
                                    const GALGAS_object_5F_t & in_defaultValue,
                                    const GALGAS_enumValues & in_valuesMap
                                    COMMA_LOCATION_ARGS) :
cPtr_impAutoDefaultType (in_location, in_type, in_name, in_multiple, in_desc, in_withAuto, in_defaultValue COMMA_THERE),
mAttribute_valuesMap (in_valuesMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impEnumType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impEnumType ;
}

void cPtr_impEnumType::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@impEnumType:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_withAuto.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_valuesMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impEnumType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impEnumType (mAttribute_location, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_desc, mAttribute_withAuto, mAttribute_defaultValue, mAttribute_valuesMap COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @impEnumType type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impEnumType ("impEnumType",
                                    & kTypeDescriptor_GALGAS_impAutoDefaultType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impEnumType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impEnumType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impEnumType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impEnumType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impEnumType GALGAS_impEnumType::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_impEnumType result ;
  const GALGAS_impEnumType * p = (const GALGAS_impEnumType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impEnumType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impEnumType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impRangedType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impRangedType * p = (const cPtr_impRangedType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impRangedType) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_desc.objectCompare (p->mAttribute_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_withAuto.objectCompare (p->mAttribute_withAuto) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_setOrRange.objectCompare (p->mAttribute_setOrRange) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impRangedType::objectCompare (const GALGAS_impRangedType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impRangedType::GALGAS_impRangedType (void) :
GALGAS_impAutoDefaultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impRangedType::GALGAS_impRangedType (const cPtr_impRangedType * inSourcePtr) :
GALGAS_impAutoDefaultType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impRangedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impRangedType GALGAS_impRangedType::constructor_new (const GALGAS_location & inAttribute_location,
                                                            const GALGAS_dataType & inAttribute_type,
                                                            const GALGAS_lstring & inAttribute_name,
                                                            const GALGAS_bool & inAttribute_multiple,
                                                            const GALGAS_lstring & inAttribute_desc,
                                                            const GALGAS_bool & inAttribute_withAuto,
                                                            const GALGAS_object_5F_t & inAttribute_defaultValue,
                                                            const GALGAS_attributeRange & inAttribute_setOrRange
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_impRangedType result ;
  if (inAttribute_location.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_desc.isValid () && inAttribute_withAuto.isValid () && inAttribute_defaultValue.isValid () && inAttribute_setOrRange.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impRangedType (inAttribute_location, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_desc, inAttribute_withAuto, inAttribute_defaultValue, inAttribute_setOrRange COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeRange GALGAS_impRangedType::reader_setOrRange (UNUSED_LOCATION_ARGS) const {
  GALGAS_attributeRange result ;
  if (NULL != mObjectPtr) {
    const cPtr_impRangedType * p = (const cPtr_impRangedType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impRangedType) ;
    result = p->mAttribute_setOrRange ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeRange cPtr_impRangedType::reader_setOrRange (UNUSED_LOCATION_ARGS) const {
  return mAttribute_setOrRange ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @impRangedType class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impRangedType::cPtr_impRangedType (const GALGAS_location & in_location,
                                        const GALGAS_dataType & in_type,
                                        const GALGAS_lstring & in_name,
                                        const GALGAS_bool & in_multiple,
                                        const GALGAS_lstring & in_desc,
                                        const GALGAS_bool & in_withAuto,
                                        const GALGAS_object_5F_t & in_defaultValue,
                                        const GALGAS_attributeRange & in_setOrRange
                                        COMMA_LOCATION_ARGS) :
cPtr_impAutoDefaultType (in_location, in_type, in_name, in_multiple, in_desc, in_withAuto, in_defaultValue COMMA_THERE),
mAttribute_setOrRange (in_setOrRange) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impRangedType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impRangedType ;
}

void cPtr_impRangedType::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@impRangedType:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_withAuto.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_setOrRange.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impRangedType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impRangedType (mAttribute_location, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_desc, mAttribute_withAuto, mAttribute_defaultValue, mAttribute_setOrRange COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @impRangedType type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impRangedType ("impRangedType",
                                      & kTypeDescriptor_GALGAS_impAutoDefaultType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impRangedType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impRangedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impRangedType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impRangedType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impRangedType GALGAS_impRangedType::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_impRangedType result ;
  const GALGAS_impRangedType * p = (const GALGAS_impRangedType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impRangedType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impRangedType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impStructType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impStructType * p = (const cPtr_impStructType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impStructType) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_desc.objectCompare (p->mAttribute_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_structAttributes.objectCompare (p->mAttribute_structAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impStructType::objectCompare (const GALGAS_impStructType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impStructType::GALGAS_impStructType (void) :
GALGAS_impType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impStructType::GALGAS_impStructType (const cPtr_impStructType * inSourcePtr) :
GALGAS_impType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impStructType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impStructType GALGAS_impStructType::constructor_new (const GALGAS_location & inAttribute_location,
                                                            const GALGAS_dataType & inAttribute_type,
                                                            const GALGAS_lstring & inAttribute_name,
                                                            const GALGAS_bool & inAttribute_multiple,
                                                            const GALGAS_lstring & inAttribute_desc,
                                                            const GALGAS_implementationObjectMap & inAttribute_structAttributes
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_impStructType result ;
  if (inAttribute_location.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_desc.isValid () && inAttribute_structAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impStructType (inAttribute_location, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_desc, inAttribute_structAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_impStructType::reader_structAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_impStructType * p = (const cPtr_impStructType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impStructType) ;
    result = p->mAttribute_structAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap cPtr_impStructType::reader_structAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_structAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @impStructType class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impStructType::cPtr_impStructType (const GALGAS_location & in_location,
                                        const GALGAS_dataType & in_type,
                                        const GALGAS_lstring & in_name,
                                        const GALGAS_bool & in_multiple,
                                        const GALGAS_lstring & in_desc,
                                        const GALGAS_implementationObjectMap & in_structAttributes
                                        COMMA_LOCATION_ARGS) :
cPtr_impType (in_location, in_type, in_name, in_multiple, in_desc COMMA_THERE),
mAttribute_structAttributes (in_structAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impStructType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impStructType ;
}

void cPtr_impStructType::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@impStructType:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_structAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impStructType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impStructType (mAttribute_location, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_desc, mAttribute_structAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @impStructType type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impStructType ("impStructType",
                                      & kTypeDescriptor_GALGAS_impType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impStructType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impStructType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impStructType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impStructType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impStructType GALGAS_impStructType::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_impStructType result ;
  const GALGAS_impStructType * p = (const GALGAS_impStructType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impStructType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impStructType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impVoid::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impVoid * p = (const cPtr_impVoid *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impVoid) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_desc.objectCompare (p->mAttribute_desc) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impVoid::objectCompare (const GALGAS_impVoid & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impVoid::GALGAS_impVoid (void) :
GALGAS_impType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impVoid::GALGAS_impVoid (const cPtr_impVoid * inSourcePtr) :
GALGAS_impType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impVoid) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impVoid GALGAS_impVoid::constructor_new (const GALGAS_location & inAttribute_location,
                                                const GALGAS_dataType & inAttribute_type,
                                                const GALGAS_lstring & inAttribute_name,
                                                const GALGAS_bool & inAttribute_multiple,
                                                const GALGAS_lstring & inAttribute_desc
                                                COMMA_LOCATION_ARGS) {
  GALGAS_impVoid result ;
  if (inAttribute_location.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_desc.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impVoid (inAttribute_location, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_desc COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @impVoid class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impVoid::cPtr_impVoid (const GALGAS_location & in_location,
                            const GALGAS_dataType & in_type,
                            const GALGAS_lstring & in_name,
                            const GALGAS_bool & in_multiple,
                            const GALGAS_lstring & in_desc
                            COMMA_LOCATION_ARGS) :
cPtr_impType (in_location, in_type, in_name, in_multiple, in_desc COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impVoid::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impVoid ;
}

void cPtr_impVoid::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@impVoid:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_desc.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impVoid::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impVoid (mAttribute_location, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_desc COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @impVoid type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impVoid ("impVoid",
                                & kTypeDescriptor_GALGAS_impType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impVoid::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impVoid ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impVoid::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impVoid (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impVoid GALGAS_impVoid::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_impVoid result ;
  const GALGAS_impVoid * p = (const GALGAS_impVoid *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impVoid *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impVoid", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_refType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_refType * p = (const cPtr_refType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_refType) ;
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_desc.objectCompare (p->mAttribute_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_ref.objectCompare (p->mAttribute_ref) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_refType::objectCompare (const GALGAS_refType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_refType::GALGAS_refType (void) :
GALGAS_impType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_refType::GALGAS_refType (const cPtr_refType * inSourcePtr) :
GALGAS_impType (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_refType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_refType GALGAS_refType::constructor_new (const GALGAS_location & inAttribute_location,
                                                const GALGAS_dataType & inAttribute_type,
                                                const GALGAS_lstring & inAttribute_name,
                                                const GALGAS_bool & inAttribute_multiple,
                                                const GALGAS_lstring & inAttribute_desc,
                                                const GALGAS_lstring & inAttribute_ref
                                                COMMA_LOCATION_ARGS) {
  GALGAS_refType result ;
  if (inAttribute_location.isValid () && inAttribute_type.isValid () && inAttribute_name.isValid () && inAttribute_multiple.isValid () && inAttribute_desc.isValid () && inAttribute_ref.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_refType (inAttribute_location, inAttribute_type, inAttribute_name, inAttribute_multiple, inAttribute_desc, inAttribute_ref COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_refType::reader_ref (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_refType * p = (const cPtr_refType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_refType) ;
    result = p->mAttribute_ref ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_refType::reader_ref (UNUSED_LOCATION_ARGS) const {
  return mAttribute_ref ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @refType class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_refType::cPtr_refType (const GALGAS_location & in_location,
                            const GALGAS_dataType & in_type,
                            const GALGAS_lstring & in_name,
                            const GALGAS_bool & in_multiple,
                            const GALGAS_lstring & in_desc,
                            const GALGAS_lstring & in_ref
                            COMMA_LOCATION_ARGS) :
cPtr_impType (in_location, in_type, in_name, in_multiple, in_desc COMMA_THERE),
mAttribute_ref (in_ref) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_refType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_refType ;
}

void cPtr_refType::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@refType:" ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_ref.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_refType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_refType (mAttribute_location, mAttribute_type, mAttribute_name, mAttribute_multiple, mAttribute_desc, mAttribute_ref COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @refType type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_refType ("refType",
                                & kTypeDescriptor_GALGAS_impType) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_refType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_refType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_refType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_refType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_refType GALGAS_refType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_refType result ;
  const GALGAS_refType * p = (const GALGAS_refType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_refType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("refType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_implementation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_implementation * p = (const cPtr_implementation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_implementation) ;
  if (kOperandEqual == result) {
    result = mAttribute_imp.objectCompare (p->mAttribute_imp) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_implementation::objectCompare (const GALGAS_implementation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementation::GALGAS_implementation (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementation GALGAS_implementation::constructor_default (LOCATION_ARGS) {
  return GALGAS_implementation::constructor_new (GALGAS_implementationMap::constructor_emptyMap (HERE)
                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementation::GALGAS_implementation (const cPtr_implementation * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementation GALGAS_implementation::constructor_new (const GALGAS_implementationMap & inAttribute_imp
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_implementation result ;
  if (inAttribute_imp.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_implementation (inAttribute_imp COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap GALGAS_implementation::reader_imp (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementation * p = (const cPtr_implementation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementation) ;
    result = p->mAttribute_imp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap cPtr_implementation::reader_imp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_imp ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementation::modifier_setImp (GALGAS_implementationMap inValue
                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_implementation * p = (cPtr_implementation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementation) ;
    p->mAttribute_imp = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_implementation::modifier_setImp (GALGAS_implementationMap inValue
                                           COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_imp = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @implementation class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_implementation::cPtr_implementation (const GALGAS_implementationMap & in_imp
                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_imp (in_imp) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_implementation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementation ;
}

void cPtr_implementation::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@implementation:" ;
  mAttribute_imp.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_implementation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_implementation (mAttribute_imp COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @implementation type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementation ("implementation",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_implementation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_implementation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementation GALGAS_implementation::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_implementation result ;
  const GALGAS_implementation * p = (const GALGAS_implementation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_implementationObject::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_implementationObject * p = (const cPtr_implementationObject *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_implementationObject) ;
  if (kOperandEqual == result) {
    result = mAttribute_multiple.objectCompare (p->mAttribute_multiple) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_attributes.objectCompare (p->mAttribute_attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_implementationObject::objectCompare (const GALGAS_implementationObject & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject::GALGAS_implementationObject (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject GALGAS_implementationObject::constructor_default (LOCATION_ARGS) {
  return GALGAS_implementationObject::constructor_new (GALGAS_lbool::constructor_default (HERE),
                                                       GALGAS_implementationObjectMap::constructor_emptyMap (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject::GALGAS_implementationObject (const cPtr_implementationObject * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_implementationObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject GALGAS_implementationObject::constructor_new (const GALGAS_lbool & inAttribute_multiple,
                                                                          const GALGAS_implementationObjectMap & inAttribute_attributes
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implementationObject result ;
  if (inAttribute_multiple.isValid () && inAttribute_attributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_implementationObject (inAttribute_multiple, inAttribute_attributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_implementationObject::reader_multiple (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementationObject * p = (const cPtr_implementationObject *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementationObject) ;
    result = p->mAttribute_multiple ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool cPtr_implementationObject::reader_multiple (UNUSED_LOCATION_ARGS) const {
  return mAttribute_multiple ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_implementationObject::reader_attributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_implementationObject * p = (const cPtr_implementationObject *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementationObject) ;
    result = p->mAttribute_attributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap cPtr_implementationObject::reader_attributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_attributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationObject::modifier_setMultiple (GALGAS_lbool inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_implementationObject * p = (cPtr_implementationObject *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementationObject) ;
    p->mAttribute_multiple = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_implementationObject::modifier_setMultiple (GALGAS_lbool inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_multiple = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationObject::modifier_setAttributes (GALGAS_implementationObjectMap inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_implementationObject * p = (cPtr_implementationObject *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_implementationObject) ;
    p->mAttribute_attributes = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_implementationObject::modifier_setAttributes (GALGAS_implementationObjectMap inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_attributes = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @implementationObject class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_implementationObject::cPtr_implementationObject (const GALGAS_lbool & in_multiple,
                                                      const GALGAS_implementationObjectMap & in_attributes
                                                      COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_multiple (in_multiple),
mAttribute_attributes (in_attributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_implementationObject::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationObject ;
}

void cPtr_implementationObject::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@implementationObject:" ;
  mAttribute_multiple.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_attributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_implementationObject::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_implementationObject (mAttribute_multiple, mAttribute_attributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @implementationObject type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementationObject ("implementationObject",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_implementationObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_implementationObject::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementationObject (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject GALGAS_implementationObject::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implementationObject result ;
  const GALGAS_implementationObject * p = (const GALGAS_implementationObject *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementationObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementationObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_objectAttributes::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_objectAttributes * p = (const cPtr_objectAttributes *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_objectAttributes) ;
  if (kOperandEqual == result) {
    result = mAttribute_objectParams.objectCompare (p->mAttribute_objectParams) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_objectAttributes::objectCompare (const GALGAS_objectAttributes & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes::GALGAS_objectAttributes (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_objectAttributes::constructor_default (LOCATION_ARGS) {
  return GALGAS_objectAttributes::constructor_new (GALGAS_identifierMap::constructor_emptyMap (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes::GALGAS_objectAttributes (const cPtr_objectAttributes * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_objectAttributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_objectAttributes::constructor_new (const GALGAS_identifierMap & inAttribute_objectParams
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_objectAttributes result ;
  if (inAttribute_objectParams.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_objectAttributes (inAttribute_objectParams COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap GALGAS_objectAttributes::reader_objectParams (UNUSED_LOCATION_ARGS) const {
  GALGAS_identifierMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_objectAttributes * p = (const cPtr_objectAttributes *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_objectAttributes) ;
    result = p->mAttribute_objectParams ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap cPtr_objectAttributes::reader_objectParams (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objectParams ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectAttributes::modifier_setObjectParams (GALGAS_identifierMap inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_objectAttributes * p = (cPtr_objectAttributes *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_objectAttributes) ;
    p->mAttribute_objectParams = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_objectAttributes::modifier_setObjectParams (GALGAS_identifierMap inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_objectParams = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @objectAttributes class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_objectAttributes::cPtr_objectAttributes (const GALGAS_identifierMap & in_objectParams
                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_objectParams (in_objectParams) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_objectAttributes::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectAttributes ;
}

void cPtr_objectAttributes::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@objectAttributes:" ;
  mAttribute_objectParams.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_objectAttributes::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_objectAttributes (mAttribute_objectParams COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @objectAttributes type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectAttributes ("objectAttributes",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectAttributes (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_objectAttributes::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectAttributes result ;
  const GALGAS_objectAttributes * p = (const GALGAS_objectAttributes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_objectKind::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_objectKind * p = (const cPtr_objectKind *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_objectKind) ;
  if (kOperandEqual == result) {
    result = mAttribute_objects.objectCompare (p->mAttribute_objects) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_objectKind::objectCompare (const GALGAS_objectKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind::GALGAS_objectKind (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind GALGAS_objectKind::constructor_default (LOCATION_ARGS) {
  return GALGAS_objectKind::constructor_new (GALGAS_objectKindMap::constructor_emptyMap (HERE)
                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind::GALGAS_objectKind (const cPtr_objectKind * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_objectKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind GALGAS_objectKind::constructor_new (const GALGAS_objectKindMap & inAttribute_objects
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_objectKind result ;
  if (inAttribute_objects.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_objectKind (inAttribute_objects COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap GALGAS_objectKind::reader_objects (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectKindMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_objectKind * p = (const cPtr_objectKind *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_objectKind) ;
    result = p->mAttribute_objects ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap cPtr_objectKind::reader_objects (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objects ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectKind::modifier_setObjects (GALGAS_objectKindMap inValue
                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_objectKind * p = (cPtr_objectKind *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_objectKind) ;
    p->mAttribute_objects = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_objectKind::modifier_setObjects (GALGAS_objectKindMap inValue
                                           COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_objects = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @objectKind class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_objectKind::cPtr_objectKind (const GALGAS_objectKindMap & in_objects
                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_objects (in_objects) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_objectKind::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectKind ;
}

void cPtr_objectKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "[@objectKind:" ;
  mAttribute_objects.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_objectKind::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_objectKind (mAttribute_objects COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @objectKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectKind ("objectKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind GALGAS_objectKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectKind result ;
  const GALGAS_objectKind * p = (const GALGAS_objectKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_object_5F_t::objectCompare (const GALGAS_object_5F_t & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t::GALGAS_object_5F_t (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t::GALGAS_object_5F_t (const cPtr_object_5F_t * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_object_5F_t) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_object_5F_t::reader_oil_5F_desc (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_object_5F_t * p = (const cPtr_object_5F_t *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_object_5F_t) ;
    result = p->mAttribute_oil_5F_desc ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_object_5F_t::reader_oil_5F_desc (UNUSED_LOCATION_ARGS) const {
  return mAttribute_oil_5F_desc ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_object_5F_t::reader_location (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_object_5F_t * p = (const cPtr_object_5F_t *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_object_5F_t) ;
    result = p->mAttribute_location ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_object_5F_t::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @object_t class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_object_5F_t::cPtr_object_5F_t (const GALGAS_lstring & in_oil_5F_desc,
                                    const GALGAS_location & in_location
                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_oil_5F_desc (in_oil_5F_desc),
mAttribute_location (in_location) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @object_t type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_object_5F_t ("object_t",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_object_5F_t::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_object_5F_t ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_object_5F_t::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_object_5F_t (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_object_5F_t::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_object_5F_t result ;
  const GALGAS_object_5F_t * p = (const GALGAS_object_5F_t *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_object_5F_t *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("object_t", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_auto::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_auto * p = (const cPtr_auto *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_auto) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_auto::objectCompare (const GALGAS_auto & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto::GALGAS_auto (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto GALGAS_auto::constructor_default (LOCATION_ARGS) {
  return GALGAS_auto::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)
                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto::GALGAS_auto (const cPtr_auto * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_auto) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto GALGAS_auto::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                          const GALGAS_location & inAttribute_location
                                          COMMA_LOCATION_ARGS) {
  GALGAS_auto result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_auto (inAttribute_oil_5F_desc, inAttribute_location COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                            Pointer class for @auto class                                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_auto::cPtr_auto (const GALGAS_lstring & in_oil_5F_desc,
                      const GALGAS_location & in_location
                      COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_auto::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_auto ;
}

void cPtr_auto::description (C_String & ioString,
                             const int32_t inIndentation) const {
  ioString << "[@auto:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_auto::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_auto (mAttribute_oil_5F_desc, mAttribute_location COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @auto type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_auto ("auto",
                             & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_auto::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_auto ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_auto::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_auto (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_auto GALGAS_auto::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_auto result ;
  const GALGAS_auto * p = (const GALGAS_auto *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_auto *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("auto", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_boolAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolAttribute * p = (const cPtr_boolAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_subAttributes.objectCompare (p->mAttribute_subAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_boolAttribute::objectCompare (const GALGAS_boolAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute::GALGAS_boolAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute GALGAS_boolAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_location::constructor_nowhere (HERE),
                                                GALGAS_bool::constructor_default (HERE),
                                                GALGAS_objectAttributes::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute::GALGAS_boolAttribute (const cPtr_boolAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute GALGAS_boolAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                            const GALGAS_location & inAttribute_location,
                                                            const GALGAS_bool & inAttribute_value,
                                                            const GALGAS_objectAttributes & inAttribute_subAttributes
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid () && inAttribute_subAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value, inAttribute_subAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_boolAttribute::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAttribute * p = (const cPtr_boolAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAttribute) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_boolAttribute::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_boolAttribute::reader_subAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectAttributes result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAttribute * p = (const cPtr_boolAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAttribute) ;
    result = p->mAttribute_subAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes cPtr_boolAttribute::reader_subAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_subAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_boolAttribute::modifier_setSubAttributes (GALGAS_objectAttributes inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_boolAttribute * p = (cPtr_boolAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAttribute) ;
    p->mAttribute_subAttributes = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_boolAttribute::modifier_setSubAttributes (GALGAS_objectAttributes inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_subAttributes = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @boolAttribute class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_boolAttribute::cPtr_boolAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                        const GALGAS_location & in_location,
                                        const GALGAS_bool & in_value,
                                        const GALGAS_objectAttributes & in_subAttributes
                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value),
mAttribute_subAttributes (in_subAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_boolAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAttribute ;
}

void cPtr_boolAttribute::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@boolAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_subAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_boolAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value, mAttribute_subAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @boolAttribute type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAttribute ("boolAttribute",
                                      & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boolAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boolAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAttribute GALGAS_boolAttribute::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolAttribute result ;
  const GALGAS_boolAttribute * p = (const GALGAS_boolAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_bool_5F_t::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bool_5F_t * p = (const cPtr_bool_5F_t *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bool_5F_t) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_bool_5F_t::objectCompare (const GALGAS_bool_5F_t & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t::GALGAS_bool_5F_t (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t GALGAS_bool_5F_t::constructor_default (LOCATION_ARGS) {
  return GALGAS_bool_5F_t::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_location::constructor_nowhere (HERE),
                                            GALGAS_bool::constructor_default (HERE)
                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t::GALGAS_bool_5F_t (const cPtr_bool_5F_t * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bool_5F_t) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t GALGAS_bool_5F_t::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                    const GALGAS_location & inAttribute_location,
                                                    const GALGAS_bool & inAttribute_value
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bool_5F_t result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bool_5F_t (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bool_5F_t::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_bool_5F_t * p = (const cPtr_bool_5F_t *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bool_5F_t) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_bool_5F_t::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                           Pointer class for @bool_t class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bool_5F_t::cPtr_bool_5F_t (const GALGAS_lstring & in_oil_5F_desc,
                                const GALGAS_location & in_location,
                                const GALGAS_bool & in_value
                                COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_bool_5F_t::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bool_5F_t ;
}

void cPtr_bool_5F_t::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@bool_t:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_bool_5F_t::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bool_5F_t (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @bool_t type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bool_5F_t ("bool_t",
                                  & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bool_5F_t::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bool_5F_t ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bool_5F_t::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bool_5F_t (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool_5F_t GALGAS_bool_5F_t::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bool_5F_t result ;
  const GALGAS_bool_5F_t * p = (const GALGAS_bool_5F_t *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bool_5F_t *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bool_t", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_bool_5F_t::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_bool_5F_t * p = (const cPtr_void_5F_bool_5F_t *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_bool_5F_t) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_bool_5F_t::objectCompare (const GALGAS_void_5F_bool_5F_t & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t::GALGAS_void_5F_bool_5F_t (void) :
GALGAS_bool_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_bool_5F_t::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_bool::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t::GALGAS_void_5F_bool_5F_t (const cPtr_void_5F_bool_5F_t * inSourcePtr) :
GALGAS_bool_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_bool_5F_t) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                    const GALGAS_location & inAttribute_location,
                                                                    const GALGAS_bool & inAttribute_value
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_bool_5F_t result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_bool_5F_t (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @void_bool_t class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_bool_5F_t::cPtr_void_5F_bool_5F_t (const GALGAS_lstring & in_oil_5F_desc,
                                                const GALGAS_location & in_location,
                                                const GALGAS_bool & in_value
                                                COMMA_LOCATION_ARGS) :
cPtr_bool_5F_t (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_bool_5F_t::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_bool_5F_t ;
}

void cPtr_void_5F_bool_5F_t::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@void_bool_t:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_bool_5F_t::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_bool_5F_t (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @void_bool_t type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_bool_5F_t ("void_bool_t",
                                          & kTypeDescriptor_GALGAS_bool_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_bool_5F_t::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_bool_5F_t ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_bool_5F_t::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_bool_5F_t (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_bool_5F_t result ;
  const GALGAS_void_5F_bool_5F_t * p = (const GALGAS_void_5F_bool_5F_t *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_bool_5F_t *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_bool_t", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumAttribute * p = (const cPtr_enumAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_subAttributes.objectCompare (p->mAttribute_subAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumAttribute::objectCompare (const GALGAS_enumAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute::GALGAS_enumAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute GALGAS_enumAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_location::constructor_nowhere (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_objectAttributes::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute::GALGAS_enumAttribute (const cPtr_enumAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute GALGAS_enumAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                            const GALGAS_location & inAttribute_location,
                                                            const GALGAS_string & inAttribute_value,
                                                            const GALGAS_objectAttributes & inAttribute_subAttributes
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid () && inAttribute_subAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value, inAttribute_subAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumAttribute::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumAttribute * p = (const cPtr_enumAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumAttribute) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_enumAttribute::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_enumAttribute::reader_subAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectAttributes result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumAttribute * p = (const cPtr_enumAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumAttribute) ;
    result = p->mAttribute_subAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes cPtr_enumAttribute::reader_subAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_subAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @enumAttribute class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumAttribute::cPtr_enumAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                        const GALGAS_location & in_location,
                                        const GALGAS_string & in_value,
                                        const GALGAS_objectAttributes & in_subAttributes
                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value),
mAttribute_subAttributes (in_subAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumAttribute ;
}

void cPtr_enumAttribute::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@enumAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_subAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value, mAttribute_subAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @enumAttribute type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumAttribute ("enumAttribute",
                                      & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumAttribute GALGAS_enumAttribute::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumAttribute result ;
  const GALGAS_enumAttribute * p = (const GALGAS_enumAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_float_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_float_5F_class * p = (const cPtr_float_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_float_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_float_5F_class::objectCompare (const GALGAS_float_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class::GALGAS_float_5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class GALGAS_float_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_float_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE),
                                                 GALGAS_double::constructor_default (HERE)
                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class::GALGAS_float_5F_class (const cPtr_float_5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_float_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class GALGAS_float_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                              const GALGAS_location & inAttribute_location,
                                                              const GALGAS_double & inAttribute_value
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_float_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_float_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_float_5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (NULL != mObjectPtr) {
    const cPtr_float_5F_class * p = (const cPtr_float_5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_float_5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double cPtr_float_5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @float_class class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_float_5F_class::cPtr_float_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                          const GALGAS_location & in_location,
                                          const GALGAS_double & in_value
                                          COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_float_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_float_5F_class ;
}

void cPtr_float_5F_class::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@float_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_float_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_float_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @float_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_float_5F_class ("float_class",
                                       & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_float_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_float_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_float_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_float_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_float_5F_class GALGAS_float_5F_class::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_float_5F_class result ;
  const GALGAS_float_5F_class * p = (const GALGAS_float_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_float_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("float_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_float_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_float_5F_class * p = (const cPtr_void_5F_float_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_float_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_float_5F_class::objectCompare (const GALGAS_void_5F_float_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class::GALGAS_void_5F_float_5F_class (void) :
GALGAS_float_5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_float_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_double::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class::GALGAS_void_5F_float_5F_class (const cPtr_void_5F_float_5F_class * inSourcePtr) :
GALGAS_float_5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_float_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                              const GALGAS_location & inAttribute_location,
                                                                              const GALGAS_double & inAttribute_value
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_float_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_float_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @void_float_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_float_5F_class::cPtr_void_5F_float_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                          const GALGAS_location & in_location,
                                                          const GALGAS_double & in_value
                                                          COMMA_LOCATION_ARGS) :
cPtr_float_5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_float_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_float_5F_class ;
}

void cPtr_void_5F_float_5F_class::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@void_float_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_float_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_float_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_float_class type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_float_5F_class ("void_float_class",
                                               & kTypeDescriptor_GALGAS_float_5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_float_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_float_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_float_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_float_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_float_5F_class result ;
  const GALGAS_void_5F_float_5F_class * p = (const GALGAS_void_5F_float_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_float_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_float_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_multipleAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_multipleAttribute * p = (const cPtr_multipleAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_multipleAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_items.objectCompare (p->mAttribute_items) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_multipleAttribute::objectCompare (const GALGAS_multipleAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute::GALGAS_multipleAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute GALGAS_multipleAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_multipleAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_identifierList::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute::GALGAS_multipleAttribute (const cPtr_multipleAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multipleAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute GALGAS_multipleAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                    const GALGAS_location & inAttribute_location,
                                                                    const GALGAS_identifierList & inAttribute_items
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_multipleAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_items.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_multipleAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_items COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList GALGAS_multipleAttribute::reader_items (UNUSED_LOCATION_ARGS) const {
  GALGAS_identifierList result ;
  if (NULL != mObjectPtr) {
    const cPtr_multipleAttribute * p = (const cPtr_multipleAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multipleAttribute) ;
    result = p->mAttribute_items ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList cPtr_multipleAttribute::reader_items (UNUSED_LOCATION_ARGS) const {
  return mAttribute_items ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @multipleAttribute class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_multipleAttribute::cPtr_multipleAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                                const GALGAS_location & in_location,
                                                const GALGAS_identifierList & in_items
                                                COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_items (in_items) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_multipleAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleAttribute ;
}

void cPtr_multipleAttribute::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@multipleAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_items.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_multipleAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_multipleAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_items COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @multipleAttribute type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleAttribute ("multipleAttribute",
                                          & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleAttribute GALGAS_multipleAttribute::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_multipleAttribute result ;
  const GALGAS_multipleAttribute * p = (const GALGAS_multipleAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_33__32__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_33__32__5F_class * p = (const cPtr_sint_33__32__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_33__32__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_33__32__5F_class::objectCompare (const GALGAS_sint_33__32__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class::GALGAS_sint_33__32__5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class GALGAS_sint_33__32__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_sint_33__32__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_sint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class::GALGAS_sint_33__32__5F_class (const cPtr_sint_33__32__5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_33__32__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class GALGAS_sint_33__32__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                            const GALGAS_location & inAttribute_location,
                                                                            const GALGAS_sint & inAttribute_value
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_33__32__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint GALGAS_sint_33__32__5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint result ;
  if (NULL != mObjectPtr) {
    const cPtr_sint_33__32__5F_class * p = (const cPtr_sint_33__32__5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sint_33__32__5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint cPtr_sint_33__32__5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @sint32_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_33__32__5F_class::cPtr_sint_33__32__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                        const GALGAS_location & in_location,
                                                        const GALGAS_sint & in_value
                                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_33__32__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32__5F_class ;
}

void cPtr_sint_33__32__5F_class::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@sint32_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_33__32__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_33__32__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @sint32_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_33__32__5F_class ("sint32_class",
                                              & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_33__32__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_33__32__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_33__32__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32__5F_class GALGAS_sint_33__32__5F_class::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32__5F_class result ;
  const GALGAS_sint_33__32__5F_class * p = (const GALGAS_sint_33__32__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_33__32__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint32_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_sint_33__32__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_sint_33__32__5F_class * p = (const cPtr_void_5F_sint_33__32__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_sint_33__32__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_sint_33__32__5F_class::objectCompare (const GALGAS_void_5F_sint_33__32__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class::GALGAS_void_5F_sint_33__32__5F_class (void) :
GALGAS_sint_33__32__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class GALGAS_void_5F_sint_33__32__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_sint_33__32__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_sint::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class::GALGAS_void_5F_sint_33__32__5F_class (const cPtr_void_5F_sint_33__32__5F_class * inSourcePtr) :
GALGAS_sint_33__32__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_sint_33__32__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class GALGAS_void_5F_sint_33__32__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_sint & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_33__32__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_sint_33__32__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_sint32_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_sint_33__32__5F_class::cPtr_void_5F_sint_33__32__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_sint & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_sint_33__32__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_sint_33__32__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_33__32__5F_class ;
}

void cPtr_void_5F_sint_33__32__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_sint32_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_sint_33__32__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_sint_33__32__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_sint32_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_sint_33__32__5F_class ("void_sint32_class",
                                                      & kTypeDescriptor_GALGAS_sint_33__32__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_sint_33__32__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_33__32__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_sint_33__32__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_sint_33__32__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_33__32__5F_class GALGAS_void_5F_sint_33__32__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_33__32__5F_class result ;
  const GALGAS_void_5F_sint_33__32__5F_class * p = (const GALGAS_void_5F_sint_33__32__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_sint_33__32__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_sint32_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_36__34__5F_class * p = (const cPtr_sint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_36__34__5F_class::objectCompare (const GALGAS_sint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class::GALGAS_sint_36__34__5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class GALGAS_sint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_sint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_sint_36__34_::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class::GALGAS_sint_36__34__5F_class (const cPtr_sint_36__34__5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class GALGAS_sint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                            const GALGAS_location & inAttribute_location,
                                                                            const GALGAS_sint_36__34_ & inAttribute_value
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_sint_36__34__5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_sint_36__34__5F_class * p = (const cPtr_sint_36__34__5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sint_36__34__5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ cPtr_sint_36__34__5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @sint64_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_36__34__5F_class::cPtr_sint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                        const GALGAS_location & in_location,
                                                        const GALGAS_sint_36__34_ & in_value
                                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34__5F_class ;
}

void cPtr_sint_36__34__5F_class::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@sint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @sint64_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34__5F_class ("sint64_class",
                                              & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34__5F_class GALGAS_sint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34__5F_class result ;
  const GALGAS_sint_36__34__5F_class * p = (const GALGAS_sint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_sint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_sint_36__34__5F_class * p = (const cPtr_void_5F_sint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_sint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_sint_36__34__5F_class::objectCompare (const GALGAS_void_5F_sint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class::GALGAS_void_5F_sint_36__34__5F_class (void) :
GALGAS_sint_36__34__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_sint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_sint_36__34_::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class::GALGAS_void_5F_sint_36__34__5F_class (const cPtr_void_5F_sint_36__34__5F_class * inSourcePtr) :
GALGAS_sint_36__34__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_sint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_sint_36__34_ & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_sint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_sint64_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_sint_36__34__5F_class::cPtr_void_5F_sint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_sint_36__34_ & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_sint_36__34__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_sint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ;
}

void cPtr_void_5F_sint_36__34__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_sint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_sint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_sint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_sint64_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ("void_sint64_class",
                                                      & kTypeDescriptor_GALGAS_sint_36__34__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_sint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_sint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_sint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_36__34__5F_class result ;
  const GALGAS_void_5F_sint_36__34__5F_class * p = (const GALGAS_void_5F_sint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_sint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_sint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_stringAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringAttribute * p = (const cPtr_stringAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_stringAttribute::objectCompare (const GALGAS_stringAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute::GALGAS_stringAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute GALGAS_stringAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_stringAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE),
                                                  GALGAS_string::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute::GALGAS_stringAttribute (const cPtr_stringAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute GALGAS_stringAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                const GALGAS_location & inAttribute_location,
                                                                const GALGAS_string & inAttribute_value
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_stringAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_stringAttribute::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_stringAttribute * p = (const cPtr_stringAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAttribute) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_stringAttribute::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @stringAttribute class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_stringAttribute::cPtr_stringAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                            const GALGAS_location & in_location,
                                            const GALGAS_string & in_value
                                            COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_stringAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAttribute ;
}

void cPtr_stringAttribute::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@stringAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_stringAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @stringAttribute type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringAttribute ("stringAttribute",
                                        & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAttribute GALGAS_stringAttribute::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringAttribute result ;
  const GALGAS_stringAttribute * p = (const GALGAS_stringAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_string_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_string_5F_class * p = (const cPtr_string_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_string_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_string_5F_class::objectCompare (const GALGAS_string_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class::GALGAS_string_5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class GALGAS_string_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_string_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE),
                                                  GALGAS_string::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class::GALGAS_string_5F_class (const cPtr_string_5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_string_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class GALGAS_string_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                const GALGAS_location & inAttribute_location,
                                                                const GALGAS_string & inAttribute_value
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_string_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_string_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_string_5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_string_5F_class * p = (const cPtr_string_5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_string_5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_string_5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @string_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_string_5F_class::cPtr_string_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                            const GALGAS_location & in_location,
                                            const GALGAS_string & in_value
                                            COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_string_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_string_5F_class ;
}

void cPtr_string_5F_class::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@string_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_string_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_string_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @string_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_string_5F_class ("string_class",
                                        & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_string_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_string_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_string_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_string_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string_5F_class GALGAS_string_5F_class::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string_5F_class result ;
  const GALGAS_string_5F_class * p = (const GALGAS_string_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_string_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("string_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_string_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_string_5F_class * p = (const cPtr_void_5F_string_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_string_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_string_5F_class::objectCompare (const GALGAS_void_5F_string_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class::GALGAS_void_5F_string_5F_class (void) :
GALGAS_string_5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_string_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_string::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class::GALGAS_void_5F_string_5F_class (const cPtr_void_5F_string_5F_class * inSourcePtr) :
GALGAS_string_5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_string_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                const GALGAS_location & inAttribute_location,
                                                                                const GALGAS_string & inAttribute_value
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_string_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_string_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_string_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_string_5F_class::cPtr_void_5F_string_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                            const GALGAS_location & in_location,
                                                            const GALGAS_string & in_value
                                                            COMMA_LOCATION_ARGS) :
cPtr_string_5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_string_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_string_5F_class ;
}

void cPtr_void_5F_string_5F_class::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@void_string_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_string_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_string_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_string_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_string_5F_class ("void_string_class",
                                                & kTypeDescriptor_GALGAS_string_5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_string_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_string_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_string_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_string_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_string_5F_class result ;
  const GALGAS_void_5F_string_5F_class * p = (const GALGAS_void_5F_string_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_string_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_string_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structAttribute::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structAttribute * p = (const cPtr_structAttribute *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structAttribute) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_structName.objectCompare (p->mAttribute_structName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_subAttributes.objectCompare (p->mAttribute_subAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structAttribute::objectCompare (const GALGAS_structAttribute & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute::GALGAS_structAttribute (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute GALGAS_structAttribute::constructor_default (LOCATION_ARGS) {
  return GALGAS_structAttribute::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_objectAttributes::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute::GALGAS_structAttribute (const cPtr_structAttribute * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structAttribute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute GALGAS_structAttribute::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                const GALGAS_location & inAttribute_location,
                                                                const GALGAS_lstring & inAttribute_structName,
                                                                const GALGAS_objectAttributes & inAttribute_subAttributes
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structAttribute result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_structName.isValid () && inAttribute_subAttributes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structAttribute (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_structName, inAttribute_subAttributes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structAttribute::reader_structName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structAttribute * p = (const cPtr_structAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structAttribute) ;
    result = p->mAttribute_structName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structAttribute::reader_structName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_structName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_structAttribute::reader_subAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectAttributes result ;
  if (NULL != mObjectPtr) {
    const cPtr_structAttribute * p = (const cPtr_structAttribute *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structAttribute) ;
    result = p->mAttribute_subAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes cPtr_structAttribute::reader_subAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_subAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @structAttribute class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structAttribute::cPtr_structAttribute (const GALGAS_lstring & in_oil_5F_desc,
                                            const GALGAS_location & in_location,
                                            const GALGAS_lstring & in_structName,
                                            const GALGAS_objectAttributes & in_subAttributes
                                            COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_structName (in_structName),
mAttribute_subAttributes (in_subAttributes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structAttribute::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structAttribute ;
}

void cPtr_structAttribute::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@structAttribute:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_structName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_subAttributes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structAttribute::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structAttribute (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_structName, mAttribute_subAttributes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @structAttribute type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structAttribute ("structAttribute",
                                        & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structAttribute::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structAttribute::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structAttribute (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structAttribute GALGAS_structAttribute::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structAttribute result ;
  const GALGAS_structAttribute * p = (const GALGAS_structAttribute *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structAttribute *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structAttribute", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_33__32__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_33__32__5F_class * p = (const cPtr_uint_33__32__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_33__32__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_33__32__5F_class::objectCompare (const GALGAS_uint_33__32__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class::GALGAS_uint_33__32__5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class GALGAS_uint_33__32__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_33__32__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_uint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class::GALGAS_uint_33__32__5F_class (const cPtr_uint_33__32__5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_33__32__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class GALGAS_uint_33__32__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                            const GALGAS_location & inAttribute_location,
                                                                            const GALGAS_uint & inAttribute_value
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_33__32__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint_33__32__5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_33__32__5F_class * p = (const cPtr_uint_33__32__5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_33__32__5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_uint_33__32__5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @uint32_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_33__32__5F_class::cPtr_uint_33__32__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                        const GALGAS_location & in_location,
                                                        const GALGAS_uint & in_value
                                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_33__32__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32__5F_class ;
}

void cPtr_uint_33__32__5F_class::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@uint32_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_33__32__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_33__32__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @uint32_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_33__32__5F_class ("uint32_class",
                                              & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_33__32__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_33__32__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_33__32__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32__5F_class GALGAS_uint_33__32__5F_class::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32__5F_class result ;
  const GALGAS_uint_33__32__5F_class * p = (const GALGAS_uint_33__32__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_33__32__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint32_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_uint_33__32__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_uint_33__32__5F_class * p = (const cPtr_void_5F_uint_33__32__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_uint_33__32__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_uint_33__32__5F_class::objectCompare (const GALGAS_void_5F_uint_33__32__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class::GALGAS_void_5F_uint_33__32__5F_class (void) :
GALGAS_uint_33__32__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class GALGAS_void_5F_uint_33__32__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_uint_33__32__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_uint::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class::GALGAS_void_5F_uint_33__32__5F_class (const cPtr_void_5F_uint_33__32__5F_class * inSourcePtr) :
GALGAS_uint_33__32__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_uint_33__32__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class GALGAS_void_5F_uint_33__32__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_uint & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_33__32__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_uint_33__32__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_uint32_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_uint_33__32__5F_class::cPtr_void_5F_uint_33__32__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_uint & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_uint_33__32__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_uint_33__32__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_33__32__5F_class ;
}

void cPtr_void_5F_uint_33__32__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_uint32_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_uint_33__32__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_uint_33__32__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_uint32_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_uint_33__32__5F_class ("void_uint32_class",
                                                      & kTypeDescriptor_GALGAS_uint_33__32__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_uint_33__32__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_33__32__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_uint_33__32__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_uint_33__32__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_33__32__5F_class GALGAS_void_5F_uint_33__32__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_33__32__5F_class result ;
  const GALGAS_void_5F_uint_33__32__5F_class * p = (const GALGAS_void_5F_uint_33__32__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_uint_33__32__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_uint32_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_36__34__5F_class * p = (const cPtr_uint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_36__34__5F_class::objectCompare (const GALGAS_uint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class::GALGAS_uint_36__34__5F_class (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class GALGAS_uint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_uint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_uint_36__34_::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class::GALGAS_uint_36__34__5F_class (const cPtr_uint_36__34__5F_class * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class GALGAS_uint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                            const GALGAS_location & inAttribute_location,
                                                                            const GALGAS_uint_36__34_ & inAttribute_value
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34__5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_uint_36__34__5F_class * p = (const cPtr_uint_36__34__5F_class *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_uint_36__34__5F_class) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ cPtr_uint_36__34__5F_class::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @uint64_class class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_36__34__5F_class::cPtr_uint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                        const GALGAS_location & in_location,
                                                        const GALGAS_uint_36__34_ & in_value
                                                        COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34__5F_class ;
}

void cPtr_uint_36__34__5F_class::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@uint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @uint64_class type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34__5F_class ("uint64_class",
                                              & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34__5F_class GALGAS_uint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34__5F_class result ;
  const GALGAS_uint_36__34__5F_class * p = (const GALGAS_uint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_uint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_uint_36__34__5F_class * p = (const cPtr_void_5F_uint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_uint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_uint_36__34__5F_class::objectCompare (const GALGAS_void_5F_uint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class::GALGAS_void_5F_uint_36__34__5F_class (void) :
GALGAS_uint_36__34__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_uint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_uint_36__34_::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class::GALGAS_void_5F_uint_36__34__5F_class (const cPtr_void_5F_uint_36__34__5F_class * inSourcePtr) :
GALGAS_uint_36__34__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_uint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_uint_36__34_ & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_uint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_uint64_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_uint_36__34__5F_class::cPtr_void_5F_uint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_uint_36__34_ & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_uint_36__34__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_uint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ;
}

void cPtr_void_5F_uint_36__34__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_uint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_uint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_uint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_uint64_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ("void_uint64_class",
                                                      & kTypeDescriptor_GALGAS_uint_36__34__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_uint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_uint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_uint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_36__34__5F_class result ;
  const GALGAS_void_5F_uint_36__34__5F_class * p = (const GALGAS_void_5F_uint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_uint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_uint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void * p = (const cPtr_void *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void::objectCompare (const GALGAS_void & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void::GALGAS_void (void) :
GALGAS_object_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void GALGAS_void::constructor_default (LOCATION_ARGS) {
  return GALGAS_void::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)
                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void::GALGAS_void (const cPtr_void * inSourcePtr) :
GALGAS_object_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void GALGAS_void::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                          const GALGAS_location & inAttribute_location
                                          COMMA_LOCATION_ARGS) {
  GALGAS_void result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void (inAttribute_oil_5F_desc, inAttribute_location COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                            Pointer class for @void class                                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void::cPtr_void (const GALGAS_lstring & in_oil_5F_desc,
                      const GALGAS_location & in_location
                      COMMA_LOCATION_ARGS) :
cPtr_object_5F_t (in_oil_5F_desc, in_location COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void ;
}

void cPtr_void::description (C_String & ioString,
                             const int32_t inIndentation) const {
  ioString << "[@void:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void (mAttribute_oil_5F_desc, mAttribute_location COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @void type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void ("void",
                             & kTypeDescriptor_GALGAS_object_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void GALGAS_void::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_void result ;
  const GALGAS_void * p = (const GALGAS_void *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_oil_5F_obj::objectCompare (const GALGAS_oil_5F_obj & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj::GALGAS_oil_5F_obj (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj::GALGAS_oil_5F_obj (const cPtr_oil_5F_obj * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_oil_5F_obj) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_oil_5F_obj::reader_desc (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_oil_5F_obj * p = (const cPtr_oil_5F_obj *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_oil_5F_obj) ;
    result = p->mAttribute_desc ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_oil_5F_obj::reader_desc (UNUSED_LOCATION_ARGS) const {
  return mAttribute_desc ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @oil_obj class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_oil_5F_obj::cPtr_oil_5F_obj (const GALGAS_lstring & in_desc
                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_desc (in_desc) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @oil_obj type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_oil_5F_obj ("oil_obj",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_oil_5F_obj::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_oil_5F_obj ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_oil_5F_obj::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_oil_5F_obj (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj GALGAS_oil_5F_obj::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_oil_5F_obj result ;
  const GALGAS_oil_5F_obj * p = (const GALGAS_oil_5F_obj *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_oil_5F_obj *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("oil_obj", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "oil",
  "OIL",
  "goilTemplate",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "an '.oil' source file",
  "an '.OIL' source file",
  "a Goil template file",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const char * kVersionString = "version " PROJECT_VERSION_STRING " [debug]" ;
#else
  static const char * kVersionString = "version " PROJECT_VERSION_STRING ;
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_goil_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("goil_program.galgas", 12)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_1'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__31_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_goil_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("goil_program.galgas", 16)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_2'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__32_ (const GALGAS_lstring /* constinArgument_inSourceFile */,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         kVersionString,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  bool verboseOptionOn = true ;
  int16_t returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      verboseOptionOn = gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        setCurrentCompiledFilePath (sourceFilesArray (i COMMA_HERE)) ;
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int16_t r = 0 ;
        if (fileExtension == "oil") {
          routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
        }else if (fileExtension == "OIL") {
          routine_programRule_5F__31_ (sourceFilePath, commonLexique COMMA_HERE) ;
        }else if (fileExtension == "goilTemplate") {
          routine_programRule_5F__32_ (sourceFilePath, commonLexique COMMA_HERE) ;
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
        closeTrace () ;
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonLexique COMMA_HERE) ;
    //--- Display error and warnings count
      if (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category Reader '@Ttype messageGoilTemplateType'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_messageGoilTemplateType (const GALGAS_Ttype & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_Ttype temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_Ttype::kNotBuilt:
      break ;
    case GALGAS_Ttype::kEnum_boolType: {
      result_result = GALGAS_string ("bool") ;
      } break ;
    case GALGAS_Ttype::kEnum_intType: {
      result_result = GALGAS_string ("int") ;
      } break ;
    case GALGAS_Ttype::kEnum_floatType: {
      result_result = GALGAS_string ("float") ;
      } break ;
    case GALGAS_Ttype::kEnum_stringType: {
      result_result = GALGAS_string ("string") ;
      } break ;
    case GALGAS_Ttype::kEnum_listType: {
      result_result = GALGAS_string ("list") ;
      } break ;
    case GALGAS_Ttype::kEnum_mapType: {
      result_result = GALGAS_string ("map") ;
      } break ;
    case GALGAS_Ttype::kEnum_structType: {
      result_result = GALGAS_string ("struct") ;
      } break ;
    case GALGAS_Ttype::kEnum_enumType: {
      result_result = GALGAS_string ("enum") ;
      } break ;
    case GALGAS_Ttype::kEnum_functionType: {
      result_result = GALGAS_string ("function") ;
      } break ;
    case GALGAS_Ttype::kEnum_unconstructedType: {
      result_result = GALGAS_string ("unconstructed") ;
      } break ;
    }
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Category Reader '@dataType oilType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_oilType (const GALGAS_dataType & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dataType temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_dataType::kNotBuilt:
      break ;
    case GALGAS_dataType::kEnum_void: {
      result_result = GALGAS_string ("VOID") ;
      } break ;
    case GALGAS_dataType::kEnum_uint_33__32_Number: {
      result_result = GALGAS_string ("UINT32") ;
      } break ;
    case GALGAS_dataType::kEnum_sint_33__32_Number: {
      result_result = GALGAS_string ("INT32") ;
      } break ;
    case GALGAS_dataType::kEnum_uint_36__34_Number: {
      result_result = GALGAS_string ("UINT64") ;
      } break ;
    case GALGAS_dataType::kEnum_sint_36__34_Number: {
      result_result = GALGAS_string ("INT64") ;
      } break ;
    case GALGAS_dataType::kEnum_floatNumber: {
      result_result = GALGAS_string ("FLOAT") ;
      } break ;
    case GALGAS_dataType::kEnum_string: {
      result_result = GALGAS_string ("STRING") ;
      } break ;
    case GALGAS_dataType::kEnum_enumeration: {
      result_result = GALGAS_string ("ENUM") ;
      } break ;
    case GALGAS_dataType::kEnum_boolean: {
      result_result = GALGAS_string ("BOOLEAN") ;
      } break ;
    case GALGAS_dataType::kEnum_identifier: {
      result_result = GALGAS_string ("IDENTIFIER") ;
      } break ;
    case GALGAS_dataType::kEnum_objectType: {
      result_result = GALGAS_string ("OBJECT_TYPE") ;
      } break ;
    case GALGAS_dataType::kEnum_structType: {
      result_result = GALGAS_string ("STRUCT") ;
      } break ;
    }
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract category method '@attributeRange enclose'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_attributeRange_enclose> gCategoryMethodTable_attributeRange_enclose ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enclose (const int32_t inClassIndex,
                                  categoryMethodSignature_attributeRange_enclose inMethod) {
  gCategoryMethodTable_attributeRange_enclose.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_attributeRange_enclose (void) {
  gCategoryMethodTable_attributeRange_enclose.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_attributeRange_enclose (NULL,
                                                   freeCategoryMethod_attributeRange_enclose) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enclose (const cPtr_attributeRange * inObject,
                                 GALGAS_bool & out_isWithin,
                                 const GALGAS_attributeRange constin_value,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_isWithin.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_attributeRange) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_attributeRange_enclose f = NULL ;
    if (classIndex < gCategoryMethodTable_attributeRange_enclose.count ()) {
      f = gCategoryMethodTable_attributeRange_enclose (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_attributeRange_enclose.count ()) {
           f = gCategoryMethodTable_attributeRange_enclose (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_attributeRange_enclose.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_isWithin, constin_value, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category reader '@implementation hasKey'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_implementation_hasKey> gCategoryReaderTable_implementation_hasKey ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_hasKey (const int32_t inClassIndex,
                                 categoryReaderSignature_implementation_hasKey inReader) {
  gCategoryReaderTable_implementation_hasKey.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_hasKey (const cPtr_implementation * inObject,
                                       const GALGAS_string & in_key,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_implementation_hasKey f = NULL ;
    if (classIndex < gCategoryReaderTable_implementation_hasKey.count ()) {
      f = gCategoryReaderTable_implementation_hasKey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_implementation_hasKey.count ()) {
           f = gCategoryReaderTable_implementation_hasKey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_implementation_hasKey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_key, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_implementation_hasKey (const cPtr_implementation * inObject,
                                                         const GALGAS_string & constinArgument_key,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  result_result = object->mAttribute_imp.reader_hasKey (constinArgument_key COMMA_SOURCE_FILE ("implementation_types.galgas", 761)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_implementation_hasKey (void) {
  enterCategoryReader_hasKey (kTypeDescriptor_GALGAS_implementation.mSlotID,
                              categoryReader_implementation_hasKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_implementation_hasKey (void) {
  gCategoryReaderTable_implementation_hasKey.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_implementation_hasKey (defineCategoryReader_implementation_hasKey,
                                                  freeCategoryReader_implementation_hasKey) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category reader '@implementation hasLKey'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_implementation_hasLKey> gCategoryReaderTable_implementation_hasLKey ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_hasLKey (const int32_t inClassIndex,
                                  categoryReaderSignature_implementation_hasLKey inReader) {
  gCategoryReaderTable_implementation_hasLKey.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_hasLKey (const cPtr_implementation * inObject,
                                        const GALGAS_lstring & in_key,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_implementation_hasLKey f = NULL ;
    if (classIndex < gCategoryReaderTable_implementation_hasLKey.count ()) {
      f = gCategoryReaderTable_implementation_hasLKey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_implementation_hasLKey.count ()) {
           f = gCategoryReaderTable_implementation_hasLKey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_implementation_hasLKey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_key, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_implementation_hasLKey (const cPtr_implementation * inObject,
                                                          const GALGAS_lstring & constinArgument_key,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  result_result = object->mAttribute_imp.reader_hasKey (constinArgument_key.reader_string (SOURCE_FILE ("implementation_types.galgas", 767)) COMMA_SOURCE_FILE ("implementation_types.galgas", 767)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_implementation_hasLKey (void) {
  enterCategoryReader_hasLKey (kTypeDescriptor_GALGAS_implementation.mSlotID,
                               categoryReader_implementation_hasLKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_implementation_hasLKey (void) {
  gCategoryReaderTable_implementation_hasLKey.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_implementation_hasLKey (defineCategoryReader_implementation_hasLKey,
                                                   freeCategoryReader_implementation_hasLKey) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category reader '@implementation impObject'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_implementation_impObject> gCategoryReaderTable_implementation_impObject ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_impObject (const int32_t inClassIndex,
                                    categoryReaderSignature_implementation_impObject inReader) {
  gCategoryReaderTable_implementation_impObject.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject callCategoryReader_impObject (const cPtr_implementation * inObject,
                                                          const GALGAS_string & in_objKind,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implementationObject result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_implementation_impObject f = NULL ;
    if (classIndex < gCategoryReaderTable_implementation_impObject.count ()) {
      f = gCategoryReaderTable_implementation_impObject (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_implementation_impObject.count ()) {
           f = gCategoryReaderTable_implementation_impObject (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_implementation_impObject.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_objKind, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_implementationObject categoryReader_implementation_impObject (const cPtr_implementation * inObject,
                                                                            const GALGAS_string & constinArgument_objKind,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationObject result_obj ; // Returned variable
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  result_obj = GALGAS_implementationObject::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_types.galgas", 773))  COMMA_SOURCE_FILE ("implementation_types.galgas", 773)), GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_types.galgas", 773))  COMMA_SOURCE_FILE ("implementation_types.galgas", 773)) ;
  const enumGalgasBool test_0 = object->mAttribute_imp.reader_hasKey (constinArgument_objKind COMMA_SOURCE_FILE ("implementation_types.galgas", 774)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mAttribute_imp.method_get (function_lstringWith (constinArgument_objKind, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 775)), result_obj, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 775)) ;
  }
//---
  return result_obj ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_implementation_impObject (void) {
  enterCategoryReader_impObject (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                 categoryReader_implementation_impObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_implementation_impObject (void) {
  gCategoryReaderTable_implementation_impObject.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_implementation_impObject (defineCategoryReader_implementation_impObject,
                                                     freeCategoryReader_implementation_impObject) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@implementation checkTypeForKind'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_implementation_checkTypeForKind> gCategoryMethodTable_implementation_checkTypeForKind ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkTypeForKind (const int32_t inClassIndex,
                                           categoryMethodSignature_implementation_checkTypeForKind inMethod) {
  gCategoryMethodTable_implementation_checkTypeForKind.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkTypeForKind (const cPtr_implementation * inObject,
                                          const GALGAS_string constin_objKind,
                                          const GALGAS_string constin_attributeName,
                                          const GALGAS_dataType constin_expectedType,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_implementation_checkTypeForKind f = NULL ;
    if (classIndex < gCategoryMethodTable_implementation_checkTypeForKind.count ()) {
      f = gCategoryMethodTable_implementation_checkTypeForKind (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_implementation_checkTypeForKind.count ()) {
           f = gCategoryMethodTable_implementation_checkTypeForKind (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_implementation_checkTypeForKind.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_objKind, constin_attributeName, constin_expectedType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_implementation_checkTypeForKind (const cPtr_implementation * inObject,
                                                            const GALGAS_string constinArgument_objKind,
                                                            const GALGAS_string constinArgument_attributeName,
                                                            const GALGAS_dataType constinArgument_expectedType,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  const GALGAS_implementation temp_0 = object ;
  GALGAS_implementationObject var_obj = callCategoryReader_impObject ((const cPtr_implementation *) temp_0.ptr (), constinArgument_objKind, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 783)) ;
  {
  routine_checkTypeForAttribute (var_obj.reader_attributes (SOURCE_FILE ("implementation_types.galgas", 784)), constinArgument_attributeName, constinArgument_expectedType, inCompiler  COMMA_SOURCE_FILE ("implementation_types.galgas", 784)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_implementation_checkTypeForKind (void) {
  enterCategoryMethod_checkTypeForKind (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                        categoryMethod_implementation_checkTypeForKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_implementation_checkTypeForKind (void) {
  gCategoryMethodTable_implementation_checkTypeForKind.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementation_checkTypeForKind (defineCategoryMethod_implementation_checkTypeForKind,
                                                            freeCategoryMethod_implementation_checkTypeForKind) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@implementation checkObjectReferences'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_implementation_checkObjectReferences> gCategoryMethodTable_implementation_checkObjectReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkObjectReferences (const int32_t inClassIndex,
                                                categoryMethodSignature_implementation_checkObjectReferences inMethod) {
  gCategoryMethodTable_implementation_checkObjectReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkObjectReferences (const cPtr_implementation * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_implementation_checkObjectReferences f = NULL ;
    if (classIndex < gCategoryMethodTable_implementation_checkObjectReferences.count ()) {
      f = gCategoryMethodTable_implementation_checkObjectReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_implementation_checkObjectReferences.count ()) {
           f = gCategoryMethodTable_implementation_checkObjectReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_implementation_checkObjectReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_implementation_checkObjectReferences (const cPtr_implementation * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  cEnumerator_implementationMap enumerator_22260 (object->mAttribute_imp, kEnumeration_up) ;
  while (enumerator_22260.hasCurrentObject ()) {
    cEnumerator_implementationObjectMap enumerator_22295 (enumerator_22260.current_obj (HERE).reader_attributes (SOURCE_FILE ("implementation_types.galgas", 789)), kEnumeration_up) ;
    while (enumerator_22295.hasCurrentObject ()) {
      const GALGAS_implementation temp_0 = object ;
      callCategoryMethod_checkAttributeReferences ((const cPtr_impType *) enumerator_22295.current_type (HERE).ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 790)) ;
      enumerator_22295.gotoNextObject () ;
    }
    enumerator_22260.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_implementation_checkObjectReferences (void) {
  enterCategoryMethod_checkObjectReferences (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                             categoryMethod_implementation_checkObjectReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_implementation_checkObjectReferences (void) {
  gCategoryMethodTable_implementation_checkObjectReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementation_checkObjectReferences (defineCategoryMethod_implementation_checkObjectReferences,
                                                                 freeCategoryMethod_implementation_checkObjectReferences) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category reader '@objectAttributes fieldMap'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_objectAttributes_fieldMap> gCategoryReaderTable_objectAttributes_fieldMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_fieldMap (const int32_t inClassIndex,
                                   categoryReaderSignature_objectAttributes_fieldMap inReader) {
  gCategoryReaderTable_objectAttributes_fieldMap.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap callCategoryReader_fieldMap (const cPtr_objectAttributes * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_TfieldMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_objectAttributes) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_objectAttributes_fieldMap f = NULL ;
    if (classIndex < gCategoryReaderTable_objectAttributes_fieldMap.count ()) {
      f = gCategoryReaderTable_objectAttributes_fieldMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_objectAttributes_fieldMap.count ()) {
           f = gCategoryReaderTable_objectAttributes_fieldMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_objectAttributes_fieldMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_TfieldMap categoryReader_objectAttributes_fieldMap (const cPtr_objectAttributes * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_TfieldMap result_result ; // Returned variable
  const cPtr_objectAttributes * object = inObject ;
  macroValidSharedObject (object, cPtr_objectAttributes) ;
  result_result = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("systemConfig.galgas", 100)) ;
  cEnumerator_identifierMap enumerator_3533 (object->mAttribute_objectParams, kEnumeration_up) ;
  while (enumerator_3533.hasCurrentObject ()) {
    callCategoryMethod_set ((const cPtr_object_5F_t *) enumerator_3533.current_value (HERE).ptr (), enumerator_3533.current_lkey (HERE), result_result, inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 102)) ;
    enumerator_3533.gotoNextObject () ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_objectAttributes_fieldMap (void) {
  enterCategoryReader_fieldMap (kTypeDescriptor_GALGAS_objectAttributes.mSlotID,
                                categoryReader_objectAttributes_fieldMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_objectAttributes_fieldMap (void) {
  gCategoryReaderTable_objectAttributes_fieldMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_objectAttributes_fieldMap (defineCategoryReader_objectAttributes_fieldMap,
                                                      freeCategoryReader_objectAttributes_fieldMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@implementation verifyApplication'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_implementation_verifyApplication> gCategoryMethodTable_implementation_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_verifyApplication (const int32_t inClassIndex,
                                            categoryMethodSignature_implementation_verifyApplication inMethod) {
  gCategoryMethodTable_implementation_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_verifyApplication (const cPtr_implementation * inObject,
                                           const GALGAS_applicationDefinition constin_appDef,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_implementation_verifyApplication f = NULL ;
    if (classIndex < gCategoryMethodTable_implementation_verifyApplication.count ()) {
      f = gCategoryMethodTable_implementation_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_implementation_verifyApplication.count ()) {
           f = gCategoryMethodTable_implementation_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_implementation_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_appDef, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_implementation_verifyApplication (const cPtr_implementation * inObject,
                                                             const GALGAS_applicationDefinition constinArgument_appDef,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  cEnumerator_implementationMap enumerator_358 (object->mAttribute_imp, kEnumeration_up) ;
  while (enumerator_358.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_appDef.reader_objects (SOURCE_FILE ("semantic_verification.galgas", 11)).reader_hasKey (enumerator_358.current_lkey (HERE).reader_string (SOURCE_FILE ("semantic_verification.galgas", 11)) COMMA_SOURCE_FILE ("semantic_verification.galgas", 11)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_objectKind var_obj ;
      constinArgument_appDef.reader_objects (SOURCE_FILE ("semantic_verification.galgas", 13)).method_get (enumerator_358.current_lkey (HERE), var_obj, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 13)) ;
      callCategoryMethod_verifyApplication ((const cPtr_implementationObject *) enumerator_358.current_obj (HERE).ptr (), var_obj, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 14)) ;
    }
    enumerator_358.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_implementation_verifyApplication (void) {
  enterCategoryMethod_verifyApplication (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                         categoryMethod_implementation_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_implementation_verifyApplication (void) {
  gCategoryMethodTable_implementation_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementation_verifyApplication (defineCategoryMethod_implementation_verifyApplication,
                                                             freeCategoryMethod_implementation_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TtypeList_2D_element::GALGAS_TtypeList_2D_element (void) :
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TtypeList_2D_element::~ GALGAS_TtypeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TtypeList_2D_element::GALGAS_TtypeList_2D_element (const GALGAS_Ttype & inOperand0) :
mAttribute_mType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TtypeList_2D_element GALGAS_TtypeList_2D_element::constructor_new (const GALGAS_Ttype & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_TtypeList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_TtypeList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_TtypeList_2D_element::objectCompare (const GALGAS_TtypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_TtypeList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TtypeList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TtypeList_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @TtypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Ttype GALGAS_TtypeList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @TtypeList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TtypeList_2D_element ("TtypeList-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_TtypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TtypeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_TtypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TtypeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TtypeList_2D_element GALGAS_TtypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_TtypeList_2D_element result ;
  const GALGAS_TtypeList_2D_element * p = (const GALGAS_TtypeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TtypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TtypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMapList_2D_element::GALGAS_TfieldMapList_2D_element (void) :
mAttribute_mMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMapList_2D_element::~ GALGAS_TfieldMapList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMapList_2D_element::GALGAS_TfieldMapList_2D_element (const GALGAS_TfieldMap & inOperand0) :
mAttribute_mMap (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMapList_2D_element GALGAS_TfieldMapList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_TfieldMapList_2D_element (GALGAS_TfieldMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMapList_2D_element GALGAS_TfieldMapList_2D_element::constructor_new (const GALGAS_TfieldMap & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_TfieldMapList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_TfieldMapList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_TfieldMapList_2D_element::objectCompare (const GALGAS_TfieldMapList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMap.objectCompare (inOperand.mAttribute_mMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_TfieldMapList_2D_element::isValid (void) const {
  return mAttribute_mMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TfieldMapList_2D_element::drop (void) {
  mAttribute_mMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TfieldMapList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @TfieldMapList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap GALGAS_TfieldMapList_2D_element::reader_mMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @TfieldMapList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TfieldMapList_2D_element ("TfieldMapList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_TfieldMapList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TfieldMapList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_TfieldMapList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TfieldMapList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMapList_2D_element GALGAS_TfieldMapList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_TfieldMapList_2D_element result ;
  const GALGAS_TfieldMapList_2D_element * p = (const GALGAS_TfieldMapList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TfieldMapList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TfieldMapList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element::GALGAS_uint_33__32_List_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element::~ GALGAS_uint_33__32_List_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element::GALGAS_uint_33__32_List_2D_element (const GALGAS_location & inOperand0,
                                                                        const GALGAS_uint & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element GALGAS_uint_33__32_List_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uint_33__32_List_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                             GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element GALGAS_uint_33__32_List_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                        const GALGAS_uint & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint_33__32_List_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_uint_33__32_List_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uint_33__32_List_2D_element::objectCompare (const GALGAS_uint_33__32_List_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_uint_33__32_List_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_33__32_List_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_33__32_List_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @uint32List-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_uint_33__32_List_2D_element::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint_33__32_List_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @uint32List-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_33__32_List_2D_element ("uint32List-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_33__32_List_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32_List_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_33__32_List_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_33__32_List_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element GALGAS_uint_33__32_List_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32_List_2D_element result ;
  const GALGAS_uint_33__32_List_2D_element * p = (const GALGAS_uint_33__32_List_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_33__32_List_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint32List-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element::GALGAS_uint_36__34_List_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element::~ GALGAS_uint_36__34_List_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element::GALGAS_uint_36__34_List_2D_element (const GALGAS_location & inOperand0,
                                                                        const GALGAS_uint_36__34_ & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element GALGAS_uint_36__34_List_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uint_36__34_List_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                             GALGAS_uint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element GALGAS_uint_36__34_List_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                        const GALGAS_uint_36__34_ & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint_36__34_List_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_uint_36__34_List_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uint_36__34_List_2D_element::objectCompare (const GALGAS_uint_36__34_List_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_uint_36__34_List_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_List_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_List_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @uint64List-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_uint_36__34_List_2D_element::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_List_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @uint64List-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_List_2D_element ("uint64List-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_List_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_List_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_List_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_List_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element GALGAS_uint_36__34_List_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_List_2D_element result ;
  const GALGAS_uint_36__34_List_2D_element * p = (const GALGAS_uint_36__34_List_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_List_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64List-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element::GALGAS_sint_33__32_List_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element::~ GALGAS_sint_33__32_List_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element::GALGAS_sint_33__32_List_2D_element (const GALGAS_location & inOperand0,
                                                                        const GALGAS_sint & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element GALGAS_sint_33__32_List_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sint_33__32_List_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                             GALGAS_sint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element GALGAS_sint_33__32_List_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                        const GALGAS_sint & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_33__32_List_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sint_33__32_List_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sint_33__32_List_2D_element::objectCompare (const GALGAS_sint_33__32_List_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sint_33__32_List_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sint_33__32_List_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sint_33__32_List_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @sint32List-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_sint_33__32_List_2D_element::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint GALGAS_sint_33__32_List_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sint32List-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_33__32_List_2D_element ("sint32List-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_33__32_List_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32_List_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_33__32_List_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_33__32_List_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element GALGAS_sint_33__32_List_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32_List_2D_element result ;
  const GALGAS_sint_33__32_List_2D_element * p = (const GALGAS_sint_33__32_List_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_33__32_List_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint32List-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element::GALGAS_sint_36__34_List_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element::~ GALGAS_sint_36__34_List_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element::GALGAS_sint_36__34_List_2D_element (const GALGAS_location & inOperand0,
                                                                        const GALGAS_sint_36__34_ & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element GALGAS_sint_36__34_List_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sint_36__34_List_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                             GALGAS_sint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element GALGAS_sint_36__34_List_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                        const GALGAS_sint_36__34_ & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_List_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sint_36__34_List_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sint_36__34_List_2D_element::objectCompare (const GALGAS_sint_36__34_List_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sint_36__34_List_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sint_36__34_List_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sint_36__34_List_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @sint64List-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_sint_36__34_List_2D_element::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_sint_36__34_List_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sint64List-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_List_2D_element ("sint64List-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34_List_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_List_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34_List_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_List_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element GALGAS_sint_36__34_List_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_List_2D_element result ;
  const GALGAS_sint_36__34_List_2D_element * p = (const GALGAS_sint_36__34_List_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_List_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64List-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element::GALGAS_floatList_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element::~ GALGAS_floatList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element::GALGAS_floatList_2D_element (const GALGAS_location & inOperand0,
                                                          const GALGAS_double & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element GALGAS_floatList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_floatList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                      GALGAS_double::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element GALGAS_floatList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                          const GALGAS_double & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_floatList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_floatList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_floatList_2D_element::objectCompare (const GALGAS_floatList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_floatList_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_floatList_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_floatList_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @floatList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_floatList_2D_element::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_floatList_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @floatList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_floatList_2D_element ("floatList-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_floatList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_floatList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_floatList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_floatList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element GALGAS_floatList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_floatList_2D_element result ;
  const GALGAS_floatList_2D_element * p = (const GALGAS_floatList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_floatList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("floatList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Category reader '@impType autoAllowed'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_impType_autoAllowed> gCategoryReaderTable_impType_autoAllowed ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_autoAllowed (const int32_t inClassIndex,
                                      categoryReaderSignature_impType_autoAllowed inReader) {
  gCategoryReaderTable_impType_autoAllowed.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_autoAllowed (const cPtr_impType * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_impType_autoAllowed f = NULL ;
    if (classIndex < gCategoryReaderTable_impType_autoAllowed.count ()) {
      f = gCategoryReaderTable_impType_autoAllowed (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_impType_autoAllowed.count ()) {
           f = gCategoryReaderTable_impType_autoAllowed (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_impType_autoAllowed.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_impType_autoAllowed (const cPtr_impType * /* inObject */,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_impType_autoAllowed (void) {
  enterCategoryReader_autoAllowed (kTypeDescriptor_GALGAS_impType.mSlotID,
                                   categoryReader_impType_autoAllowed) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_impType_autoAllowed (void) {
  gCategoryReaderTable_impType_autoAllowed.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_impType_autoAllowed (defineCategoryReader_impType_autoAllowed,
                                                freeCategoryReader_impType_autoAllowed) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@impAutoDefaultType setDefault'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_impAutoDefaultType_setDefault> gCategoryMethodTable_impAutoDefaultType_setDefault ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_setDefault (const int32_t inClassIndex,
                                     categoryMethodSignature_impAutoDefaultType_setDefault inMethod) {
  gCategoryMethodTable_impAutoDefaultType_setDefault.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_setDefault (const cPtr_impAutoDefaultType * inObject,
                                    GALGAS_objectAttributes & io_attributes,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impAutoDefaultType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_impAutoDefaultType_setDefault f = NULL ;
    if (classIndex < gCategoryMethodTable_impAutoDefaultType_setDefault.count ()) {
      f = gCategoryMethodTable_impAutoDefaultType_setDefault (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_impAutoDefaultType_setDefault.count ()) {
           f = gCategoryMethodTable_impAutoDefaultType_setDefault (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_impAutoDefaultType_setDefault.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_attributes, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impAutoDefaultType_setDefault (const cPtr_impAutoDefaultType * inObject,
                                                          GALGAS_objectAttributes & ioArgument_attributes,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impAutoDefaultType * object = inObject ;
  macroValidSharedObject (object, cPtr_impAutoDefaultType) ;
  const enumGalgasBool test_0 = ioArgument_attributes.reader_objectParams (SOURCE_FILE ("implementation_types.galgas", 601)).reader_hasKey (object->mAttribute_name.reader_string (SOURCE_FILE ("implementation_types.galgas", 601)) COMMA_SOURCE_FILE ("implementation_types.galgas", 601)).operator_not (SOURCE_FILE ("implementation_types.galgas", 601)).boolEnum () ;
  if (kBoolTrue == test_0) {
    if (object->mAttribute_defaultValue.isValid ()) {
      if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
      }else if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_auto) {
        GALGAS_identifierMap var_attr = ioArgument_attributes.reader_objectParams (SOURCE_FILE ("implementation_types.galgas", 605)) ;
        {
        var_attr.modifier_put (object->mAttribute_name, object->mAttribute_defaultValue, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 606)) ;
        }
        {
        ioArgument_attributes.modifier_setObjectParams (var_attr COMMA_SOURCE_FILE ("implementation_types.galgas", 607)) ;
        }
      }else{
        GALGAS_identifierMap var_attr = ioArgument_attributes.reader_objectParams (SOURCE_FILE ("implementation_types.galgas", 610)) ;
        {
        var_attr.modifier_put (object->mAttribute_name, object->mAttribute_defaultValue, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 611)) ;
        }
        {
        ioArgument_attributes.modifier_setObjectParams (var_attr COMMA_SOURCE_FILE ("implementation_types.galgas", 612)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impAutoDefaultType_setDefault (void) {
  enterCategoryMethod_setDefault (kTypeDescriptor_GALGAS_impAutoDefaultType.mSlotID,
                                  categoryMethod_impAutoDefaultType_setDefault) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_impAutoDefaultType_setDefault (void) {
  gCategoryMethodTable_impAutoDefaultType_setDefault.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impAutoDefaultType_setDefault (defineCategoryMethod_impAutoDefaultType_setDefault,
                                                          freeCategoryMethod_impAutoDefaultType_setDefault) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@impType checkAttributeReferences'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_impType_checkAttributeReferences> gCategoryMethodTable_impType_checkAttributeReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkAttributeReferences (const int32_t inClassIndex,
                                                   categoryMethodSignature_impType_checkAttributeReferences inMethod) {
  gCategoryMethodTable_impType_checkAttributeReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkAttributeReferences (const cPtr_impType * inObject,
                                                  const GALGAS_implementation constin_imp,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_impType_checkAttributeReferences f = NULL ;
    if (classIndex < gCategoryMethodTable_impType_checkAttributeReferences.count ()) {
      f = gCategoryMethodTable_impType_checkAttributeReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_impType_checkAttributeReferences.count ()) {
           f = gCategoryMethodTable_impType_checkAttributeReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_impType_checkAttributeReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_imp, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impType_checkAttributeReferences (const cPtr_impType * /* inObject */,
                                                             const GALGAS_implementation /* constinArgument_imp */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impType_checkAttributeReferences (void) {
  enterCategoryMethod_checkAttributeReferences (kTypeDescriptor_GALGAS_impType.mSlotID,
                                                categoryMethod_impType_checkAttributeReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_impType_checkAttributeReferences (void) {
  gCategoryMethodTable_impType_checkAttributeReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_checkAttributeReferences (defineCategoryMethod_impType_checkAttributeReferences,
                                                             freeCategoryMethod_impType_checkAttributeReferences) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Category method '@object_t set'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_object_5F_t_set> gCategoryMethodTable_object_5F_t_set ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_set (const int32_t inClassIndex,
                              categoryMethodSignature_object_5F_t_set inMethod) {
  gCategoryMethodTable_object_5F_t_set.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_set (const cPtr_object_5F_t * inObject,
                             const GALGAS_lstring constin_name,
                             GALGAS_TfieldMap & io_result,
                             C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_object_5F_t) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_object_5F_t_set f = NULL ;
    if (classIndex < gCategoryMethodTable_object_5F_t_set.count ()) {
      f = gCategoryMethodTable_object_5F_t_set (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_object_5F_t_set.count ()) {
           f = gCategoryMethodTable_object_5F_t_set (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_object_5F_t_set.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_name, io_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_object_5F_t_set (const cPtr_object_5F_t * /* inObject */,
                                            const GALGAS_lstring constinArgument_name,
                                            GALGAS_TfieldMap & /* ioArgument_result */,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 4)), GALGAS_string ("Attribute: ").add_operation (constinArgument_name.reader_string (SOURCE_FILE ("systemConfig.galgas", 4)), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 4)).add_operation (GALGAS_string (", Internal error"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 4))  COMMA_SOURCE_FILE ("systemConfig.galgas", 4)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_object_5F_t_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_object_5F_t.mSlotID,
                           categoryMethod_object_5F_t_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_object_5F_t_set (void) {
  gCategoryMethodTable_object_5F_t_set.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_object_5F_t_set (defineCategoryMethod_object_5F_t_set,
                                            freeCategoryMethod_object_5F_t_set) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@implementationObject verifyApplication'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_implementationObject_verifyApplication> gCategoryMethodTable_implementationObject_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_verifyApplication (const int32_t inClassIndex,
                                            categoryMethodSignature_implementationObject_verifyApplication inMethod) {
  gCategoryMethodTable_implementationObject_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_verifyApplication (const cPtr_implementationObject * inObject,
                                           const GALGAS_objectKind constin_objectsOfKind,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementationObject) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_implementationObject_verifyApplication f = NULL ;
    if (classIndex < gCategoryMethodTable_implementationObject_verifyApplication.count ()) {
      f = gCategoryMethodTable_implementationObject_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_implementationObject_verifyApplication.count ()) {
           f = gCategoryMethodTable_implementationObject_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_implementationObject_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_objectsOfKind, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_implementationObject_verifyApplication (const cPtr_implementationObject * inObject,
                                                                   const GALGAS_objectKind constinArgument_objectsOfKind,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementationObject * object = inObject ;
  macroValidSharedObject (object, cPtr_implementationObject) ;
  cEnumerator_objectKindMap enumerator_742 (constinArgument_objectsOfKind.reader_objects (SOURCE_FILE ("semantic_verification.galgas", 22)), kEnumeration_up) ;
  while (enumerator_742.hasCurrentObject ()) {
    cEnumerator_implementationObjectMap enumerator_771 (object->mAttribute_attributes, kEnumeration_up) ;
    while (enumerator_771.hasCurrentObject ()) {
      callCategoryMethod_verifyApplication ((const cPtr_impType *) enumerator_771.current_type (HERE).ptr (), enumerator_742.current_attributes (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 24)) ;
      enumerator_771.gotoNextObject () ;
    }
    enumerator_742.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_implementationObject_verifyApplication (void) {
  enterCategoryMethod_verifyApplication (kTypeDescriptor_GALGAS_implementationObject.mSlotID,
                                         categoryMethod_implementationObject_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_implementationObject_verifyApplication (void) {
  gCategoryMethodTable_implementationObject_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementationObject_verifyApplication (defineCategoryMethod_implementationObject_verifyApplication,
                                                                   freeCategoryMethod_implementationObject_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category method '@impType verifyApplication'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_impType_verifyApplication> gCategoryMethodTable_impType_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_verifyApplication (const int32_t inClassIndex,
                                            categoryMethodSignature_impType_verifyApplication inMethod) {
  gCategoryMethodTable_impType_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_verifyApplication (const cPtr_impType * inObject,
                                           const GALGAS_objectAttributes constin_attrs,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_impType_verifyApplication f = NULL ;
    if (classIndex < gCategoryMethodTable_impType_verifyApplication.count ()) {
      f = gCategoryMethodTable_impType_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_impType_verifyApplication.count ()) {
           f = gCategoryMethodTable_impType_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_impType_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attrs, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impType_verifyApplication (const cPtr_impType * inObject,
                                                      const GALGAS_objectAttributes constinArgument_attrs,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impType * object = inObject ;
  macroValidSharedObject (object, cPtr_impType) ;
  cEnumerator_identifierMap enumerator_1017 (constinArgument_attrs.reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 32)), kEnumeration_up) ;
  while (enumerator_1017.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1017.current_lkey (HERE).reader_string (SOURCE_FILE ("semantic_verification.galgas", 33)).objectCompare (object->mAttribute_name.reader_string (SOURCE_FILE ("semantic_verification.galgas", 33)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_impType temp_1 = object ;
      callCategoryMethod_verifyMultipleType ((const cPtr_impType *) temp_1.ptr (), enumerator_1017.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 34)) ;
    }
    enumerator_1017.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impType_verifyApplication (void) {
  enterCategoryMethod_verifyApplication (kTypeDescriptor_GALGAS_impType.mSlotID,
                                         categoryMethod_impType_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_impType_verifyApplication (void) {
  gCategoryMethodTable_impType_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyApplication (defineCategoryMethod_impType_verifyApplication,
                                                      freeCategoryMethod_impType_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Category method '@impType verifyType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_impType_verifyType> gCategoryMethodTable_impType_verifyType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_verifyType (const int32_t inClassIndex,
                                     categoryMethodSignature_impType_verifyType inMethod) {
  gCategoryMethodTable_impType_verifyType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_verifyType (const cPtr_impType * inObject,
                                    const GALGAS_object_5F_t constin_attr,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_impType_verifyType f = NULL ;
    if (classIndex < gCategoryMethodTable_impType_verifyType.count ()) {
      f = gCategoryMethodTable_impType_verifyType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_impType_verifyType.count ()) {
           f = gCategoryMethodTable_impType_verifyType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_impType_verifyType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attr, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impType_verifyType (const cPtr_impType * /* inObject */,
                                               const GALGAS_object_5F_t constinArgument_attr,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 42)), GALGAS_string ("Internal error, a generic type should not be instantiated")  COMMA_SOURCE_FILE ("semantic_verification.galgas", 42)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impType_verifyType (void) {
  enterCategoryMethod_verifyType (kTypeDescriptor_GALGAS_impType.mSlotID,
                                  categoryMethod_impType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_impType_verifyType (void) {
  gCategoryMethodTable_impType_verifyType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyType (defineCategoryMethod_impType_verifyType,
                                               freeCategoryMethod_impType_verifyType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category method '@impType verifyMultipleType'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_impType_verifyMultipleType> gCategoryMethodTable_impType_verifyMultipleType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_verifyMultipleType (const int32_t inClassIndex,
                                             categoryMethodSignature_impType_verifyMultipleType inMethod) {
  gCategoryMethodTable_impType_verifyMultipleType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_verifyMultipleType (const cPtr_impType * inObject,
                                            const GALGAS_object_5F_t constin_attr,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_impType_verifyMultipleType f = NULL ;
    if (classIndex < gCategoryMethodTable_impType_verifyMultipleType.count ()) {
      f = gCategoryMethodTable_impType_verifyMultipleType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_impType_verifyMultipleType.count ()) {
           f = gCategoryMethodTable_impType_verifyMultipleType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_impType_verifyMultipleType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attr, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impType_verifyMultipleType (const cPtr_impType * inObject,
                                                       const GALGAS_object_5F_t constinArgument_attr,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impType * object = inObject ;
  macroValidSharedObject (object, cPtr_impType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_multipleAttribute) {
      GALGAS_multipleAttribute cast_1517_ma ((cPtr_multipleAttribute *) constinArgument_attr.ptr ()) ;
      cEnumerator_identifierList enumerator_1545 (cast_1517_ma.reader_items (SOURCE_FILE ("semantic_verification.galgas", 50)), kEnumeration_up) ;
      while (enumerator_1545.hasCurrentObject ()) {
        const GALGAS_impType temp_0 = object ;
        callCategoryMethod_verifyType ((const cPtr_impType *) temp_0.ptr (), enumerator_1545.current_item (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 51)) ;
        enumerator_1545.gotoNextObject () ;
      }
    }else{
      const GALGAS_impType temp_1 = object ;
      callCategoryMethod_verifyType ((const cPtr_impType *) temp_1.ptr (), constinArgument_attr, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 54)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impType_verifyMultipleType (void) {
  enterCategoryMethod_verifyMultipleType (kTypeDescriptor_GALGAS_impType.mSlotID,
                                          categoryMethod_impType_verifyMultipleType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_impType_verifyMultipleType (void) {
  gCategoryMethodTable_impType_verifyMultipleType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyMultipleType (defineCategoryMethod_impType_verifyMultipleType,
                                                       freeCategoryMethod_impType_verifyMultipleType) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TvarPath_2D_element::GALGAS_TvarPath_2D_element (void) :
mAttribute_item (),
mAttribute_key (),
mAttribute_idx () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TvarPath_2D_element::~ GALGAS_TvarPath_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TvarPath_2D_element::GALGAS_TvarPath_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_lsint & inOperand2) :
mAttribute_item (inOperand0),
mAttribute_key (inOperand1),
mAttribute_idx (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TvarPath_2D_element GALGAS_TvarPath_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_TvarPath_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lsint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TvarPath_2D_element GALGAS_TvarPath_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_lsint & inOperand2 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_TvarPath_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_TvarPath_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_TvarPath_2D_element::objectCompare (const GALGAS_TvarPath_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_item.objectCompare (inOperand.mAttribute_item) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_idx.objectCompare (inOperand.mAttribute_idx) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_TvarPath_2D_element::isValid (void) const {
  return mAttribute_item.isValid () && mAttribute_key.isValid () && mAttribute_idx.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TvarPath_2D_element::drop (void) {
  mAttribute_item.drop () ;
  mAttribute_key.drop () ;
  mAttribute_idx.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TvarPath_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @TvarPath-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_item.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_idx.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_TvarPath_2D_element::reader_item (UNUSED_LOCATION_ARGS) const {
  return mAttribute_item ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_TvarPath_2D_element::reader_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_TvarPath_2D_element::reader_idx (UNUSED_LOCATION_ARGS) const {
  return mAttribute_idx ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @TvarPath-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TvarPath_2D_element ("TvarPath-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_TvarPath_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TvarPath_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_TvarPath_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TvarPath_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TvarPath_2D_element GALGAS_TvarPath_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_TvarPath_2D_element result ;
  const GALGAS_TvarPath_2D_element * p = (const GALGAS_TvarPath_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TvarPath_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TvarPath-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::GALGAS_sortingKeyList_2D_element (void) :
mAttribute_key (),
mAttribute_order () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::~ GALGAS_sortingKeyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::GALGAS_sortingKeyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lsint & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_order (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortingKeyList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lsint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lsint & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortingKeyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortingKeyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortingKeyList_2D_element::objectCompare (const GALGAS_sortingKeyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_order.objectCompare (inOperand.mAttribute_order) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sortingKeyList_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_order.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortingKeyList_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_order.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortingKeyList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @sortingKeyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_order.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sortingKeyList_2D_element::reader_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_sortingKeyList_2D_element::reader_order (UNUSED_LOCATION_ARGS) const {
  return mAttribute_order ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @sortingKeyList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortingKeyList_2D_element ("sortingKeyList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortingKeyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortingKeyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortingKeyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortingKeyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sortingKeyList_2D_element result ;
  const GALGAS_sortingKeyList_2D_element * p = (const GALGAS_sortingKeyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortingKeyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortingKeyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element::GALGAS_numberList_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element::~ GALGAS_numberList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element::GALGAS_numberList_2D_element (const GALGAS_location & inOperand0,
                                                            const GALGAS_object_5F_t & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element GALGAS_numberList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                            const GALGAS_object_5F_t & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_numberList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_numberList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_numberList_2D_element::objectCompare (const GALGAS_numberList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_numberList_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_numberList_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_numberList_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @numberList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_numberList_2D_element::reader_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_numberList_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @numberList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_numberList_2D_element ("numberList-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_numberList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_numberList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_numberList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_numberList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element GALGAS_numberList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_numberList_2D_element result ;
  const GALGAS_numberList_2D_element * p = (const GALGAS_numberList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_numberList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("numberList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element::GALGAS_implementationObjectMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_type () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element::~ GALGAS_implementationObjectMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element::GALGAS_implementationObjectMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_impType & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_type (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element GALGAS_implementationObjectMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_impType & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationObjectMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_implementationObjectMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_implementationObjectMap_2D_element::objectCompare (const GALGAS_implementationObjectMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_type.objectCompare (inOperand.mAttribute_type) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_implementationObjectMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_type.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationObjectMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_type.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationObjectMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @implementationObjectMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_type.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_implementationObjectMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType GALGAS_implementationObjectMap_2D_element::reader_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @implementationObjectMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementationObjectMap_2D_element ("implementationObjectMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_implementationObjectMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationObjectMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_implementationObjectMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementationObjectMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element GALGAS_implementationObjectMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_implementationObjectMap_2D_element result ;
  const GALGAS_implementationObjectMap_2D_element * p = (const GALGAS_implementationObjectMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementationObjectMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementationObjectMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element::GALGAS_enumValues_2D_element (void) :
mAttribute_lkey (),
mAttribute_subAttributes () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element::~ GALGAS_enumValues_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element::GALGAS_enumValues_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_implementationObjectMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_subAttributes (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element GALGAS_enumValues_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumValues_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_implementationObjectMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element GALGAS_enumValues_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_implementationObjectMap & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumValues_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumValues_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumValues_2D_element::objectCompare (const GALGAS_enumValues_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_subAttributes.objectCompare (inOperand.mAttribute_subAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumValues_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_subAttributes.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumValues_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_subAttributes.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumValues_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @enumValues-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_subAttributes.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumValues_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_enumValues_2D_element::reader_subAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_subAttributes ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @enumValues-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumValues_2D_element ("enumValues-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumValues_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumValues_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumValues_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumValues_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element GALGAS_enumValues_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumValues_2D_element result ;
  const GALGAS_enumValues_2D_element * p = (const GALGAS_enumValues_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumValues_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumValues-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element::GALGAS_implementationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_obj () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element::~ GALGAS_implementationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element::GALGAS_implementationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_implementationObject & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_obj (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element GALGAS_implementationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_implementationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_implementationObject::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element GALGAS_implementationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_implementationObject & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_implementationMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_implementationMap_2D_element::objectCompare (const GALGAS_implementationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_obj.objectCompare (inOperand.mAttribute_obj) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_implementationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_obj.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_obj.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @implementationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_obj.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_implementationMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject GALGAS_implementationMap_2D_element::reader_obj (UNUSED_LOCATION_ARGS) const {
  return mAttribute_obj ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @implementationMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementationMap_2D_element ("implementationMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_implementationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_implementationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element GALGAS_implementationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implementationMap_2D_element result ;
  const GALGAS_implementationMap_2D_element * p = (const GALGAS_implementationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element::GALGAS_identifierMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element::~ GALGAS_identifierMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element::GALGAS_identifierMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_object_5F_t & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element GALGAS_identifierMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_object_5F_t & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_identifierMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_identifierMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_identifierMap_2D_element::objectCompare (const GALGAS_identifierMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_identifierMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_identifierMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_identifierMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @identifierMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_identifierMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_identifierMap_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @identifierMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierMap_2D_element ("identifierMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_identifierMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_identifierMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element GALGAS_identifierMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_identifierMap_2D_element result ;
  const GALGAS_identifierMap_2D_element * p = (const GALGAS_identifierMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_identifierMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element::GALGAS_identifierList_2D_element (void) :
mAttribute_item () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element::~ GALGAS_identifierList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element::GALGAS_identifierList_2D_element (const GALGAS_object_5F_t & inOperand0) :
mAttribute_item (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element GALGAS_identifierList_2D_element::constructor_new (const GALGAS_object_5F_t & inOperand0 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_identifierList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_identifierList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_identifierList_2D_element::objectCompare (const GALGAS_identifierList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_item.objectCompare (inOperand.mAttribute_item) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_identifierList_2D_element::isValid (void) const {
  return mAttribute_item.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_identifierList_2D_element::drop (void) {
  mAttribute_item.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_identifierList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @identifierList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_item.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_identifierList_2D_element::reader_item (UNUSED_LOCATION_ARGS) const {
  return mAttribute_item ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @identifierList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierList_2D_element ("identifierList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_identifierList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_identifierList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element GALGAS_identifierList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_identifierList_2D_element result ;
  const GALGAS_identifierList_2D_element * p = (const GALGAS_identifierList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_identifierList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element::GALGAS_stringMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element::~ GALGAS_stringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element::GALGAS_stringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element GALGAS_stringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_stringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element GALGAS_stringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_string & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_stringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_stringMap_2D_element::objectCompare (const GALGAS_stringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_stringMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @stringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_stringMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_stringMap_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @stringMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringMap_2D_element ("stringMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element GALGAS_stringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_stringMap_2D_element result ;
  const GALGAS_stringMap_2D_element * p = (const GALGAS_stringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element::GALGAS_lstringMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element::~ GALGAS_lstringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element::GALGAS_lstringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element GALGAS_lstringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lstringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element GALGAS_lstringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lstringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lstringMap_2D_element::objectCompare (const GALGAS_lstringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lstringMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @lstringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstringMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstringMap_2D_element::reader_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lstringMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstringMap_2D_element ("lstringMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lstringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lstringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element GALGAS_lstringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lstringMap_2D_element result ;
  const GALGAS_lstringMap_2D_element * p = (const GALGAS_lstringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element::GALGAS_prefix_5F_map_2D_element (void) :
mAttribute_lkey (),
mAttribute_prefix (),
mAttribute_tag_5F_to_5F_rep () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element::~ GALGAS_prefix_5F_map_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element::GALGAS_prefix_5F_map_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_prefix (inOperand1),
mAttribute_tag_5F_to_5F_rep (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element GALGAS_prefix_5F_map_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefix_5F_map_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element GALGAS_prefix_5F_map_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefix_5F_map_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_prefix_5F_map_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefix_5F_map_2D_element::objectCompare (const GALGAS_prefix_5F_map_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_prefix.objectCompare (inOperand.mAttribute_prefix) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_tag_5F_to_5F_rep.objectCompare (inOperand.mAttribute_tag_5F_to_5F_rep) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefix_5F_map_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_prefix.isValid () && mAttribute_tag_5F_to_5F_rep.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefix_5F_map_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_prefix.drop () ;
  mAttribute_tag_5F_to_5F_rep.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefix_5F_map_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @prefix_map-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_prefix.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_tag_5F_to_5F_rep.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefix_5F_map_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_prefix_5F_map_2D_element::reader_prefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_prefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_prefix_5F_map_2D_element::reader_tag_5F_to_5F_rep (UNUSED_LOCATION_ARGS) const {
  return mAttribute_tag_5F_to_5F_rep ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @prefix_map-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefix_5F_map_2D_element ("prefix_map-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefix_5F_map_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefix_5F_map_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefix_5F_map_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefix_5F_map_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element GALGAS_prefix_5F_map_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_prefix_5F_map_2D_element result ;
  const GALGAS_prefix_5F_map_2D_element * p = (const GALGAS_prefix_5F_map_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefix_5F_map_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefix_map-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element::GALGAS_stringset_5F_map_2D_element (void) :
mAttribute_lkey (),
mAttribute_ids () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element::~ GALGAS_stringset_5F_map_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element::GALGAS_stringset_5F_map_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_stringset & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_ids (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element GALGAS_stringset_5F_map_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_stringset_5F_map_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element GALGAS_stringset_5F_map_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_stringset & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset_5F_map_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_stringset_5F_map_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_stringset_5F_map_2D_element::objectCompare (const GALGAS_stringset_5F_map_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_ids.objectCompare (inOperand.mAttribute_ids) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_stringset_5F_map_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_ids.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringset_5F_map_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_ids.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringset_5F_map_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @stringset_map-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_ids.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_stringset_5F_map_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_stringset_5F_map_2D_element::reader_ids (UNUSED_LOCATION_ARGS) const {
  return mAttribute_ids ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @stringset_map-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringset_5F_map_2D_element ("stringset_map-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringset_5F_map_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringset_5F_map_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringset_5F_map_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringset_5F_map_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element GALGAS_stringset_5F_map_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_stringset_5F_map_2D_element result ;
  const GALGAS_stringset_5F_map_2D_element * p = (const GALGAS_stringset_5F_map_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringset_5F_map_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringset_map-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element::GALGAS_ident_5F_list_2D_element (void) :
mAttribute_obj_5F_name () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element::~ GALGAS_ident_5F_list_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element::GALGAS_ident_5F_list_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_obj_5F_name (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element GALGAS_ident_5F_list_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ident_5F_list_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element GALGAS_ident_5F_list_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ident_5F_list_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ident_5F_list_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ident_5F_list_2D_element::objectCompare (const GALGAS_ident_5F_list_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_obj_5F_name.objectCompare (inOperand.mAttribute_obj_5F_name) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ident_5F_list_2D_element::isValid (void) const {
  return mAttribute_obj_5F_name.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ident_5F_list_2D_element::drop (void) {
  mAttribute_obj_5F_name.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ident_5F_list_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @ident_list-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_obj_5F_name.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ident_5F_list_2D_element::reader_obj_5F_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_obj_5F_name ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @ident_list-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ident_5F_list_2D_element ("ident_list-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ident_5F_list_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ident_5F_list_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ident_5F_list_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ident_5F_list_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element GALGAS_ident_5F_list_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ident_5F_list_2D_element result ;
  const GALGAS_ident_5F_list_2D_element * p = (const GALGAS_ident_5F_list_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ident_5F_list_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ident_list-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element::GALGAS_ident_5F_list_5F_map_2D_element (void) :
mAttribute_lkey (),
mAttribute_objs () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element::~ GALGAS_ident_5F_list_5F_map_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element::GALGAS_ident_5F_list_5F_map_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_ident_5F_list & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_objs (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element GALGAS_ident_5F_list_5F_map_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ident_5F_list_5F_map_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_ident_5F_list::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element GALGAS_ident_5F_list_5F_map_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_ident_5F_list & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ident_5F_list_5F_map_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ident_5F_list_5F_map_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ident_5F_list_5F_map_2D_element::objectCompare (const GALGAS_ident_5F_list_5F_map_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_objs.objectCompare (inOperand.mAttribute_objs) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ident_5F_list_5F_map_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_objs.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ident_5F_list_5F_map_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_objs.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ident_5F_list_5F_map_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @ident_list_map-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_objs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ident_5F_list_5F_map_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list GALGAS_ident_5F_list_5F_map_2D_element::reader_objs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objs ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @ident_list_map-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ident_5F_list_5F_map_2D_element ("ident_list_map-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ident_5F_list_5F_map_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ident_5F_list_5F_map_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ident_5F_list_5F_map_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ident_5F_list_5F_map_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element GALGAS_ident_5F_list_5F_map_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ident_5F_list_5F_map_2D_element result ;
  const GALGAS_ident_5F_list_5F_map_2D_element * p = (const GALGAS_ident_5F_list_5F_map_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ident_5F_list_5F_map_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ident_list_map-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element::GALGAS_objectKindMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_attributes () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element::~ GALGAS_objectKindMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element::GALGAS_objectKindMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_objectAttributes & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_attributes (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element GALGAS_objectKindMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_objectKindMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_objectAttributes::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element GALGAS_objectKindMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_objectAttributes & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectKindMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_objectKindMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectKindMap_2D_element::objectCompare (const GALGAS_objectKindMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_attributes.objectCompare (inOperand.mAttribute_attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_objectKindMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_attributes.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectKindMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_attributes.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectKindMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @objectKindMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_attributes.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_objectKindMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_objectKindMap_2D_element::reader_attributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_attributes ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @objectKindMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectKindMap_2D_element ("objectKindMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectKindMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectKindMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectKindMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectKindMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element GALGAS_objectKindMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectKindMap_2D_element result ;
  const GALGAS_objectKindMap_2D_element * p = (const GALGAS_objectKindMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectKindMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectKindMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element::GALGAS_objectsMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_objectsOfKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element::~ GALGAS_objectsMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element::GALGAS_objectsMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_objectKind & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_objectsOfKind (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element GALGAS_objectsMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_objectsMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_objectKind::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element GALGAS_objectsMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_objectKind & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectsMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_objectsMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectsMap_2D_element::objectCompare (const GALGAS_objectsMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_objectsOfKind.objectCompare (inOperand.mAttribute_objectsOfKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_objectsMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_objectsOfKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectsMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_objectsOfKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectsMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @objectsMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_objectsOfKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_objectsMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind GALGAS_objectsMap_2D_element::reader_objectsOfKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objectsOfKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @objectsMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectsMap_2D_element ("objectsMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectsMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectsMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectsMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectsMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element GALGAS_objectsMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectsMap_2D_element result ;
  const GALGAS_objectsMap_2D_element * p = (const GALGAS_objectsMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectsMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectsMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tfunction::GALGAS_Tfunction (void) :
mAttribute_name (),
mAttribute_args (),
mAttribute_content () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tfunction::~ GALGAS_Tfunction (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tfunction::GALGAS_Tfunction (const GALGAS_lstring & inOperand0,
                                    const GALGAS_lstringlist & inOperand1,
                                    const GALGAS_string & inOperand2) :
mAttribute_name (inOperand0),
mAttribute_args (inOperand1),
mAttribute_content (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tfunction GALGAS_Tfunction::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_Tfunction (GALGAS_lstring::constructor_default (HERE),
                           GALGAS_lstringlist::constructor_emptyList (HERE),
                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tfunction GALGAS_Tfunction::constructor_new (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstringlist & inOperand1,
                                                    const GALGAS_string & inOperand2 
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_Tfunction result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_Tfunction (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_Tfunction::objectCompare (const GALGAS_Tfunction & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_name.objectCompare (inOperand.mAttribute_name) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_args.objectCompare (inOperand.mAttribute_args) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_content.objectCompare (inOperand.mAttribute_content) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_Tfunction::isValid (void) const {
  return mAttribute_name.isValid () && mAttribute_args.isValid () && mAttribute_content.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_Tfunction::drop (void) {
  mAttribute_name.drop () ;
  mAttribute_args.drop () ;
  mAttribute_content.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_Tfunction::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<struct @Tfunction:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_name.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_args.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_content.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_Tfunction::reader_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_Tfunction::reader_args (UNUSED_LOCATION_ARGS) const {
  return mAttribute_args ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Tfunction::reader_content (UNUSED_LOCATION_ARGS) const {
  return mAttribute_content ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @Tfunction type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Tfunction ("Tfunction",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Tfunction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Tfunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Tfunction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Tfunction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tfunction GALGAS_Tfunction::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_Tfunction result ;
  const GALGAS_Tfunction * p = (const GALGAS_Tfunction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Tfunction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Tfunction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category reader '@applicationDefinition templateData'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_applicationDefinition_templateData> gCategoryReaderTable_applicationDefinition_templateData ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_templateData (const int32_t inClassIndex,
                                       categoryReaderSignature_applicationDefinition_templateData inReader) {
  gCategoryReaderTable_applicationDefinition_templateData.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap callCategoryReader_templateData (const cPtr_applicationDefinition * inObject,
                                                  const GALGAS_implementation & in_imp,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_TfieldMap result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_applicationDefinition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_applicationDefinition_templateData f = NULL ;
    if (classIndex < gCategoryReaderTable_applicationDefinition_templateData.count ()) {
      f = gCategoryReaderTable_applicationDefinition_templateData (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_applicationDefinition_templateData.count ()) {
           f = gCategoryReaderTable_applicationDefinition_templateData (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_applicationDefinition_templateData.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_imp, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_TfieldMap categoryReader_applicationDefinition_templateData (const cPtr_applicationDefinition * inObject,
                                                                           const GALGAS_implementation & constinArgument_imp,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_TfieldMap result_cfg ; // Returned variable
  const cPtr_applicationDefinition * object = inObject ;
  macroValidSharedObject (object, cPtr_applicationDefinition) ;
  result_cfg = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("systemConfig.galgas", 109)) ;
  {
  routine_addStringValue (result_cfg, function_lstringWith (GALGAS_string ("OILFILENAME"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 115)), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 115)).reader_lastPathComponent (SOURCE_FILE ("systemConfig.galgas", 115)), function_lstringWith (GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 115)) ;
  }
  {
  routine_addLStringValue (result_cfg, GALGAS_string ("CPUNAME"), object->mAttribute_name, function_lstringWith (GALGAS_string ("name of the CPU object"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 116)) ;
  }
  {
  routine_addLStringValue (result_cfg, GALGAS_string ("CPUDESCRIPTION"), object->mAttribute_cpuDescription, function_lstringWith (GALGAS_string ("description of the CPU object"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 117)) ;
  }
  {
  routine_addLStringValue (result_cfg, GALGAS_string ("OILVERSION"), object->mAttribute_version, function_lstringWith (GALGAS_string ("OIL version"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 118)) ;
  }
  {
  routine_addLStringValue (result_cfg, GALGAS_string ("OILDESCRIPTION"), object->mAttribute_versionDescription, function_lstringWith (GALGAS_string ("OIL version description"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 119)) ;
  }
  {
  routine_addStringValue (result_cfg, function_lstringWith (GALGAS_string ("TIMESTAMP"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 120)), GALGAS_string::constructor_stringWithCurrentDateTime (SOURCE_FILE ("systemConfig.galgas", 120)), function_lstringWith (GALGAS_string ("timestamp of OIL compiling"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 120)) ;
  }
  {
  routine_addStringValue (result_cfg, function_lstringWith (GALGAS_string ("PROJECT"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 121)), function_projectName (inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 121)).reader_lastPathComponent (SOURCE_FILE ("systemConfig.galgas", 121)), function_lstringWith (GALGAS_string ("project name"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 121)) ;
  }
  {
  routine_addStringValue (result_cfg, function_lstringWith (GALGAS_string ("TARGET"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 122)), GALGAS_string (gOption_goil_5F_options_target_5F_platform.reader_value ()), function_lstringWith (GALGAS_string ("target architecture/chip/board"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 122)) ;
  }
  {
  routine_addStringValue (result_cfg, function_lstringWith (GALGAS_string ("TEMPLATEPATH"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 123)), GALGAS_string (gOption_goil_5F_options_template_5F_dir.reader_value ()), function_lstringWith (GALGAS_string ("path of the templates used"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 123)) ;
  }
  {
  routine_addStringValue (result_cfg, function_lstringWith (GALGAS_string ("ARCH"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 124)), function_arch (inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 124)), function_lstringWith (GALGAS_string ("target architecture"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 124)) ;
  }
  {
  routine_addStringValue (result_cfg, function_lstringWith (GALGAS_string ("CHIP"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 125)), function_chip (inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 125)), function_lstringWith (GALGAS_string ("target chip"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 125)) ;
  }
  {
  routine_addStringValue (result_cfg, function_lstringWith (GALGAS_string ("BOARD"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 126)), function_board (inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 126)), function_lstringWith (GALGAS_string ("target board"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 126)) ;
  }
  {
  routine_addBoolValue (result_cfg, function_lstringWith (GALGAS_string ("LOGFILE"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 128)), GALGAS_bool (gOption_goil_5F_options_generate_5F_log.reader_value ()), function_lstringWith (GALGAS_string ("Generated a logfile"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 128)) ;
  }
  cEnumerator_objectsMap enumerator_5280 (object->mAttribute_objects, kEnumeration_up) ;
  while (enumerator_5280.hasCurrentObject ()) {
    GALGAS_implementationObject var_implementationObject ;
    constinArgument_imp.reader_imp (SOURCE_FILE ("systemConfig.galgas", 135)).method_get (enumerator_5280.current_lkey (HERE), var_implementationObject, inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 135)) ;
    const enumGalgasBool test_0 = var_implementationObject.reader_multiple (SOURCE_FILE ("systemConfig.galgas", 136)).reader_bool (SOURCE_FILE ("systemConfig.galgas", 136)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_TfieldMapList var_objs = GALGAS_TfieldMapList::constructor_emptyList (SOURCE_FILE ("systemConfig.galgas", 137)) ;
      cEnumerator_objectKindMap enumerator_5681 (enumerator_5280.current_objectsOfKind (HERE).reader_objects (SOURCE_FILE ("systemConfig.galgas", 138)), kEnumeration_up) ;
      while (enumerator_5681.hasCurrentObject ()) {
        GALGAS_TfieldMap var_attrs = callCategoryReader_fieldMap ((const cPtr_objectAttributes *) enumerator_5681.current_attributes (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 139)) ;
        var_objs.addAssign_operation (var_attrs  COMMA_SOURCE_FILE ("systemConfig.galgas", 140)) ;
        enumerator_5681.gotoNextObject () ;
      }
      {
      routine_addListValue (result_cfg, enumerator_5280.current_lkey (HERE), var_objs, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 142)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5280.current_objectsOfKind (HERE).reader_objects (SOURCE_FILE ("systemConfig.galgas", 145)).reader_count (SOURCE_FILE ("systemConfig.galgas", 145)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_TfieldMap var_attrs = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("systemConfig.galgas", 146)) ;
        cEnumerator_objectKindMap enumerator_5997 (enumerator_5280.current_objectsOfKind (HERE).reader_objects (SOURCE_FILE ("systemConfig.galgas", 147)), kEnumeration_up) ;
        while (enumerator_5997.hasCurrentObject ()) {
          var_attrs = callCategoryReader_fieldMap ((const cPtr_objectAttributes *) enumerator_5997.current_attributes (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 148)) ;
          enumerator_5997.gotoNextObject () ;
        }
        {
        routine_addStructValue (result_cfg, enumerator_5280.current_lkey (HERE), var_attrs, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 150)) ;
        }
      }
    }
    enumerator_5280.gotoNextObject () ;
  }
//---
  return result_cfg ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_applicationDefinition_templateData (void) {
  enterCategoryReader_templateData (kTypeDescriptor_GALGAS_applicationDefinition.mSlotID,
                                    categoryReader_applicationDefinition_templateData) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_applicationDefinition_templateData (void) {
  gCategoryReaderTable_applicationDefinition_templateData.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_applicationDefinition_templateData (defineCategoryReader_applicationDefinition_templateData,
                                                               freeCategoryReader_applicationDefinition_templateData) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue::GALGAS_Tvalue (void) :
mAttribute_mInt_36__34_Value (),
mAttribute_mFloatValue (),
mAttribute_mStringValue (),
mAttribute_mMapListValue (),
mAttribute_mStructValue (),
mAttribute_mFunctionValue (),
mAttribute_mDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue::~ GALGAS_Tvalue (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue::GALGAS_Tvalue (const GALGAS_sint_36__34_ & inOperand0,
                              const GALGAS_double & inOperand1,
                              const GALGAS_string & inOperand2,
                              const GALGAS_TfieldMapList & inOperand3,
                              const GALGAS_TfieldMap & inOperand4,
                              const GALGAS_Tfunction & inOperand5,
                              const GALGAS_lstring & inOperand6) :
mAttribute_mInt_36__34_Value (inOperand0),
mAttribute_mFloatValue (inOperand1),
mAttribute_mStringValue (inOperand2),
mAttribute_mMapListValue (inOperand3),
mAttribute_mStructValue (inOperand4),
mAttribute_mFunctionValue (inOperand5),
mAttribute_mDescription (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue GALGAS_Tvalue::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_Tvalue (GALGAS_sint_36__34_::constructor_default (HERE),
                        GALGAS_double::constructor_default (HERE),
                        GALGAS_string::constructor_default (HERE),
                        GALGAS_TfieldMapList::constructor_emptyList (HERE),
                        GALGAS_TfieldMap::constructor_emptyMap (HERE),
                        GALGAS_Tfunction::constructor_default (HERE),
                        GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue GALGAS_Tvalue::constructor_new (const GALGAS_sint_36__34_ & inOperand0,
                                              const GALGAS_double & inOperand1,
                                              const GALGAS_string & inOperand2,
                                              const GALGAS_TfieldMapList & inOperand3,
                                              const GALGAS_TfieldMap & inOperand4,
                                              const GALGAS_Tfunction & inOperand5,
                                              const GALGAS_lstring & inOperand6 
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_Tvalue result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_Tvalue (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_Tvalue::objectCompare (const GALGAS_Tvalue & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInt_36__34_Value.objectCompare (inOperand.mAttribute_mInt_36__34_Value) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFloatValue.objectCompare (inOperand.mAttribute_mFloatValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStringValue.objectCompare (inOperand.mAttribute_mStringValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMapListValue.objectCompare (inOperand.mAttribute_mMapListValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStructValue.objectCompare (inOperand.mAttribute_mStructValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionValue.objectCompare (inOperand.mAttribute_mFunctionValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDescription.objectCompare (inOperand.mAttribute_mDescription) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_Tvalue::isValid (void) const {
  return mAttribute_mInt_36__34_Value.isValid () && mAttribute_mFloatValue.isValid () && mAttribute_mStringValue.isValid () && mAttribute_mMapListValue.isValid () && mAttribute_mStructValue.isValid () && mAttribute_mFunctionValue.isValid () && mAttribute_mDescription.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_Tvalue::drop (void) {
  mAttribute_mInt_36__34_Value.drop () ;
  mAttribute_mFloatValue.drop () ;
  mAttribute_mStringValue.drop () ;
  mAttribute_mMapListValue.drop () ;
  mAttribute_mStructValue.drop () ;
  mAttribute_mFunctionValue.drop () ;
  mAttribute_mDescription.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_Tvalue::description (C_String & ioString,
                                 const int32_t inIndentation) const {
  ioString << "<struct @Tvalue:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInt_36__34_Value.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFloatValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStringValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMapListValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStructValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDescription.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_Tvalue::reader_mInt_36__34_Value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInt_36__34_Value ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_Tvalue::reader_mFloatValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFloatValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Tvalue::reader_mStringValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMapList GALGAS_Tvalue::reader_mMapListValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapListValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap GALGAS_Tvalue::reader_mStructValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tfunction GALGAS_Tvalue::reader_mFunctionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_Tvalue::reader_mDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDescription ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @Tvalue type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Tvalue ("Tvalue",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Tvalue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Tvalue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Tvalue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Tvalue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue GALGAS_Tvalue::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_Tvalue result ;
  const GALGAS_Tvalue * p = (const GALGAS_Tvalue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Tvalue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Tvalue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap_2D_element::GALGAS_TfieldMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap_2D_element::~ GALGAS_TfieldMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap_2D_element::GALGAS_TfieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_Ttype & inOperand1,
                                                          const GALGAS_Tvalue & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap_2D_element GALGAS_TfieldMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_Ttype & inOperand1,
                                                                          const GALGAS_Tvalue & inOperand2 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_TfieldMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_TfieldMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_TfieldMap_2D_element::objectCompare (const GALGAS_TfieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_TfieldMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TfieldMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TfieldMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @TfieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_TfieldMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Ttype GALGAS_TfieldMap_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue GALGAS_TfieldMap_2D_element::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @TfieldMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TfieldMap_2D_element ("TfieldMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_TfieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TfieldMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_TfieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TfieldMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TfieldMap_2D_element GALGAS_TfieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_TfieldMap_2D_element result ;
  const GALGAS_TfieldMap_2D_element * p = (const GALGAS_TfieldMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TfieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TfieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TexpressionList_2D_element::GALGAS_TexpressionList_2D_element (void) :
mAttribute_mValue (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TexpressionList_2D_element::~ GALGAS_TexpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TexpressionList_2D_element::GALGAS_TexpressionList_2D_element (const GALGAS_Tvalue & inOperand0,
                                                                      const GALGAS_Ttype & inOperand1) :
mAttribute_mValue (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TexpressionList_2D_element GALGAS_TexpressionList_2D_element::constructor_new (const GALGAS_Tvalue & inOperand0,
                                                                                      const GALGAS_Ttype & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_TexpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_TexpressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_TexpressionList_2D_element::objectCompare (const GALGAS_TexpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_TexpressionList_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TexpressionList_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TexpressionList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @TexpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue GALGAS_TexpressionList_2D_element::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Ttype GALGAS_TexpressionList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @TexpressionList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TexpressionList_2D_element ("TexpressionList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_TexpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TexpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_TexpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TexpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TexpressionList_2D_element GALGAS_TexpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_TexpressionList_2D_element result ;
  const GALGAS_TexpressionList_2D_element * p = (const GALGAS_TexpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TexpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TexpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TenumationList_2D_element::GALGAS_TenumationList_2D_element (void) :
mAttribute_mEnumeratedValue (),
mAttribute_mPrefix () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TenumationList_2D_element::~ GALGAS_TenumationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TenumationList_2D_element::GALGAS_TenumationList_2D_element (const GALGAS_Tvalue & inOperand0,
                                                                    const GALGAS_string & inOperand1) :
mAttribute_mEnumeratedValue (inOperand0),
mAttribute_mPrefix (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TenumationList_2D_element GALGAS_TenumationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_TenumationList_2D_element (GALGAS_Tvalue::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TenumationList_2D_element GALGAS_TenumationList_2D_element::constructor_new (const GALGAS_Tvalue & inOperand0,
                                                                                    const GALGAS_string & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_TenumationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_TenumationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_TenumationList_2D_element::objectCompare (const GALGAS_TenumationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratedValue.objectCompare (inOperand.mAttribute_mEnumeratedValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrefix.objectCompare (inOperand.mAttribute_mPrefix) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_TenumationList_2D_element::isValid (void) const {
  return mAttribute_mEnumeratedValue.isValid () && mAttribute_mPrefix.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TenumationList_2D_element::drop (void) {
  mAttribute_mEnumeratedValue.drop () ;
  mAttribute_mPrefix.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_TenumationList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @TenumationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEnumeratedValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrefix.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Tvalue GALGAS_TenumationList_2D_element::reader_mEnumeratedValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_TenumationList_2D_element::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefix ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @TenumationList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TenumationList_2D_element ("TenumationList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_TenumationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TenumationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_TenumationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TenumationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_TenumationList_2D_element GALGAS_TenumationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_TenumationList_2D_element result ;
  const GALGAS_TenumationList_2D_element * p = (const GALGAS_TenumationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TenumationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TenumationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding category method '@noRange enclose'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_noRange_enclose (const cPtr_attributeRange * /* inObject */,
                                            GALGAS_bool & outArgument_isWithin,
                                            const GALGAS_attributeRange /* constinArgument_value */,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_isWithin = GALGAS_bool (true) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_noRange_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_noRange.mSlotID,
                               categoryMethod_noRange_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_noRange_enclose (defineCategoryMethod_noRange_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@uint32AttributeSet enclose'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uint_33__32_AttributeSet_enclose (const cPtr_attributeRange * inObject,
                                                             GALGAS_bool & outArgument_isWithin,
                                                             const GALGAS_attributeRange constinArgument_value,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_33__32_AttributeSet * object = (const cPtr_uint_33__32_AttributeSet *) inObject ;
  macroValidSharedObject (object, cPtr_uint_33__32_AttributeSet) ;
  outArgument_isWithin = GALGAS_bool (true) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_33__32_AttributeSet) {
      GALGAS_uint_33__32_AttributeSet cast_4668_set ((cPtr_uint_33__32_AttributeSet *) constinArgument_value.ptr ()) ;
      cEnumerator_uint_33__32_List enumerator_4706 (cast_4668_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 175)), kEnumeration_up) ;
      while (enumerator_4706.hasCurrentObject ()) {
        GALGAS_bool var_ok = GALGAS_bool (false) ;
        cEnumerator_uint_33__32_List enumerator_4765 (object->mAttribute_valueList, kEnumeration_up) ;
        while (enumerator_4765.hasCurrentObject ()) {
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4706.current_value (HERE).objectCompare (enumerator_4765.current_value (HERE))).boolEnum () ;
          if (kBoolTrue == test_0) {
            var_ok = GALGAS_bool (true) ;
          }
          enumerator_4765.gotoNextObject () ;
        }
        outArgument_isWithin = outArgument_isWithin.operator_and (var_ok COMMA_SOURCE_FILE ("implementation_types.galgas", 182)) ;
        enumerator_4706.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 185)), GALGAS_string ("Incompatible set. Should be a UINT32 set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 185)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 186)) ;
      outArgument_isWithin = GALGAS_bool (false) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uint_33__32_AttributeSet_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_uint_33__32_AttributeSet.mSlotID,
                               categoryMethod_uint_33__32_AttributeSet_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_33__32_AttributeSet_enclose (defineCategoryMethod_uint_33__32_AttributeSet_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@uint64AttributeSet enclose'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uint_36__34_AttributeSet_enclose (const cPtr_attributeRange * inObject,
                                                             GALGAS_bool & outArgument_isWithin,
                                                             const GALGAS_attributeRange constinArgument_value,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_36__34_AttributeSet * object = (const cPtr_uint_36__34_AttributeSet *) inObject ;
  macroValidSharedObject (object, cPtr_uint_36__34_AttributeSet) ;
  outArgument_isWithin = GALGAS_bool (true) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_36__34_AttributeSet) {
      GALGAS_uint_36__34_AttributeSet cast_5843_set ((cPtr_uint_36__34_AttributeSet *) constinArgument_value.ptr ()) ;
      cEnumerator_uint_36__34_List enumerator_5881 (cast_5843_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 217)), kEnumeration_up) ;
      while (enumerator_5881.hasCurrentObject ()) {
        GALGAS_bool var_ok = GALGAS_bool (false) ;
        cEnumerator_uint_36__34_List enumerator_5940 (object->mAttribute_valueList, kEnumeration_up) ;
        while (enumerator_5940.hasCurrentObject ()) {
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_5881.current_value (HERE).objectCompare (enumerator_5940.current_value (HERE))).boolEnum () ;
          if (kBoolTrue == test_0) {
            var_ok = GALGAS_bool (true) ;
          }
          enumerator_5940.gotoNextObject () ;
        }
        outArgument_isWithin = outArgument_isWithin.operator_and (var_ok COMMA_SOURCE_FILE ("implementation_types.galgas", 224)) ;
        enumerator_5881.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 227)), GALGAS_string ("Incompatible set. Should be a UINT64 set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 227)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 228)) ;
      outArgument_isWithin = GALGAS_bool (false) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uint_36__34_AttributeSet_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_uint_36__34_AttributeSet.mSlotID,
                               categoryMethod_uint_36__34_AttributeSet_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34_AttributeSet_enclose (defineCategoryMethod_uint_36__34_AttributeSet_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@sint32AttributeSet enclose'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sint_33__32_AttributeSet_enclose (const cPtr_attributeRange * inObject,
                                                             GALGAS_bool & outArgument_isWithin,
                                                             const GALGAS_attributeRange constinArgument_value,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sint_33__32_AttributeSet * object = (const cPtr_sint_33__32_AttributeSet *) inObject ;
  macroValidSharedObject (object, cPtr_sint_33__32_AttributeSet) ;
  outArgument_isWithin = GALGAS_bool (true) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_sint_33__32_AttributeSet) {
      GALGAS_sint_33__32_AttributeSet cast_7017_set ((cPtr_sint_33__32_AttributeSet *) constinArgument_value.ptr ()) ;
      cEnumerator_sint_33__32_List enumerator_7055 (cast_7017_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 259)), kEnumeration_up) ;
      while (enumerator_7055.hasCurrentObject ()) {
        GALGAS_bool var_ok = GALGAS_bool (false) ;
        cEnumerator_sint_33__32_List enumerator_7114 (object->mAttribute_valueList, kEnumeration_up) ;
        while (enumerator_7114.hasCurrentObject ()) {
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_7055.current_value (HERE).objectCompare (enumerator_7114.current_value (HERE))).boolEnum () ;
          if (kBoolTrue == test_0) {
            var_ok = GALGAS_bool (true) ;
          }
          enumerator_7114.gotoNextObject () ;
        }
        outArgument_isWithin = outArgument_isWithin.operator_and (var_ok COMMA_SOURCE_FILE ("implementation_types.galgas", 266)) ;
        enumerator_7055.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 269)), GALGAS_string ("Incompatible set. Should be a INT32 set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 269)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 270)) ;
      outArgument_isWithin = GALGAS_bool (false) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sint_33__32_AttributeSet_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_sint_33__32_AttributeSet.mSlotID,
                               categoryMethod_sint_33__32_AttributeSet_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_33__32_AttributeSet_enclose (defineCategoryMethod_sint_33__32_AttributeSet_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@sint64AttributeSet enclose'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sint_36__34_AttributeSet_enclose (const cPtr_attributeRange * inObject,
                                                             GALGAS_bool & outArgument_isWithin,
                                                             const GALGAS_attributeRange constinArgument_value,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sint_36__34_AttributeSet * object = (const cPtr_sint_36__34_AttributeSet *) inObject ;
  macroValidSharedObject (object, cPtr_sint_36__34_AttributeSet) ;
  outArgument_isWithin = GALGAS_bool (true) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_sint_36__34_AttributeSet) {
      GALGAS_sint_36__34_AttributeSet cast_8190_set ((cPtr_sint_36__34_AttributeSet *) constinArgument_value.ptr ()) ;
      cEnumerator_sint_36__34_List enumerator_8228 (cast_8190_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 301)), kEnumeration_up) ;
      while (enumerator_8228.hasCurrentObject ()) {
        GALGAS_bool var_ok = GALGAS_bool (false) ;
        cEnumerator_sint_36__34_List enumerator_8287 (object->mAttribute_valueList, kEnumeration_up) ;
        while (enumerator_8287.hasCurrentObject ()) {
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_8228.current_value (HERE).objectCompare (enumerator_8287.current_value (HERE))).boolEnum () ;
          if (kBoolTrue == test_0) {
            var_ok = GALGAS_bool (true) ;
          }
          enumerator_8287.gotoNextObject () ;
        }
        outArgument_isWithin = outArgument_isWithin.operator_and (var_ok COMMA_SOURCE_FILE ("implementation_types.galgas", 308)) ;
        enumerator_8228.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 311)), GALGAS_string ("Incompatible set. Should be a INT64 set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 311)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 312)) ;
      outArgument_isWithin = GALGAS_bool (false) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sint_36__34_AttributeSet_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_sint_36__34_AttributeSet.mSlotID,
                               categoryMethod_sint_36__34_AttributeSet_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34_AttributeSet_enclose (defineCategoryMethod_sint_36__34_AttributeSet_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@floatAttributeSet enclose'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_floatAttributeSet_enclose (const cPtr_attributeRange * inObject,
                                                      GALGAS_bool & outArgument_isWithin,
                                                      const GALGAS_attributeRange constinArgument_value,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_floatAttributeSet * object = (const cPtr_floatAttributeSet *) inObject ;
  macroValidSharedObject (object, cPtr_floatAttributeSet) ;
  outArgument_isWithin = GALGAS_bool (true) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_floatAttributeSet) {
      GALGAS_floatAttributeSet cast_9367_set ((cPtr_floatAttributeSet *) constinArgument_value.ptr ()) ;
      cEnumerator_floatList enumerator_9405 (cast_9367_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 343)), kEnumeration_up) ;
      while (enumerator_9405.hasCurrentObject ()) {
        GALGAS_bool var_ok = GALGAS_bool (false) ;
        cEnumerator_floatList enumerator_9464 (object->mAttribute_valueList, kEnumeration_up) ;
        while (enumerator_9464.hasCurrentObject ()) {
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_9405.current_value (HERE).objectCompare (enumerator_9464.current_value (HERE))).boolEnum () ;
          if (kBoolTrue == test_0) {
            var_ok = GALGAS_bool (true) ;
          }
          enumerator_9464.gotoNextObject () ;
        }
        outArgument_isWithin = outArgument_isWithin.operator_and (var_ok COMMA_SOURCE_FILE ("implementation_types.galgas", 350)) ;
        enumerator_9405.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 353)), GALGAS_string ("Incompatible set. Should be a FLOAT set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 353)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 354)) ;
      outArgument_isWithin = GALGAS_bool (false) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_floatAttributeSet_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_floatAttributeSet.mSlotID,
                               categoryMethod_floatAttributeSet_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_floatAttributeSet_enclose (defineCategoryMethod_floatAttributeSet_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@uint32AttributeMinMax enclose'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uint_33__32_AttributeMinMax_enclose (const cPtr_attributeRange * inObject,
                                                                GALGAS_bool & outArgument_isWithin,
                                                                const GALGAS_attributeRange constinArgument_value,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_33__32_AttributeMinMax * object = (const cPtr_uint_33__32_AttributeMinMax *) inObject ;
  macroValidSharedObject (object, cPtr_uint_33__32_AttributeMinMax) ;
  outArgument_isWithin = GALGAS_bool (false) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_33__32_AttributeMinMax) {
      GALGAS_uint_33__32_AttributeMinMax cast_10369_minmax ((cPtr_uint_33__32_AttributeMinMax *) constinArgument_value.ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, cast_10369_minmax.reader_min (SOURCE_FILE ("implementation_types.galgas", 379)).objectCompare (object->mAttribute_min)).operator_and (GALGAS_bool (kIsInfOrEqual, cast_10369_minmax.reader_max (SOURCE_FILE ("implementation_types.galgas", 379)).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 379)).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_isWithin = GALGAS_bool (true) ;
      }
    }else if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_33__32_AttributeSet) {
      GALGAS_uint_33__32_AttributeSet cast_10489_set ((cPtr_uint_33__32_AttributeSet *) constinArgument_value.ptr ()) ;
      outArgument_isWithin = GALGAS_bool (true) ;
      cEnumerator_uint_33__32_List enumerator_10542 (cast_10489_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 384)), kEnumeration_up) ;
      while (enumerator_10542.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, enumerator_10542.current_value (HERE).objectCompare (object->mAttribute_min)).operator_or (GALGAS_bool (kIsStrictSup, enumerator_10542.current_value (HERE).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 385)).boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_isWithin = GALGAS_bool (false) ;
        }
        enumerator_10542.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 390)), GALGAS_string ("Incompatible set. Should be a UINT32 range or UINT32 set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 390)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 391)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uint_33__32_AttributeMinMax_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_uint_33__32_AttributeMinMax.mSlotID,
                               categoryMethod_uint_33__32_AttributeMinMax_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_33__32_AttributeMinMax_enclose (defineCategoryMethod_uint_33__32_AttributeMinMax_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@uint64AttributeMinMax enclose'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uint_36__34_AttributeMinMax_enclose (const cPtr_attributeRange * inObject,
                                                                GALGAS_bool & outArgument_isWithin,
                                                                const GALGAS_attributeRange constinArgument_value,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_36__34_AttributeMinMax * object = (const cPtr_uint_36__34_AttributeMinMax *) inObject ;
  macroValidSharedObject (object, cPtr_uint_36__34_AttributeMinMax) ;
  outArgument_isWithin = GALGAS_bool (false) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_36__34_AttributeMinMax) {
      GALGAS_uint_36__34_AttributeMinMax cast_11407_minmax ((cPtr_uint_36__34_AttributeMinMax *) constinArgument_value.ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, cast_11407_minmax.reader_min (SOURCE_FILE ("implementation_types.galgas", 415)).objectCompare (object->mAttribute_min)).operator_and (GALGAS_bool (kIsInfOrEqual, cast_11407_minmax.reader_max (SOURCE_FILE ("implementation_types.galgas", 415)).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 415)).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_isWithin = GALGAS_bool (true) ;
      }
    }else if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_36__34_AttributeSet) {
      GALGAS_uint_36__34_AttributeSet cast_11527_set ((cPtr_uint_36__34_AttributeSet *) constinArgument_value.ptr ()) ;
      outArgument_isWithin = GALGAS_bool (true) ;
      cEnumerator_uint_36__34_List enumerator_11580 (cast_11527_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 420)), kEnumeration_up) ;
      while (enumerator_11580.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, enumerator_11580.current_value (HERE).objectCompare (object->mAttribute_min)).operator_or (GALGAS_bool (kIsStrictSup, enumerator_11580.current_value (HERE).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 421)).boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_isWithin = GALGAS_bool (false) ;
        }
        enumerator_11580.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 426)), GALGAS_string ("Incompatible set. Should be a UINT64 range or UINT64 set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 426)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 427)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uint_36__34_AttributeMinMax_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_uint_36__34_AttributeMinMax.mSlotID,
                               categoryMethod_uint_36__34_AttributeMinMax_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34_AttributeMinMax_enclose (defineCategoryMethod_uint_36__34_AttributeMinMax_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@sint32AttributeMinMax enclose'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sint_33__32_AttributeMinMax_enclose (const cPtr_attributeRange * inObject,
                                                                GALGAS_bool & outArgument_isWithin,
                                                                const GALGAS_attributeRange constinArgument_value,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sint_33__32_AttributeMinMax * object = (const cPtr_sint_33__32_AttributeMinMax *) inObject ;
  macroValidSharedObject (object, cPtr_sint_33__32_AttributeMinMax) ;
  outArgument_isWithin = GALGAS_bool (false) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_sint_33__32_AttributeMinMax) {
      GALGAS_sint_33__32_AttributeMinMax cast_12440_minmax ((cPtr_sint_33__32_AttributeMinMax *) constinArgument_value.ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, cast_12440_minmax.reader_min (SOURCE_FILE ("implementation_types.galgas", 451)).objectCompare (object->mAttribute_min)).operator_and (GALGAS_bool (kIsInfOrEqual, cast_12440_minmax.reader_max (SOURCE_FILE ("implementation_types.galgas", 451)).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 451)).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_isWithin = GALGAS_bool (true) ;
      }
    }else if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_sint_33__32_AttributeSet) {
      GALGAS_sint_33__32_AttributeSet cast_12560_set ((cPtr_sint_33__32_AttributeSet *) constinArgument_value.ptr ()) ;
      outArgument_isWithin = GALGAS_bool (true) ;
      cEnumerator_sint_33__32_List enumerator_12613 (cast_12560_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 456)), kEnumeration_up) ;
      while (enumerator_12613.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, enumerator_12613.current_value (HERE).objectCompare (object->mAttribute_min)).operator_or (GALGAS_bool (kIsStrictSup, enumerator_12613.current_value (HERE).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 457)).boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_isWithin = GALGAS_bool (false) ;
        }
        enumerator_12613.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 462)), GALGAS_string ("Incompatible set. Should be a INT32 range or INT32 set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 462)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 463)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sint_33__32_AttributeMinMax_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_sint_33__32_AttributeMinMax.mSlotID,
                               categoryMethod_sint_33__32_AttributeMinMax_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_33__32_AttributeMinMax_enclose (defineCategoryMethod_sint_33__32_AttributeMinMax_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@sint64AttributeMinMax enclose'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sint_36__34_AttributeMinMax_enclose (const cPtr_attributeRange * inObject,
                                                                GALGAS_bool & outArgument_isWithin,
                                                                const GALGAS_attributeRange constinArgument_value,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sint_36__34_AttributeMinMax * object = (const cPtr_sint_36__34_AttributeMinMax *) inObject ;
  macroValidSharedObject (object, cPtr_sint_36__34_AttributeMinMax) ;
  outArgument_isWithin = GALGAS_bool (false) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_sint_36__34_AttributeMinMax) {
      GALGAS_sint_36__34_AttributeMinMax cast_13475_minmax ((cPtr_sint_36__34_AttributeMinMax *) constinArgument_value.ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, cast_13475_minmax.reader_min (SOURCE_FILE ("implementation_types.galgas", 487)).objectCompare (object->mAttribute_min)).operator_and (GALGAS_bool (kIsInfOrEqual, cast_13475_minmax.reader_max (SOURCE_FILE ("implementation_types.galgas", 487)).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 487)).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_isWithin = GALGAS_bool (true) ;
      }
    }else if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_sint_36__34_AttributeSet) {
      GALGAS_sint_36__34_AttributeSet cast_13595_set ((cPtr_sint_36__34_AttributeSet *) constinArgument_value.ptr ()) ;
      outArgument_isWithin = GALGAS_bool (true) ;
      cEnumerator_sint_36__34_List enumerator_13648 (cast_13595_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 492)), kEnumeration_up) ;
      while (enumerator_13648.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, enumerator_13648.current_value (HERE).objectCompare (object->mAttribute_min)).operator_or (GALGAS_bool (kIsStrictSup, enumerator_13648.current_value (HERE).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 493)).boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_isWithin = GALGAS_bool (false) ;
        }
        enumerator_13648.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 498)), GALGAS_string ("Incompatible set. Should be a INT64 range or INT64 set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 498)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 499)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sint_36__34_AttributeMinMax_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_sint_36__34_AttributeMinMax.mSlotID,
                               categoryMethod_sint_36__34_AttributeMinMax_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34_AttributeMinMax_enclose (defineCategoryMethod_sint_36__34_AttributeMinMax_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@floatAttributeMinMax enclose'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_floatAttributeMinMax_enclose (const cPtr_attributeRange * inObject,
                                                         GALGAS_bool & outArgument_isWithin,
                                                         const GALGAS_attributeRange constinArgument_value,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_floatAttributeMinMax * object = (const cPtr_floatAttributeMinMax *) inObject ;
  macroValidSharedObject (object, cPtr_floatAttributeMinMax) ;
  outArgument_isWithin = GALGAS_bool (false) ;
  if (constinArgument_value.isValid ()) {
    if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_floatAttributeMinMax) {
      GALGAS_floatAttributeMinMax cast_14507_minmax ((cPtr_floatAttributeMinMax *) constinArgument_value.ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, cast_14507_minmax.reader_min (SOURCE_FILE ("implementation_types.galgas", 523)).objectCompare (object->mAttribute_min)).operator_and (GALGAS_bool (kIsInfOrEqual, cast_14507_minmax.reader_max (SOURCE_FILE ("implementation_types.galgas", 523)).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 523)).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_isWithin = GALGAS_bool (true) ;
      }
    }else if (constinArgument_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_floatAttributeSet) {
      GALGAS_floatAttributeSet cast_14626_set ((cPtr_floatAttributeSet *) constinArgument_value.ptr ()) ;
      outArgument_isWithin = GALGAS_bool (true) ;
      cEnumerator_floatList enumerator_14679 (cast_14626_set.reader_valueList (SOURCE_FILE ("implementation_types.galgas", 528)), kEnumeration_up) ;
      while (enumerator_14679.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, enumerator_14679.current_value (HERE).objectCompare (object->mAttribute_min)).operator_or (GALGAS_bool (kIsStrictSup, enumerator_14679.current_value (HERE).objectCompare (object->mAttribute_max)) COMMA_SOURCE_FILE ("implementation_types.galgas", 529)).boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_isWithin = GALGAS_bool (false) ;
        }
        enumerator_14679.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_value.reader_location (SOURCE_FILE ("implementation_types.galgas", 534)), GALGAS_string ("Incompatible set. Should be a FLOAT range or FLOAT set")  COMMA_SOURCE_FILE ("implementation_types.galgas", 534)) ;
      inCompiler->emitSemanticError (object->mAttribute_location, GALGAS_string ("Previous set was declared here")  COMMA_SOURCE_FILE ("implementation_types.galgas", 535)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_floatAttributeMinMax_enclose (void) {
  enterCategoryMethod_enclose (kTypeDescriptor_GALGAS_floatAttributeMinMax.mSlotID,
                               categoryMethod_floatAttributeMinMax_enclose) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_floatAttributeMinMax_enclose (defineCategoryMethod_floatAttributeMinMax_enclose, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category reader '@impAutoDefaultType autoAllowed'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_impAutoDefaultType_autoAllowed (const cPtr_impType * inObject,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_impAutoDefaultType * object = (const cPtr_impAutoDefaultType *) inObject ;
  macroValidSharedObject (object, cPtr_impAutoDefaultType) ;
  result_result = object->mAttribute_withAuto ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_impAutoDefaultType_autoAllowed (void) {
  enterCategoryReader_autoAllowed (kTypeDescriptor_GALGAS_impAutoDefaultType.mSlotID,
                                   categoryReader_impAutoDefaultType_autoAllowed) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_impAutoDefaultType_autoAllowed (defineCategoryReader_impAutoDefaultType_autoAllowed, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding category method '@impBoolType setDefault'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impBoolType_setDefault (const cPtr_impAutoDefaultType * inObject,
                                                   GALGAS_objectAttributes & ioArgument_attributes,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impBoolType * object = (const cPtr_impBoolType *) inObject ;
  macroValidSharedObject (object, cPtr_impBoolType) ;
  if (object->mAttribute_defaultValue.isValid ()) {
    if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
    }else if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_auto) {
    }else if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_boolAttribute) {
      GALGAS_boolAttribute cast_18938_b ((cPtr_boolAttribute *) object->mAttribute_defaultValue.ptr ()) ;
      const enumGalgasBool test_0 = ioArgument_attributes.reader_objectParams (SOURCE_FILE ("implementation_types.galgas", 681)).reader_hasKey (object->mAttribute_name.reader_string (SOURCE_FILE ("implementation_types.galgas", 681)) COMMA_SOURCE_FILE ("implementation_types.galgas", 681)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_identifierMap var_userAttributes = ioArgument_attributes.reader_objectParams (SOURCE_FILE ("implementation_types.galgas", 684)) ;
        GALGAS_object_5F_t var_value ;
        var_userAttributes.method_get (object->mAttribute_name, var_value, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 686)) ;
        if (var_value.isValid ()) {
          if (var_value.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_boolAttribute) {
            GALGAS_boolAttribute cast_19368_boolValue ((cPtr_boolAttribute *) var_value.ptr ()) ;
            GALGAS_implementationObjectMap var_subImpAttributes ;
            const enumGalgasBool test_1 = cast_19368_boolValue.reader_value (SOURCE_FILE ("implementation_types.galgas", 690)).boolEnum () ;
            if (kBoolTrue == test_1) {
              var_subImpAttributes = object->mAttribute_trueSubAttributes ;
            }else if (kBoolFalse == test_1) {
              var_subImpAttributes = object->mAttribute_falseSubAttributes ;
            }
            GALGAS_objectAttributes var_subAttributes = cast_19368_boolValue.reader_subAttributes (SOURCE_FILE ("implementation_types.galgas", 695)) ;
            {
            routine_setDefaultsForType (var_subImpAttributes, var_subAttributes, inCompiler  COMMA_SOURCE_FILE ("implementation_types.galgas", 696)) ;
            }
            GALGAS_boolAttribute var_bv = cast_19368_boolValue ;
            {
            var_bv.modifier_setSubAttributes (var_subAttributes COMMA_SOURCE_FILE ("implementation_types.galgas", 699)) ;
            }
            {
            var_userAttributes.modifier_setValueForKey (var_bv, object->mAttribute_name.reader_string (SOURCE_FILE ("implementation_types.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 700)) ;
            }
            {
            ioArgument_attributes.modifier_setObjectParams (var_userAttributes COMMA_SOURCE_FILE ("implementation_types.galgas", 701)) ;
            }
          }
        }
      }else if (kBoolFalse == test_0) {
        GALGAS_implementationObjectMap var_subImpAttributes ;
        const enumGalgasBool test_2 = cast_18938_b.reader_value (SOURCE_FILE ("implementation_types.galgas", 705)).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_subImpAttributes = object->mAttribute_trueSubAttributes ;
        }else if (kBoolFalse == test_2) {
          var_subImpAttributes = object->mAttribute_falseSubAttributes ;
        }
        GALGAS_objectAttributes var_subAttributes = function_emptyObject (inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 710)) ;
        {
        routine_setDefaultsForType (var_subImpAttributes, var_subAttributes, inCompiler  COMMA_SOURCE_FILE ("implementation_types.galgas", 711)) ;
        }
        GALGAS_boolAttribute var_defaults = GALGAS_boolAttribute::constructor_new (cast_18938_b.reader_oil_5F_desc (SOURCE_FILE ("implementation_types.galgas", 712)), cast_18938_b.reader_location (SOURCE_FILE ("implementation_types.galgas", 712)), cast_18938_b.reader_value (SOURCE_FILE ("implementation_types.galgas", 712)), var_subAttributes  COMMA_SOURCE_FILE ("implementation_types.galgas", 712)) ;
        GALGAS_identifierMap var_attr = ioArgument_attributes.reader_objectParams (SOURCE_FILE ("implementation_types.galgas", 713)) ;
        {
        var_attr.modifier_put (object->mAttribute_name, var_defaults, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 714)) ;
        }
        {
        ioArgument_attributes.modifier_setObjectParams (var_attr COMMA_SOURCE_FILE ("implementation_types.galgas", 715)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impBoolType_setDefault (void) {
  enterCategoryMethod_setDefault (kTypeDescriptor_GALGAS_impBoolType.mSlotID,
                                  categoryMethod_impBoolType_setDefault) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impBoolType_setDefault (defineCategoryMethod_impBoolType_setDefault, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@refType checkAttributeReferences'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_refType_checkAttributeReferences (const cPtr_impType * inObject,
                                                             const GALGAS_implementation constinArgument_imp,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_refType * object = (const cPtr_refType *) inObject ;
  macroValidSharedObject (object, cPtr_refType) ;
  const enumGalgasBool test_0 = callCategoryReader_hasKey ((const cPtr_implementation *) constinArgument_imp.ptr (), object->mAttribute_ref.reader_string (SOURCE_FILE ("implementation_types.galgas", 945)), inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 945)).operator_not (SOURCE_FILE ("implementation_types.galgas", 945)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_ref.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, object->mAttribute_ref.reader_string (SOURCE_FILE ("implementation_types.galgas", 946)).add_operation (GALGAS_string (" object kind does not exist"), inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 946))  COMMA_SOURCE_FILE ("implementation_types.galgas", 946)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_refType_checkAttributeReferences (void) {
  enterCategoryMethod_checkAttributeReferences (kTypeDescriptor_GALGAS_refType.mSlotID,
                                                categoryMethod_refType_checkAttributeReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_refType_checkAttributeReferences (defineCategoryMethod_refType_checkAttributeReferences, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@impBoolType checkAttributeReferences'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impBoolType_checkAttributeReferences (const cPtr_impType * inObject,
                                                                 const GALGAS_implementation constinArgument_imp,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impBoolType * object = (const cPtr_impBoolType *) inObject ;
  macroValidSharedObject (object, cPtr_impBoolType) ;
  cEnumerator_implementationObjectMap enumerator_28095 (object->mAttribute_trueSubAttributes, kEnumeration_up) ;
  while (enumerator_28095.hasCurrentObject ()) {
    callCategoryMethod_checkAttributeReferences ((const cPtr_impType *) enumerator_28095.current_type (HERE).ptr (), constinArgument_imp, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 953)) ;
    enumerator_28095.gotoNextObject () ;
  }
  cEnumerator_implementationObjectMap enumerator_28178 (object->mAttribute_falseSubAttributes, kEnumeration_up) ;
  while (enumerator_28178.hasCurrentObject ()) {
    callCategoryMethod_checkAttributeReferences ((const cPtr_impType *) enumerator_28178.current_type (HERE).ptr (), constinArgument_imp, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 956)) ;
    enumerator_28178.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impBoolType_checkAttributeReferences (void) {
  enterCategoryMethod_checkAttributeReferences (kTypeDescriptor_GALGAS_impBoolType.mSlotID,
                                                categoryMethod_impBoolType_checkAttributeReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impBoolType_checkAttributeReferences (defineCategoryMethod_impBoolType_checkAttributeReferences, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@impEnumType checkAttributeReferences'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impEnumType_checkAttributeReferences (const cPtr_impType * inObject,
                                                                 const GALGAS_implementation constinArgument_imp,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impEnumType * object = (const cPtr_impEnumType *) inObject ;
  macroValidSharedObject (object, cPtr_impEnumType) ;
  cEnumerator_enumValues enumerator_28338 (object->mAttribute_valuesMap, kEnumeration_up) ;
  while (enumerator_28338.hasCurrentObject ()) {
    cEnumerator_implementationObjectMap enumerator_28370 (enumerator_28338.current_subAttributes (HERE), kEnumeration_up) ;
    while (enumerator_28370.hasCurrentObject ()) {
      callCategoryMethod_checkAttributeReferences ((const cPtr_impType *) enumerator_28370.current_type (HERE).ptr (), constinArgument_imp, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 964)) ;
      enumerator_28370.gotoNextObject () ;
    }
    enumerator_28338.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impEnumType_checkAttributeReferences (void) {
  enterCategoryMethod_checkAttributeReferences (kTypeDescriptor_GALGAS_impEnumType.mSlotID,
                                                categoryMethod_impEnumType_checkAttributeReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impEnumType_checkAttributeReferences (defineCategoryMethod_impEnumType_checkAttributeReferences, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding category method '@structAttribute set'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structAttribute_set (const cPtr_object_5F_t * inObject,
                                                const GALGAS_lstring constinArgument_name,
                                                GALGAS_TfieldMap & ioArgument_result,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structAttribute * object = (const cPtr_structAttribute *) inObject ;
  macroValidSharedObject (object, cPtr_structAttribute) ;
  GALGAS_TfieldMap var_subAttrs = callCategoryReader_fieldMap ((const cPtr_objectAttributes *) object->mAttribute_subAttributes.ptr (), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 9)) ;
  {
  routine_addLStringValue (var_subAttrs, GALGAS_string ("NAME"), object->mAttribute_structName, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 10)) ;
  }
  {
  routine_addStructValue (ioArgument_result, constinArgument_name, var_subAttrs, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 11)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structAttribute_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_structAttribute.mSlotID,
                           categoryMethod_structAttribute_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structAttribute_set (defineCategoryMethod_structAttribute_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@boolAttribute set'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_boolAttribute_set (const cPtr_object_5F_t * inObject,
                                              const GALGAS_lstring constinArgument_name,
                                              GALGAS_TfieldMap & ioArgument_result,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolAttribute * object = (const cPtr_boolAttribute *) inObject ;
  macroValidSharedObject (object, cPtr_boolAttribute) ;
  {
  routine_addBoolValue (ioArgument_result, constinArgument_name, object->mAttribute_value, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 24)) ;
  }
  GALGAS_TfieldMap var_subAttrs = callCategoryReader_fieldMap ((const cPtr_objectAttributes *) object->mAttribute_subAttributes.ptr (), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 25)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_subAttrs.reader_count (SOURCE_FILE ("systemConfig.galgas", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_structName = GALGAS_lstring::constructor_new (constinArgument_name.reader_string (SOURCE_FILE ("systemConfig.galgas", 27)).add_operation (GALGAS_string ("_S"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 27)), constinArgument_name.reader_location (SOURCE_FILE ("systemConfig.galgas", 27))  COMMA_SOURCE_FILE ("systemConfig.galgas", 27)) ;
    {
    routine_addStructValue (ioArgument_result, var_structName, var_subAttrs, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 28)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_boolAttribute_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_boolAttribute.mSlotID,
                           categoryMethod_boolAttribute_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolAttribute_set (defineCategoryMethod_boolAttribute_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@enumAttribute set'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumAttribute_set (const cPtr_object_5F_t * inObject,
                                              const GALGAS_lstring constinArgument_name,
                                              GALGAS_TfieldMap & ioArgument_result,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumAttribute * object = (const cPtr_enumAttribute *) inObject ;
  macroValidSharedObject (object, cPtr_enumAttribute) ;
  {
  routine_addStringValue (ioArgument_result, constinArgument_name, object->mAttribute_value, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 37)) ;
  }
  GALGAS_TfieldMap var_subAttrs = callCategoryReader_fieldMap ((const cPtr_objectAttributes *) object->mAttribute_subAttributes.ptr (), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 38)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_subAttrs.reader_count (SOURCE_FILE ("systemConfig.galgas", 39)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_structName = GALGAS_lstring::constructor_new (constinArgument_name.reader_string (SOURCE_FILE ("systemConfig.galgas", 40)).add_operation (GALGAS_string ("_S"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 40)), constinArgument_name.reader_location (SOURCE_FILE ("systemConfig.galgas", 40))  COMMA_SOURCE_FILE ("systemConfig.galgas", 40)) ;
    {
    routine_addStructValue (ioArgument_result, var_structName, var_subAttrs, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 41)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumAttribute_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_enumAttribute.mSlotID,
                           categoryMethod_enumAttribute_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumAttribute_set (defineCategoryMethod_enumAttribute_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding category method '@stringAttribute set'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringAttribute_set (const cPtr_object_5F_t * inObject,
                                                const GALGAS_lstring constinArgument_name,
                                                GALGAS_TfieldMap & ioArgument_result,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_stringAttribute * object = (const cPtr_stringAttribute *) inObject ;
  macroValidSharedObject (object, cPtr_stringAttribute) ;
  {
  routine_addStringValue (ioArgument_result, constinArgument_name, object->mAttribute_value, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 46)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringAttribute_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_stringAttribute.mSlotID,
                           categoryMethod_stringAttribute_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringAttribute_set (defineCategoryMethod_stringAttribute_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@string_class set'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_string_5F_class_set (const cPtr_object_5F_t * inObject,
                                                const GALGAS_lstring constinArgument_name,
                                                GALGAS_TfieldMap & ioArgument_result,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_string_5F_class * object = (const cPtr_string_5F_class *) inObject ;
  macroValidSharedObject (object, cPtr_string_5F_class) ;
  {
  routine_addStringValue (ioArgument_result, constinArgument_name, object->mAttribute_value, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 50)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_string_5F_class_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_string_5F_class.mSlotID,
                           categoryMethod_string_5F_class_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_string_5F_class_set (defineCategoryMethod_string_5F_class_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding category method '@multipleAttribute set'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multipleAttribute_set (const cPtr_object_5F_t * inObject,
                                                  const GALGAS_lstring constinArgument_name,
                                                  GALGAS_TfieldMap & ioArgument_result,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multipleAttribute * object = (const cPtr_multipleAttribute *) inObject ;
  macroValidSharedObject (object, cPtr_multipleAttribute) ;
  GALGAS_TfieldMapList var_multiple = GALGAS_TfieldMapList::constructor_emptyList (SOURCE_FILE ("systemConfig.galgas", 54)) ;
  cEnumerator_identifierList enumerator_2041 (object->mAttribute_items, kEnumeration_up) ;
  while (enumerator_2041.hasCurrentObject ()) {
    GALGAS_TfieldMap var_multipleItem = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("systemConfig.galgas", 56)) ;
    if (enumerator_2041.current_item (HERE).isValid ()) {
      if (enumerator_2041.current_item (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_structAttribute) {
        GALGAS_structAttribute cast_2139_aStruct ((cPtr_structAttribute *) enumerator_2041.current_item (HERE).ptr ()) ;
        {
        routine_addLStringValue (var_multipleItem, GALGAS_string ("NAME"), cast_2139_aStruct.reader_structName (SOURCE_FILE ("systemConfig.galgas", 59)), cast_2139_aStruct.reader_oil_5F_desc (SOURCE_FILE ("systemConfig.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 59)) ;
        }
        GALGAS_TfieldMap var_subAttrs = callCategoryReader_fieldMap ((const cPtr_objectAttributes *) cast_2139_aStruct.reader_subAttributes (SOURCE_FILE ("systemConfig.galgas", 60)).ptr (), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 60)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_subAttrs.reader_count (SOURCE_FILE ("systemConfig.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          cEnumerator_TfieldMap enumerator_2358 (var_subAttrs, kEnumeration_up) ;
          while (enumerator_2358.hasCurrentObject ()) {
            {
            var_multipleItem.modifier_insertKey (enumerator_2358.current_lkey (HERE), enumerator_2358.current_mType (HERE), enumerator_2358.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 63)) ;
            }
            enumerator_2358.gotoNextObject () ;
          }
        }
      }else{
        callCategoryMethod_set ((const cPtr_object_5F_t *) enumerator_2041.current_item (HERE).ptr (), GALGAS_lstring::constructor_new (GALGAS_string ("VALUE"), enumerator_2041.current_item (HERE).reader_location (SOURCE_FILE ("systemConfig.galgas", 67))  COMMA_SOURCE_FILE ("systemConfig.galgas", 67)), var_multipleItem, inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 67)) ;
      }
    }
    var_multiple.addAssign_operation (var_multipleItem  COMMA_SOURCE_FILE ("systemConfig.galgas", 69)) ;
    enumerator_2041.gotoNextObject () ;
  }
  {
  routine_addListValue (ioArgument_result, constinArgument_name, var_multiple, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 71)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multipleAttribute_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_multipleAttribute.mSlotID,
                           categoryMethod_multipleAttribute_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multipleAttribute_set (defineCategoryMethod_multipleAttribute_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@uint32_class set'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uint_33__32__5F_class_set (const cPtr_object_5F_t * inObject,
                                                      const GALGAS_lstring constinArgument_name,
                                                      GALGAS_TfieldMap & ioArgument_result,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_33__32__5F_class * object = (const cPtr_uint_33__32__5F_class *) inObject ;
  macroValidSharedObject (object, cPtr_uint_33__32__5F_class) ;
  {
  routine_addUnsignedValue (ioArgument_result, constinArgument_name, object->mAttribute_value.reader_uint_36__34_ (SOURCE_FILE ("systemConfig.galgas", 75)), object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 75)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uint_33__32__5F_class_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_uint_33__32__5F_class.mSlotID,
                           categoryMethod_uint_33__32__5F_class_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_33__32__5F_class_set (defineCategoryMethod_uint_33__32__5F_class_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@sint32_class set'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sint_33__32__5F_class_set (const cPtr_object_5F_t * inObject,
                                                      const GALGAS_lstring constinArgument_name,
                                                      GALGAS_TfieldMap & ioArgument_result,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sint_33__32__5F_class * object = (const cPtr_sint_33__32__5F_class *) inObject ;
  macroValidSharedObject (object, cPtr_sint_33__32__5F_class) ;
  {
  routine_addSignedValue (ioArgument_result, constinArgument_name, object->mAttribute_value.reader_sint_36__34_ (SOURCE_FILE ("systemConfig.galgas", 79)), object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 79)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sint_33__32__5F_class_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_sint_33__32__5F_class.mSlotID,
                           categoryMethod_sint_33__32__5F_class_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_33__32__5F_class_set (defineCategoryMethod_sint_33__32__5F_class_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@uint64_class set'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uint_36__34__5F_class_set (const cPtr_object_5F_t * inObject,
                                                      const GALGAS_lstring constinArgument_name,
                                                      GALGAS_TfieldMap & ioArgument_result,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_36__34__5F_class * object = (const cPtr_uint_36__34__5F_class *) inObject ;
  macroValidSharedObject (object, cPtr_uint_36__34__5F_class) ;
  {
  routine_addUnsignedValue (ioArgument_result, constinArgument_name, object->mAttribute_value, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 83)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uint_36__34__5F_class_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_uint_36__34__5F_class.mSlotID,
                           categoryMethod_uint_36__34__5F_class_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34__5F_class_set (defineCategoryMethod_uint_36__34__5F_class_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@sint64_class set'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sint_36__34__5F_class_set (const cPtr_object_5F_t * inObject,
                                                      const GALGAS_lstring constinArgument_name,
                                                      GALGAS_TfieldMap & ioArgument_result,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sint_36__34__5F_class * object = (const cPtr_sint_36__34__5F_class *) inObject ;
  macroValidSharedObject (object, cPtr_sint_36__34__5F_class) ;
  {
  routine_addSignedValue (ioArgument_result, constinArgument_name, object->mAttribute_value, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 87)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sint_36__34__5F_class_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_sint_36__34__5F_class.mSlotID,
                           categoryMethod_sint_36__34__5F_class_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34__5F_class_set (defineCategoryMethod_sint_36__34__5F_class_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding category method '@float_class set'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_float_5F_class_set (const cPtr_object_5F_t * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               GALGAS_TfieldMap & ioArgument_result,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_float_5F_class * object = (const cPtr_float_5F_class *) inObject ;
  macroValidSharedObject (object, cPtr_float_5F_class) ;
  {
  routine_addFloatValue (ioArgument_result, constinArgument_name, object->mAttribute_value, object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 91)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_float_5F_class_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_float_5F_class.mSlotID,
                           categoryMethod_float_5F_class_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_float_5F_class_set (defineCategoryMethod_float_5F_class_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Overriding category method '@auto set'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_auto_set (const cPtr_object_5F_t * inObject,
                                     const GALGAS_lstring constinArgument_name,
                                     GALGAS_TfieldMap & ioArgument_result,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_auto * object = (const cPtr_auto *) inObject ;
  macroValidSharedObject (object, cPtr_auto) ;
  {
  routine_addEnumValue (ioArgument_result, constinArgument_name, GALGAS_string ("auto"), object->mAttribute_oil_5F_desc, inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 95)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_auto_set (void) {
  enterCategoryMethod_set (kTypeDescriptor_GALGAS_auto.mSlotID,
                           categoryMethod_auto_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_auto_set (defineCategoryMethod_auto_set, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@impStructType verifyType'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impStructType_verifyType (const cPtr_impType * inObject,
                                                     const GALGAS_object_5F_t constinArgument_attr,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impStructType * object = (const cPtr_impStructType *) inObject ;
  macroValidSharedObject (object, cPtr_impStructType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_structAttribute) {
      GALGAS_structAttribute cast_1816_sa ((cPtr_structAttribute *) constinArgument_attr.ptr ()) ;
      cEnumerator_implementationObjectMap enumerator_1850 (object->mAttribute_structAttributes, kEnumeration_up) ;
      while (enumerator_1850.hasCurrentObject ()) {
        const enumGalgasBool test_0 = cast_1816_sa.reader_subAttributes (SOURCE_FILE ("semantic_verification.galgas", 64)).reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 64)).reader_hasKey (enumerator_1850.current_lkey (HERE).reader_string (SOURCE_FILE ("semantic_verification.galgas", 64)) COMMA_SOURCE_FILE ("semantic_verification.galgas", 64)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_object_5F_t var_subAttr ;
          cast_1816_sa.reader_subAttributes (SOURCE_FILE ("semantic_verification.galgas", 66)).reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 66)).method_get (enumerator_1850.current_lkey (HERE), var_subAttr, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 66)) ;
          callCategoryMethod_verifyMultipleType ((const cPtr_impType *) enumerator_1850.current_type (HERE).ptr (), var_subAttr, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 67)) ;
        }
        enumerator_1850.gotoNextObject () ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 71)), GALGAS_string ("STRUCT expected")  COMMA_SOURCE_FILE ("semantic_verification.galgas", 71)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impStructType_verifyType (void) {
  enterCategoryMethod_verifyType (kTypeDescriptor_GALGAS_impStructType.mSlotID,
                                  categoryMethod_impStructType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impStructType_verifyType (defineCategoryMethod_impStructType_verifyType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding category method '@refType verifyType'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_refType_verifyType (const cPtr_impType * /* inObject */,
                                               const GALGAS_object_5F_t constinArgument_attr,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_string_5F_class) {
    }else{
      inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 81)), GALGAS_string ("object reference expected")  COMMA_SOURCE_FILE ("semantic_verification.galgas", 81)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_refType_verifyType (void) {
  enterCategoryMethod_verifyType (kTypeDescriptor_GALGAS_refType.mSlotID,
                                  categoryMethod_refType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_refType_verifyType (defineCategoryMethod_refType_verifyType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding category method '@impBoolType verifyType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impBoolType_verifyType (const cPtr_impType * inObject,
                                                   const GALGAS_object_5F_t constinArgument_attr,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impBoolType * object = (const cPtr_impBoolType *) inObject ;
  macroValidSharedObject (object, cPtr_impBoolType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_boolAttribute) {
      GALGAS_boolAttribute cast_2567_b ((cPtr_boolAttribute *) constinArgument_attr.ptr ()) ;
      const enumGalgasBool test_0 = cast_2567_b.reader_value (SOURCE_FILE ("semantic_verification.galgas", 90)).boolEnum () ;
      if (kBoolTrue == test_0) {
        cEnumerator_implementationObjectMap enumerator_2626 (object->mAttribute_trueSubAttributes, kEnumeration_up) ;
        while (enumerator_2626.hasCurrentObject ()) {
          const enumGalgasBool test_1 = cast_2567_b.reader_subAttributes (SOURCE_FILE ("semantic_verification.galgas", 92)).reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 92)).reader_hasKey (enumerator_2626.current_lkey (HERE).reader_string (SOURCE_FILE ("semantic_verification.galgas", 92)) COMMA_SOURCE_FILE ("semantic_verification.galgas", 92)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_object_5F_t var_subAttrs ;
            cast_2567_b.reader_subAttributes (SOURCE_FILE ("semantic_verification.galgas", 94)).reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 94)).method_get (enumerator_2626.current_lkey (HERE), var_subAttrs, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 94)) ;
            callCategoryMethod_verifyMultipleType ((const cPtr_impType *) enumerator_2626.current_type (HERE).ptr (), var_subAttrs, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 95)) ;
          }
          enumerator_2626.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_0) {
        cEnumerator_implementationObjectMap enumerator_2909 (object->mAttribute_falseSubAttributes, kEnumeration_up) ;
        while (enumerator_2909.hasCurrentObject ()) {
          const enumGalgasBool test_2 = cast_2567_b.reader_subAttributes (SOURCE_FILE ("semantic_verification.galgas", 100)).reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 100)).reader_hasKey (enumerator_2909.current_lkey (HERE).reader_string (SOURCE_FILE ("semantic_verification.galgas", 100)) COMMA_SOURCE_FILE ("semantic_verification.galgas", 100)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_object_5F_t var_subAttrs ;
            cast_2567_b.reader_subAttributes (SOURCE_FILE ("semantic_verification.galgas", 102)).reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 102)).method_get (enumerator_2909.current_lkey (HERE), var_subAttrs, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 102)) ;
            callCategoryMethod_verifyMultipleType ((const cPtr_impType *) enumerator_2909.current_type (HERE).ptr (), var_subAttrs, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 103)) ;
          }
          enumerator_2909.gotoNextObject () ;
        }
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 108)), GALGAS_string ("BOOLEAN expected")  COMMA_SOURCE_FILE ("semantic_verification.galgas", 108)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impBoolType_verifyType (void) {
  enterCategoryMethod_verifyType (kTypeDescriptor_GALGAS_impBoolType.mSlotID,
                                  categoryMethod_impBoolType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impBoolType_verifyType (defineCategoryMethod_impBoolType_verifyType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding category method '@impEnumType verifyType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impEnumType_verifyType (const cPtr_impType * inObject,
                                                   const GALGAS_object_5F_t constinArgument_attr,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impEnumType * object = (const cPtr_impEnumType *) inObject ;
  macroValidSharedObject (object, cPtr_impEnumType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_enumAttribute) {
      GALGAS_enumAttribute cast_3400_e ((cPtr_enumAttribute *) constinArgument_attr.ptr ()) ;
      const enumGalgasBool test_0 = object->mAttribute_valuesMap.reader_hasKey (cast_3400_e.reader_value (SOURCE_FILE ("semantic_verification.galgas", 117)) COMMA_SOURCE_FILE ("semantic_verification.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_implementationObjectMap var_validVal ;
        object->mAttribute_valuesMap.method_get (function_lstringWith (cast_3400_e.reader_value (SOURCE_FILE ("semantic_verification.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 119)), var_validVal, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 119)) ;
        cEnumerator_implementationObjectMap enumerator_3567 (var_validVal, kEnumeration_up) ;
        while (enumerator_3567.hasCurrentObject ()) {
          const enumGalgasBool test_1 = cast_3400_e.reader_subAttributes (SOURCE_FILE ("semantic_verification.galgas", 121)).reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 121)).reader_hasKey (enumerator_3567.current_lkey (HERE).reader_string (SOURCE_FILE ("semantic_verification.galgas", 121)) COMMA_SOURCE_FILE ("semantic_verification.galgas", 121)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_object_5F_t var_subAttrs ;
            cast_3400_e.reader_subAttributes (SOURCE_FILE ("semantic_verification.galgas", 123)).reader_objectParams (SOURCE_FILE ("semantic_verification.galgas", 123)).method_get (enumerator_3567.current_lkey (HERE), var_subAttrs, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 123)) ;
            callCategoryMethod_verifyMultipleType ((const cPtr_impType *) enumerator_3567.current_type (HERE).ptr (), var_subAttrs, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 124)) ;
          }
          enumerator_3567.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_0) {
        inCompiler->emitSemanticError (cast_3400_e.reader_location (SOURCE_FILE ("semantic_verification.galgas", 128)), cast_3400_e.reader_value (SOURCE_FILE ("semantic_verification.galgas", 128)).add_operation (GALGAS_string (" is not a valid enum value"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 128))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 128)) ;
      }
    }else if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_auto) {
    }else{
      inCompiler->printMessage (GALGAS_string ("**** @impEnumType ****\n")  COMMA_SOURCE_FILE ("semantic_verification.galgas", 132)) ;
      inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 133)), GALGAS_string ("ENUM expected")  COMMA_SOURCE_FILE ("semantic_verification.galgas", 133)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impEnumType_verifyType (void) {
  enterCategoryMethod_verifyType (kTypeDescriptor_GALGAS_impEnumType.mSlotID,
                                  categoryMethod_impEnumType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impEnumType_verifyType (defineCategoryMethod_impEnumType_verifyType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@impAutoDefaultType verifyType'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impAutoDefaultType_verifyType (const cPtr_impType * inObject,
                                                          const GALGAS_object_5F_t constinArgument_attr,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impAutoDefaultType * object = (const cPtr_impAutoDefaultType *) inObject ;
  macroValidSharedObject (object, cPtr_impAutoDefaultType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_stringAttribute) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (GALGAS_dataType::constructor_string (SOURCE_FILE ("semantic_verification.galgas", 143)))).operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (GALGAS_dataType::constructor_identifier (SOURCE_FILE ("semantic_verification.galgas", 143)))) COMMA_SOURCE_FILE ("semantic_verification.galgas", 143)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 144)), GALGAS_string ("string of identifier expected")  COMMA_SOURCE_FILE ("semantic_verification.galgas", 144)) ;
      }
    }else if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_string_5F_class) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (GALGAS_dataType::constructor_identifier (SOURCE_FILE ("semantic_verification.galgas", 147)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 148)), categoryReader_oilType (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 148)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 148))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 148)) ;
      }
    }else if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_auto) {
    }else{
      inCompiler->printMessage (GALGAS_string ("*** @impAutoDefaultType ***\n")  COMMA_SOURCE_FILE ("semantic_verification.galgas", 152)) ;
      constinArgument_attr.log ("attr"  COMMA_SOURCE_FILE ("semantic_verification.galgas", 153)) ;
      inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 154)), categoryReader_oilType (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 154)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 154))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 154)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impAutoDefaultType_verifyType (void) {
  enterCategoryMethod_verifyType (kTypeDescriptor_GALGAS_impAutoDefaultType.mSlotID,
                                  categoryMethod_impAutoDefaultType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impAutoDefaultType_verifyType (defineCategoryMethod_impAutoDefaultType_verifyType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@impRangedType verifyType'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_impRangedType_verifyType (const cPtr_impType * inObject,
                                                     const GALGAS_object_5F_t constinArgument_attr,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impRangedType * object = (const cPtr_impRangedType *) inObject ;
  macroValidSharedObject (object, cPtr_impRangedType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_33__32__5F_class) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (GALGAS_dataType::constructor_uint_33__32_Number (SOURCE_FILE ("semantic_verification.galgas", 164)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 165)), categoryReader_oilType (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 165)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 165))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 165)) ;
      }
    }else if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_sint_33__32__5F_class) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (GALGAS_dataType::constructor_sint_33__32_Number (SOURCE_FILE ("semantic_verification.galgas", 168)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 169)), categoryReader_oilType (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 169)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 169))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 169)) ;
      }
    }else if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_36__34__5F_class) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (GALGAS_dataType::constructor_uint_36__34_Number (SOURCE_FILE ("semantic_verification.galgas", 172)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 173)), categoryReader_oilType (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 173)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 173))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 173)) ;
      }
    }else if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_sint_36__34__5F_class) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (GALGAS_dataType::constructor_sint_36__34_Number (SOURCE_FILE ("semantic_verification.galgas", 176)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 177)), categoryReader_oilType (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 177)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 177))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 177)) ;
      }
    }else if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_float_5F_class) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (GALGAS_dataType::constructor_floatNumber (SOURCE_FILE ("semantic_verification.galgas", 180)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 181)), categoryReader_oilType (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 181)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 181))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 181)) ;
      }
    }else if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_auto) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_withAuto.objectCompare (GALGAS_bool (false))).boolEnum () ;
      if (kBoolTrue == test_5) {
        inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 185)), GALGAS_string ("AUTO is not allowed for ").add_operation (object->mAttribute_name.reader_string (SOURCE_FILE ("semantic_verification.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 185)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 185))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 185)) ;
      }
    }else{
      inCompiler->emitSemanticError (constinArgument_attr.reader_location (SOURCE_FILE ("semantic_verification.galgas", 189)), categoryReader_oilType (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 189)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 189))  COMMA_SOURCE_FILE ("semantic_verification.galgas", 189)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_impRangedType_verifyType (void) {
  enterCategoryMethod_verifyType (kTypeDescriptor_GALGAS_impRangedType.mSlotID,
                                  categoryMethod_impRangedType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impRangedType_verifyType (defineCategoryMethod_impRangedType_verifyType, NULL) ;


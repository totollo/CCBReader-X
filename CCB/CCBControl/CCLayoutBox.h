//
//  CCLayoutBox.h
//  ccx
//
//  Created by Higgx on 12/17/13.
//
//

#ifndef __ccx__CCLayoutBox__
#define __ccx__CCLayoutBox__

#include "CCLayout.h"

USING_NS_CC;

typedef enum CCLayoutBoxDirection
{
    /// The children will be layout out in a horizontal line
    CCLayoutBoxDirectionHorizontal,
    
    /// The children will be layout out in a vertical line
    CCLayoutBoxDirectionVertical,
}CCLayoutBoxDirection;

class CCLayoutBox
: public CCLayout
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(CCLayoutBox, create);
    CCLayoutBoxDirection direction;
    float _spacing;
    
public:
    
    virtual void layout();
    
    float getSpacing();
    void setSpacing(float sp);
    
    float roundUpToEven(float r);
};

#endif /* defined(__ccx__CCLayoutBox__) */

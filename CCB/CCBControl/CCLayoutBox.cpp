//
//  CCLayoutBox.cpp
//  ccx
//
//  Created by Higgx on 12/17/13.
//
//

#include "CCLayoutBox.h"



float CCLayoutBox::getSpacing(){
    return _spacing;
}

void CCLayoutBox::setSpacing(float sp){
    _spacing = sp;
    needsLayout();
}

float CCLayoutBox::roundUpToEven(float r){
    return ceilf(r/2.0f) * 2.0f;
}

void CCLayoutBox::layout(){
    CCObject* obj;
    
    if (direction == CCLayoutBoxDirectionHorizontal)
    {
        // Get the maximum height
        float maxHeight = 0;
        
        CCARRAY_FOREACH(getChildren(), obj){
            CCNode* child = (CCNode*)obj;
            float height = child->getContentSize().height;
            if (height > maxHeight) maxHeight = height;
        }
        
        // Position the nodes
        float width = 0;
        
        CCARRAY_FOREACH(getChildren(), obj){
            CCNode* child = (CCNode*)obj;
            CCSize childSize = child->getContentSize();
            
            CCPoint offset = child->getAnchorPoint();
            CCPoint localPos = ccp(roundf(width), roundf((maxHeight-childSize.height)/2.0f));
            CCPoint position = ccpAdd(localPos, offset);
            
            child->setPosition(position);
            
            width += childSize.width;
            width += _spacing;
        }
        
        // Account for last added increment
        width -= _spacing;
        if (width < 0) width = 0;
        
        setContentSize(CCSizeMake(roundUpToEven(width), roundUpToEven(maxHeight)));
    }
    else
    {
        // Get the maximum width
        float maxWidth = 0;
        CCARRAY_FOREACH(getChildren(), obj){
            CCNode* child = (CCNode*)obj;
            float width = child->getContentSize().width;
            if (width > maxWidth) maxWidth = width;
        }
        
        // Position the nodes
        float height = 0;
        CCARRAY_FOREACH(getChildren(), obj){
            CCNode* child = (CCNode*)obj;
            CCSize childSize = child->getContentSize();
            
            CCPoint offset = child->getAnchorPoint();
            CCPoint localPos = ccp(roundf((maxWidth-childSize.width)/2.0f), roundf(height));
            CCPoint position = ccpAdd(localPos, offset);
            
            child->setPosition(position);
            
            height += childSize.height;
            height += _spacing;
        }
        
        // Account for last added increment
        height -= _spacing;
        if (height < 0) height = 0;
        
        setContentSize(CCSizeMake(roundUpToEven(maxWidth), roundUpToEven(height)));
    }
}
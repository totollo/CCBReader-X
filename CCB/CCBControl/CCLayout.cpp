//
//  CCLayout.cpp
//  ccx
//
//  Created by Higgx on 12/17/13.
//
//

#include "CCLayout.h"

bool CCLayout::init(){
    if (CCNode::init()) {
        needsLayout();
        return true;
    }else{
        return false;
    }
}

void CCLayout::needsLayout(){
    _needsLayout = true;
}

void CCLayout::visit(){
    if (_needsLayout) {
        layout();
        _needsLayout = false;
    }
    CCNode::visit();
}

void CCLayout::layout(){
    
}

void CCLayout::addChild(cocos2d::CCNode *child, int zOrder, int tag){
    CCNode::addChild(child, zOrder, tag);
    layout();
}
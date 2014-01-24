//
//  CCLayout.h
//  ccx
//
//  Created by Higgx on 12/17/13.
//
//

#ifndef __ccx__CCLayout__
#define __ccx__CCLayout__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCB.h"


USING_NS_CC;

class CCLayout
: public CCNode
{
public:
    
    bool _needsLayout;
    
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(CCLayout, create);
    
    virtual bool init();
    virtual void visit();
    virtual void addChild(CCNode* child, int zOrder, int tag);
    
    void needsLayout();
    virtual void layout();
};

#endif /* defined(__ccx__CCLayout__) */

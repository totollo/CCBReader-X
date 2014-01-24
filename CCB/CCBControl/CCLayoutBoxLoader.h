//
//  CCLayoutBoxLoader.h
//  ccx
//
//  Created by Higgx on 12/17/13.
//
//

#ifndef __ccx__CCLayoutBoxLoader__
#define __ccx__CCLayoutBoxLoader__

#include "cocos2d.h"
#include "CCNodeLoader.h"
#include "CCLayoutBox.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCLayoutBoxLoader : public CCNodeLoader{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CCLayoutBoxLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCLayoutBox);

    
public:
    virtual void onHandlePropTypeIntegerLabeled(CCNode * pNode, CCNode * pParent, const char* pPropertyName, int pIntegerLabeled, CCBReader * pCCBReader);
    
    virtual void onHandlePropTypeFloatScale(CCNode * pNode, CCNode * pParent, const char* pPropertyName, float pFloatScale, CCBReader * pCCBReader);

};

#endif /* defined(__ccx__CCLayoutBoxLoader__) */

//
//  CCBCheckBoxLoader.h
//  richman
//
//  Created by Higgx on 12/30/13.
//
//

#ifndef __richman__CCBCheckBoxLoader__
#define __richman__CCBCheckBoxLoader__

#include "CCBCheckBox.h"
#include "CCControlButtonLoader.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBCheckBoxLoader : public CCControlButtonLoader
{
public:
    virtual ~CCBCheckBoxLoader() {};
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CCBCheckBoxLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCBCheckBox);
    
    virtual void onHandlePropTypeSound(CCNode * pNode, CCNode * pParent, const char* pPropertyName, const char * pText, CCBReader * pCCBReader);
    virtual void onHandlePropTypeSpriteFrame(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSpriteFrame * pCCSpriteFrame, CCBReader * pCCBReader);
};

#endif /* defined(__richman__CCBCheckBoxLoader__) */

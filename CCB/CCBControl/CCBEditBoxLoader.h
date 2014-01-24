//
//  CCEditBoxLoader.h
//  ccx
//
//  Created by Higgx on 12/23/13.
//
//

#ifndef __ccx__CCBEditBoxLoader__
#define __ccx__CCBEditBoxLoader__

#include "CCNodeLoader.h"
#include "CCScale9Sprite.h"
#include "CCBEditBox.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBEditBoxLoader : public CCNodeLoader {
public:
    virtual ~CCBEditBoxLoader() {};
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CCBEditBoxLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCBEditBox);
    
    virtual void onHandlePropTypeColor3(CCNode * pNode, CCNode * pParent, const char * pPropertyName, ccColor3B pCCColor3B, CCBReader * pCCBReader);
    virtual void onHandlePropTypeByte(CCNode * pNode, CCNode * pParent, const char * pPropertyName, unsigned char pByte, CCBReader * pCCBReader);
    virtual void onHandlePropTypeBlendFunc(CCNode * pNode, CCNode * pParent, const char * pPropertyName, ccBlendFunc pCCBlendFunc, CCBReader * pCCBReader);
    virtual void onHandlePropTypeSpriteFrame(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSpriteFrame * pCCSpriteFrame, CCBReader * pCCBReader);
    virtual void onHandlePropTypeSize(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSize pSize, CCBReader * pCCBReader);
    virtual void onHandlePropTypeFloat(CCNode * pNode, CCNode * pParent, const char * pPropertyName, float pFloat, CCBReader * pCCBReader);
};


#endif /* defined(__ccx__CCEditBoxLoader__) */

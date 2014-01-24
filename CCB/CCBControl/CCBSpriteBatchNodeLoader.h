//
//  CCBSpriteBatchNodeLoader.h
//  ccx
//
//  Created by Higgx on 12/28/13.
//
//

#ifndef __ccx__CCBSpriteBatchNodeLoader__
#define __ccx__CCBSpriteBatchNodeLoader__

#include "CCBSpriteBatchNode.h"
#include "CCNodeLoader.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBSpriteBatchNodeLoader : public CCNodeLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CCBSpriteBatchNodeLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCBSpriteBatchNode);
    
public:
    virtual void onHandlePropTypeSpriteFrame(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSpriteFrame * pCCSpriteFrame, CCBReader * pCCBReader);
};

#endif /* defined(__ccx__CCBSpriteBatchNodeLoader__) */

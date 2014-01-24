//
//  CCBEditBoxLoader.cpp
//  ccx
//
//  Created by Higgx on 12/23/13.
//
//

#include "CCBEditBoxLoader.h"

#define PROPERTY_POSITION "position"
#define PROPERTY_CONTENTSIZE "contentSize"
#define PROPERTY_SPRITEFRAME "spriteFrame"
#define PROPERTY_COLOR "color"
#define PROPERTY_OPACITY "opacity"
#define PROPERTY_BLENDFUNC "blendFunc"
#define PROPERTY_PREFEREDSIZE "preferedSize" // TODO Should be "preferredSize". This is a typo in cocos2d-iphone, cocos2d-x and CocosBuilder!
#define PROPERTY_INSETLEFT "insetLeft"
#define PROPERTY_INSETTOP "insetTop"
#define PROPERTY_INSETRIGHT "insetRight"
#define PROPERTY_INSETBOTTOM "insetBottom"

void CCBEditBoxLoader::onHandlePropTypeSpriteFrame(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSpriteFrame * pCCSpriteFrame, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_SPRITEFRAME) == 0) {
        ((CCBEditBox *)pNode)->setSpriteFrame(pCCSpriteFrame);
    } else {
        CCNodeLoader::onHandlePropTypeSpriteFrame(pNode, pParent, pPropertyName, pCCSpriteFrame, pCCBReader);
    }
}

void CCBEditBoxLoader::onHandlePropTypeColor3(CCNode * pNode, CCNode * pParent, const char * pPropertyName, ccColor3B pCCColor3B, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_COLOR) == 0) {
        ((CCBEditBox *)pNode)->setColor(pCCColor3B);
    } else {
        CCNodeLoader::onHandlePropTypeColor3(pNode, pParent, pPropertyName, pCCColor3B, pCCBReader);
    }
}

void CCBEditBoxLoader::onHandlePropTypeByte(CCNode * pNode, CCNode * pParent, const char * pPropertyName, unsigned char pByte, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_OPACITY) == 0) {
        ((CCBEditBox *)pNode)->setOpacity(pByte);
    } else {
        CCNodeLoader::onHandlePropTypeByte(pNode, pParent, pPropertyName, pByte, pCCBReader);
    }
}

void CCBEditBoxLoader::onHandlePropTypeBlendFunc(CCNode * pNode, CCNode * pParent, const char * pPropertyName, ccBlendFunc pCCBlendFunc, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_BLENDFUNC) == 0) {
        // TODO Not exported by CocosBuilder yet!
        // ((CCBEditBox *)pNode)->setBlendFunc(pCCBlendFunc);
    } else {
        CCNodeLoader::onHandlePropTypeBlendFunc(pNode, pParent, pPropertyName, pCCBlendFunc, pCCBReader);
    }
}

void CCBEditBoxLoader::onHandlePropTypeSize(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSize pSize, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_CONTENTSIZE) == 0) {
        //((CCBEditBox *)pNode)->setContentSize(pSize);
    } else if(strcmp(pPropertyName, PROPERTY_PREFEREDSIZE) == 0) {
        ((CCBEditBox *)pNode)->setPreferredSize(pSize);
    } else {
        CCNodeLoader::onHandlePropTypeSize(pNode, pParent, pPropertyName, pSize, pCCBReader);
    }
}

void CCBEditBoxLoader::onHandlePropTypeFloat(CCNode * pNode, CCNode * pParent, const char * pPropertyName, float pFloat, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_INSETLEFT) == 0) {
        ((CCBEditBox *)pNode)->setInsetLeft(pFloat);
    } else if(strcmp(pPropertyName, PROPERTY_INSETTOP) == 0) {
        ((CCBEditBox *)pNode)->setInsetTop(pFloat);
    } else if(strcmp(pPropertyName, PROPERTY_INSETRIGHT) == 0) {
        ((CCBEditBox *)pNode)->setInsetRight(pFloat);
    } else if(strcmp(pPropertyName, PROPERTY_INSETBOTTOM) == 0) {
        ((CCBEditBox *)pNode)->setInsetBottom(pFloat);
    } else {
        CCNodeLoader::onHandlePropTypeFloat(pNode, pParent, pPropertyName, pFloat, pCCBReader);
    }
}

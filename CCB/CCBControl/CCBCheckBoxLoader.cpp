//
//  CCBCheckBoxLoader.cpp
//  richman
//
//  Created by Higgx on 12/30/13.
//
//

#include "CCBCheckBoxLoader.h"

#define PROPERTY_SOUND "sound"
#define PROPERTY_CHECK "sf_check"

void CCBCheckBoxLoader::onHandlePropTypeSound(CCNode * pNode, CCNode * pParent, const char* pPropertyName, const char * pText, CCBReader * pCCBReader){
    if (strcmp(pPropertyName,PROPERTY_SOUND) == 0) {
        ((CCBCheckBox*)pNode)->sound = string(pText);
    }
}

void CCBCheckBoxLoader::onHandlePropTypeSpriteFrame(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSpriteFrame * pCCSpriteFrame, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_CHECK) == 0) {
        if(pCCSpriteFrame != NULL) {
            ((CCBCheckBox *)pNode)->img_check = CCSprite::createWithSpriteFrame(pCCSpriteFrame);
            pNode->addChild(((CCBCheckBox *)pNode)->img_check);
            ((CCBCheckBox *)pNode)->img_check->setAnchorPoint(CCPointZero);
            ((CCBCheckBox *)pNode)->img_check->setVisible(false);
        }
    } else {
        CCControlButtonLoader::onHandlePropTypeSpriteFrame(pNode, pParent, pPropertyName, pCCSpriteFrame, pCCBReader);
    }
}
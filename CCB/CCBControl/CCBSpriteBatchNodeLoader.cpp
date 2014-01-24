//
//  CCBSpriteBatchNodeLoader.cpp
//  ccx
//
//  Created by Higgx on 12/28/13.
//
//

#include "CCBSpriteBatchNodeLoader.h"

#define PROPERTY_SH "spriteSheet"

void CCBSpriteBatchNodeLoader::onHandlePropTypeSpriteFrame(cocos2d::CCNode *pNode, cocos2d::CCNode *pParent, const char *pPropertyName, cocos2d::CCSpriteFrame *pCCSpriteFrame, cocos2d::extension::CCBReader *pCCBReader){
    if (strcmp(pPropertyName, PROPERTY_SH) == 0) {
        ((CCBSpriteBatchNode*)pNode)->setTexture(pCCSpriteFrame->getTexture());
    }
}

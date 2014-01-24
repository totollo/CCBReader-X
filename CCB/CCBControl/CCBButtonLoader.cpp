//
//  CCBButtonLoader.cpp
//  ccx
//
//  Created by Higgx on 12/9/13.
//
//

#include "CCBButtonLoader.h"

#define PROPERTY_ANI "ani"
#define PROPERTY_NORMAL "s_normal"
#define PROPERTY_NORMAL_DARK "s_normal_dark"
#define PROPERTY_DOWN "s_down"
#define PROPERTY_DISABLE "s_disable"
#define PROPERTY_PREFEREDSIZE "preferedSize"


void CCBButtonLoader::onHandlePropTypeString(cocos2d::CCNode *pNode, cocos2d::CCNode *pParent, const char *pPropertyName, const char *pString, cocos2d::extension::CCBReader *pCCBReader){
    if (strcmp(pPropertyName, PROPERTY_NORMAL)==0) {
        ((CCBButton*)pNode)->setS_normal(CCString::createWithFormat("%s",pString));
    }
    if (strcmp(pPropertyName, PROPERTY_NORMAL_DARK)==0) {
        ((CCBButton*)pNode)->setS_normal_dark(CCString::createWithFormat("%s",pString));
    }
    if (strcmp(pPropertyName, PROPERTY_DOWN)==0) {
        ((CCBButton*)pNode)->setS_dwon(CCString::createWithFormat("%s",pString));
    }
    if (strcmp(pPropertyName, PROPERTY_DISABLE)==0) {
        ((CCBButton*)pNode)->setS_disable(CCString::createWithFormat("%s",pString));
    }
}

void CCBButtonLoader::onHandlePropTypeCCBFile(cocos2d::CCNode *pNode, cocos2d::CCNode *pParent, const char *pPropertyName, cocos2d::CCNode *pCCBFileNode, cocos2d::extension::CCBReader *pCCBReader){
    if (strcmp(pPropertyName, PROPERTY_ANI) == 0) {
        ((CCBButton*)pNode)->setAni(pCCBFileNode);
    }
}

void CCBButtonLoader::onHandlePropTypeSize(cocos2d::CCNode *pNode, cocos2d::CCNode *pParent, const char *pPropertyName, cocos2d::CCSize pSize, cocos2d::extension::CCBReader *pCCBReader){
    if (strcmp(pPropertyName, PROPERTY_PREFEREDSIZE) == 0) {
        ((CCBButton*)pNode)->setPreferredSize(pSize);
    }
}
#include "CCControlLoader.h"


NS_CC_EXT_BEGIN

#define PROPERTY_ENABLED "enabled"
#define PROPERTY_SELECTED "selected"
#define PROPERTY_CCCONTROL "ccControl"
#define PROPERTY_TOUCHPRIORITY "touchPriority"

void CCControlLoader::onHandlePropTypeCheck(CCNode * pNode, CCNode * pParent, const char * pPropertyName, bool pCheck, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_ENABLED) == 0) {
        ((CCControl *)pNode)->setEnabled(pCheck);
    } else if(strcmp(pPropertyName, PROPERTY_SELECTED) == 0) {
        ((CCControl *)pNode)->setSelected(pCheck);
    } else {
        CCNodeLoader::onHandlePropTypeCheck(pNode, pParent, pPropertyName, pCheck, pCCBReader);
    }
}

void CCControlLoader::onHandlePropTypeBlockCCControl(CCNode * pNode, CCNode * pParent, const char * pPropertyName, BlockCCControlData * pBlockCCControlData, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_CCCONTROL) == 0) {
        ((CCControl *)pNode)->addTargetWithActionForControlEvents(pBlockCCControlData->mTarget, pBlockCCControlData->mSELCCControlHandler, pBlockCCControlData->mControlEvents);
    } else {
        CCNodeLoader::onHandlePropTypeBlockCCControl(pNode, pParent, pPropertyName, pBlockCCControlData, pCCBReader);
    }
}

void CCControlLoader::onHandlePropTypeInteger(cocos2d::CCNode *pNode, cocos2d::CCNode *pParent, const char *pPropertyName, int pInteger, cocos2d::extension::CCBReader *pCCBReader){
    if (strcmp(pPropertyName, PROPERTY_TOUCHPRIORITY) == 0) {
        ((CCControl*)pNode)->setTouchPriority(pInteger);
    }else{
        CCNodeLoader::onHandlePropTypeInteger(pNode, pParent, pPropertyName, pInteger, pCCBReader);
    }
}


NS_CC_EXT_END
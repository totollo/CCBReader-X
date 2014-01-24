#include "CCBSliderLoader.h"


#define PROPERTY_BACKGROUND "backgroundSprite"
#define PROPERTY_PROGRESS "progressSprite"
#define PROPERTY_THUMB "thumbSprite"

void CCBSliderLoader::onHandlePropTypeSpriteFrame(cocos2d::CCNode *pNode, cocos2d::CCNode *pParent, const char *pPropertyName, cocos2d::CCSpriteFrame *pCCSpriteFrame, cocos2d::extension::CCBReader *pCCBReader)
{
    if (strcmp(pPropertyName, PROPERTY_BACKGROUND) == 0) {
        ((CCBSlider*)pNode)->setBackground(pCCSpriteFrame);
    }
    if (strcmp(pPropertyName, PROPERTY_PROGRESS) == 0) {
        ((CCBSlider*)pNode)->setProgress(pCCSpriteFrame);
    }
    if (strcmp(pPropertyName, PROPERTY_THUMB) == 0) {
        ((CCBSlider*)pNode)->setThumb(pCCSpriteFrame);
    }
}

#ifndef _CCB_CCBSliderLoader_H_
#define _CCB_CCBSliderLoader_H_

#include "CCBSlider.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBSliderLoader : public CCControlLoader {
public:
    virtual ~CCBSliderLoader() {};
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CCBSliderLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCBSlider);

    virtual void onHandlePropTypeSpriteFrame(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSpriteFrame * pCCSpriteFrame, CCBReader * pCCBReader);
};


#endif

//
//  CCBSlider.h
//  ccx
//
//  Created by Higgx on 12/8/13.
//
//

#ifndef __ccx__CCBSlider__
#define __ccx__CCBSlider__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCB.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBSlider : public CCControlSlider
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(CCBSlider, create);
    virtual bool init(void);
    
    void calPosition();
    void setBackground(CCSpriteFrame* frame);
    void setProgress(CCSpriteFrame* frame);
    void setThumb(CCSpriteFrame* frame);
};

#endif /* defined(__ccx__CCBSlider__) */

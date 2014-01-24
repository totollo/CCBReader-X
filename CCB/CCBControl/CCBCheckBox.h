//
//  CCBCheckBox.h
//  richman
//
//  Created by Higgx on 12/30/13.
//
//

#ifndef __richman__CCBCheckBox__
#define __richman__CCBCheckBox__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCB.h"

USING_NS_CC;
USING_NS_CC_EXT;

using namespace std;

class CCBCheckBox : public CCControlButton
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(CCBCheckBox, create);
    virtual bool init(void);
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    
    CCSprite* img_check;
    string sound;
    
    bool isChecked(){
        if (img_check!=NULL) {
            return img_check->isVisible();
        }else{
            return false;
        }
    }
};

#endif /* defined(__richman__CCBCheckBox__) */

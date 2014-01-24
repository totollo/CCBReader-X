//
//  CCBSButton.h
//  ccx
//
//  Created by Higgx on 12/26/13.
//
//

#ifndef __ccx__CCBSButton__
#define __ccx__CCBSButton__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCB.h"
#include <string>

USING_NS_CC;
USING_NS_CC_EXT;

using namespace std;

class CCBSButton : public CCControlButton
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(CCBSButton, create);
    virtual bool init(void);
    
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    
    string sound;
};

#endif /* defined(__ccx__CCBSButton__) */

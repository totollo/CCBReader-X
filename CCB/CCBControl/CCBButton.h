//
//  CCBButton.h
//  ccx
//
//  Created by Higgx on 12/9/13.
//
//

#ifndef __ccx__CCBButton__
#define __ccx__CCBButton__


#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCB.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBButton : public CCControlButton
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(CCBButton, create);
    virtual bool init(void);
    
    CCNode* _Ani;
    CCString* _S_normal;
    CCString* _S_normal_dark;
    CCString* _S_dwon;
    CCString* _S_disable;
    
    bool _normalDark;
    
    CCBAnimationManager* am;
    
    void setAni(CCNode* ani);
    void setS_normal(CCString* txt);
    void setS_normal_dark(CCString* txt);
    void setS_dwon(CCString* txt);
    void setS_disable(CCString* txt);
    
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);
    virtual void ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent);
//
    virtual void normalDark(bool enabled);
    virtual void disable(bool enabled);
};


#endif /* defined(__ccx__CCBButton__) */

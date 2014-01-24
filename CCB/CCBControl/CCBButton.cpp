//
//  CCBButton.cpp
//  ccx
//
//  Created by Higgx on 12/9/13.
//
//

#include "CCBButton.h"
#include "CCBAnimationManager.h"

USING_NS_CC;
USING_NS_CC_EXT;

bool CCBButton::init(){
    if (CCControlButton::init()) {
        _Ani = NULL;
        _S_normal = NULL;
        _S_normal_dark = NULL;
        _S_dwon = NULL;
        _S_disable = NULL;
        _normalDark = false;
        am = NULL;
//        setZoomOnTouchDown(false);
        
        return true;
    }else{
        return false;
    }
}

void CCBButton::setAni(cocos2d::CCNode *ani){
    if (_Ani!=NULL) {
        _Ani->removeAllChildrenWithCleanup(true);
    }
    _Ani = ani;
    am = (CCBAnimationManager*)ani->getUserObject();
    this->addChild(_Ani);
}

void CCBButton::setS_normal(cocos2d::CCString *txt){
    txt->retain();
    _S_normal = txt;
}

void CCBButton::setS_normal_dark(cocos2d::CCString *txt){
    txt->retain();
    _S_normal_dark = txt;
}

void CCBButton::setS_dwon(cocos2d::CCString *txt){
    txt->retain();
    _S_dwon = txt;
}

void CCBButton::setS_disable(cocos2d::CCString *txt){
    txt->retain();
    _S_disable = txt;
}

bool CCBButton::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){

    if (!isTouchInside(pTouch) || !isEnabled() || !isVisible() || !hasVisibleParents() )
    {
        return false;
    }
    
    for (CCNode *c = this->m_pParent; c != NULL; c = c->getParent())
    {
        if (c->isVisible() == false)
        {
            return false;
        }
    }
    
    m_isPushed = true;
    this->setHighlighted(true);
    
    am->runAnimationsForSequenceNamed(_S_dwon->getCString());
    sendActionsForControlEvents(CCControlEventTouchDown);
    return true;
}

void CCBButton::ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
    CCControlButton::ccTouchMoved(pTouch, pEvent);
}

void CCBButton::ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
    CCControlButton::ccTouchEnded(pTouch, pEvent);
    CCBAnimationManager* am = (CCBAnimationManager*)(_Ani->getUserObject());
    if(_normalDark){
        am->runAnimationsForSequenceNamed(_S_normal_dark->getCString());
    }else{
        am->runAnimationsForSequenceNamed(_S_normal->getCString());
    }
    
}

void CCBButton::ccTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
    CCControlButton::ccTouchCancelled(pTouch, pEvent);
    CCBAnimationManager* am = (CCBAnimationManager*)(_Ani->getUserObject());
    if(_normalDark){
        am->runAnimationsForSequenceNamed(_S_normal_dark->getCString());
    }else{
        am->runAnimationsForSequenceNamed(_S_normal->getCString());
    }
}

void CCBButton::normalDark(bool enabled){
    _normalDark = enabled;
    if(_normalDark){
        am->runAnimationsForSequenceNamed(_S_normal_dark->getCString());
    }else{
        am->runAnimationsForSequenceNamed(_S_normal->getCString());
    }
}

void CCBButton::disable(bool enabled){
    if (!enabled) {
        if(_normalDark){
            am->runAnimationsForSequenceNamed(_S_normal_dark->getCString());
        }else{
            am->runAnimationsForSequenceNamed(_S_normal->getCString());
        }
    }else{
        am->runAnimationsForSequenceNamed(_S_disable->getCString());
    }
    setEnabled(!enabled);
}

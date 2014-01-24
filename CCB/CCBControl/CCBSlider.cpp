//
//  CCBSlider.cpp
//  ccx
//
//  Created by Higgx on 12/8/13.
//
//

#include "CCBSlider.h"

USING_NS_CC;
USING_NS_CC_EXT;

bool CCBSlider::init(){
    if (CCControlSlider::init()) {
        ignoreAnchorPointForPosition(false);
        setTouchEnabled(true);
        
        setBackgroundSprite(NULL);
        setProgressSprite(NULL);
        setThumbSprite(NULL);
        
        setMaximumValue(1.0f);
        setMinimumValue(0.0f);
        
        return true;
    }else{
        return false;
    }
    
}

void CCBSlider::calPosition(){
    if (getBackgroundSprite()!=NULL && getThumbSprite()!=NULL) {
        // Defines the content size
        CCRect r_b = getBackgroundSprite()->boundingBox();
        CCRect r_t = getThumbSprite()->boundingBox();
        r_b.origin = CCPointZero;
//        r_t.origin = CCPointZero;
        CCRect maxRect   = CCControlUtils::CCRectUnion(r_b,r_t );
        
        setContentSize(CCSizeMake(maxRect.size.width, maxRect.size.height));
    }
    if (getBackgroundSprite()!=NULL) {
        // Add the slider background
        getBackgroundSprite()->setAnchorPoint(ccp(0.5f, 0.5f));
        getBackgroundSprite()->setPosition(ccp(this->getContentSize().width / 2, this->getContentSize().height / 2));
    }
    
    if (getProgressSprite()!=NULL) {
        // Add the progress bar
        getProgressSprite()->setAnchorPoint(ccp(0.0f, 0.5f));
        getProgressSprite()->setPosition(ccp(0.0f, this->getContentSize().height / 2));
    }
    
    if (getThumbSprite()!=NULL) {
        // Add the slider thumb
        getThumbSprite()->setPosition(ccp(0.0f, this->getContentSize().height / 2));
    }
}

void CCBSlider::setBackground(CCSpriteFrame* frame){
    if (getBackgroundSprite()!=NULL) {
        getBackgroundSprite()->removeFromParentAndCleanup(true);
    }
    setBackgroundSprite(CCSprite::createWithSpriteFrame(frame));
    calPosition();
    addChild(getBackgroundSprite(),1);
}

void CCBSlider::setProgress(CCSpriteFrame* frame){
    if (getProgressSprite()!=NULL) {
        getProgressSprite()->removeFromParentAndCleanup(true);
    }
    setProgressSprite(CCSprite::createWithSpriteFrame(frame));
    calPosition();
    addChild(getProgressSprite(),2);
}

void CCBSlider::setThumb(CCSpriteFrame* frame){
    if (getThumbSprite()!=NULL) {
        getThumbSprite()->removeFromParentAndCleanup(true);
    }
    setThumbSprite(CCSprite::createWithSpriteFrame(frame));
    calPosition();
    addChild(getThumbSprite(),3);
}
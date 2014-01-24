//
//  CCBCheckBox.cpp
//  richman
//
//  Created by Higgx on 12/30/13.
//
//

#include "CCBCheckBox.h"
#include "SimpleAudioEngine.h"

bool CCBCheckBox::init(){
    if (CCControlButton::init()) {
        img_check = NULL;
        return true;
    }else{
        return false;
    }
}

bool CCBCheckBox::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
    
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
    
    if (img_check!=NULL) {
        img_check->setVisible(!img_check->isVisible());
    }
    
    if (strcmp(sound.c_str(), "")!=0) {
        CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(CCFileUtils::sharedFileUtils()->fullPathForFilename(sound.c_str()).c_str());
    }
    
    sendActionsForControlEvents(CCControlEventTouchDown);
    return true;
}
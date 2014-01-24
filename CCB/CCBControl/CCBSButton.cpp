//
//  CCBSButton.cpp
//  ccx
//
//  Created by Higgx on 12/26/13.
//
//

#include "CCBSButton.h"
#include "SimpleAudioEngine.h"

bool CCBSButton::init(){
    if (CCControlButton::init()) {
        sound = string("");
        return true;
    }else{
        return false;
    }
}

bool CCBSButton::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
    
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
    
    
    if (strcmp(sound.c_str(), "")!=0) {
        CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect(CCFileUtils::sharedFileUtils()->fullPathForFilename(sound.c_str()).c_str());
    }
    sendActionsForControlEvents(CCControlEventTouchDown);
    return true;
}


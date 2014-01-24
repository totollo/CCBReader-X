//
//  CCBTimeLineAction.cpp
//  ccx
//
//  Created by Higgx on 12/20/13.
//
//

#include "CCBTimeLineAction.h"
#include "cocos-ext.h"
#include "CCB.h"

USING_NS_CC;
USING_NS_CC_EXT;

CCBTimeLineAction* CCBTimeLineAction::create(float duration,const char* timeline)
{
    CCBTimeLineAction *action = new CCBTimeLineAction();
    action->initWithDuration(duration, timeline);
    action->autorelease();
    
    return action;
}

bool CCBTimeLineAction::initWithDuration(float duration,const char* timeline)
{
    if (CCActionInterval::initWithDuration(duration))
    {
        m_timeline = string(timeline);
        return true;
    }
    
    return false;
}

CCObject* CCBTimeLineAction::copyWithZone(CCZone *pZone)
{
    CCZone* pNewZone = NULL;
    CCBTimeLineAction* pCopy = NULL;
    if(pZone && pZone->m_pCopyObject)
    {
        //in case of being called at sub class
        pCopy = (CCBTimeLineAction*)(pZone->m_pCopyObject);
    }
    else
    {
        pCopy = new CCBTimeLineAction();
        pZone = pNewZone = new CCZone(pCopy);
    }
    
    CCActionInterval::copyWithZone(pZone);
    
    
    pCopy->initWithDuration(m_fDuration,m_timeline.c_str());
    
    CC_SAFE_DELETE(pNewZone);
    return pCopy;
}

void CCBTimeLineAction::startWithTarget(CCNode *pTarget)
{
    CCActionInterval::startWithTarget(pTarget);
    
}

void CCBTimeLineAction::update(float time)
{
    if (m_pTarget)
    {
        
    }
}
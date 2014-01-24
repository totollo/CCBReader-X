//
//  CUIBaseDelegate.h
//  ccx
//
//  Created by Higgx on 12/21/13.
//
//

#ifndef __ccx__CUIBaseDelegate__
#define __ccx__CUIBaseDelegate__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCB.h"
#include "CCBLoaderDelegate.h"
#include <string>

#include "CCBButton.h"
#include "CCBClippingNode.h"
#include "CCBEditBox.h"
#include "CCBSlider.h"
#include "CCLayoutBox.h"

using namespace std;
USING_NS_CC;
USING_NS_CC_EXT;

class CUIBaseDelegate
:public cocos2d::CCNode
,public cocos2d::extension::CCBSelectorResolver
,public cocos2d::extension::CCBMemberVariableAssigner
,public cocos2d::extension::CCNodeLoaderListener
,public cocos2d::extension::CCBAnimationManagerDelegate
{
public:
    
    CUIBaseDelegate():mAnimationManager(NULL){}
    
    cocos2d::extension::CCBAnimationManager *mAnimationManager;
    
//    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
//    virtual cocos2d::extension::SEL_CCControlHandler onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
//    virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);
//    virtual cocos2d::SEL_CallFuncN onResolveCCBCCCallFuncSelector(CCObject * pTarget, const char* pSelectorName);
//    
//    virtual bool onAssignCCBCustomProperty(CCObject* pTarget, const char* pMemberVariableName, cocos2d::extension::CCBValue* pCCBValue);
//    virtual void onNodeLoaded(cocos2d::CCNode * pNode, cocos2d::extension::CCNodeLoader * pNodeLoader);
//    virtual void completedAnimationSequenceNamed(const char *name);
    
    virtual void runAnimationsForSequenceNamed(const char *pName);
    virtual void runAnimationsForSequenceNamedTweenDuration(const char *pName, float fTweenDuration);
};


#endif /* defined(__ccx__CUIBaseDelegate__) */

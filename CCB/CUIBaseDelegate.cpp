//
//  CUIBaseDelegate.cpp
//  ccx
//
//  Created by Higgx on 12/21/13.
//
//

#include "CUIBaseDelegate.h"

void CUIBaseDelegate::runAnimationsForSequenceNamed(const char *pName){
    if (mAnimationManager==NULL) {
        mAnimationManager = (CCBAnimationManager*)this->getUserObject();
        mAnimationManager->setDelegate(this);
    }
    mAnimationManager->runAnimationsForSequenceNamed(pName);
    //printf("run animation : %s\n",pName);
}

void CUIBaseDelegate::runAnimationsForSequenceNamedTweenDuration(const char *pName, float fTweenDuration){
    if (mAnimationManager==NULL) {
        mAnimationManager = (CCBAnimationManager*)this->getUserObject();
        mAnimationManager->setDelegate(this);
    }
    mAnimationManager->runAnimationsForSequenceNamedTweenDuration(pName,fTweenDuration);
    //printf("run animation : %s\n",pName);
}
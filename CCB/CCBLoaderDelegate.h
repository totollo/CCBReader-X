//
//  CCBLoaderDelegate.h
//  ccx
//
//  Created by Higgx on 11/18/13.
//
//

#ifndef __ccx__CCBLoaderDelegate__
#define __ccx__CCBLoaderDelegate__

#include "cocos-ext.h"
#include "CCB.h"


class CCBLoaderDelegate
{
public:
    virtual void setAnimationManager(cocos2d::extension::CCBAnimationManager *pAnimationManager)=0;
};

#endif /* defined(__ccx__CCBLoaderDelegate__) */

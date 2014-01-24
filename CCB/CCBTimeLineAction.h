//
//  CCBTimeLineAction.h
//  ccx
//
//  Created by Higgx on 12/20/13.
//
//

#ifndef __ccx__CCBTimeLineAction__
#define __ccx__CCBTimeLineAction__

#include "cocos2d.h"
#include <vector>

using namespace std;
using namespace cocos2d;

class CC_DLL CCBTimeLineAction : public CCActionInterval
{
public:
    bool initWithDuration(float duration,const char* timeline);
    
    virtual CCObject* copyWithZone(CCZone* pZone);
    virtual void startWithTarget(CCNode *pTarget);
    virtual void update(float time);
    
public:
    static CCBTimeLineAction* create(float duration, const char* timeline);
    
protected:
    string m_timeline;
};

#endif /* defined(__ccx__CCBTimeLineAction__) */

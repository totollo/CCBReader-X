//
//  CCBSpriteBatchNode.h
//  ccx
//
//  Created by Higgx on 12/28/13.
//
//

#ifndef __ccx__CCBSpriteBatchNode__
#define __ccx__CCBSpriteBatchNode__

#include "cocos2d.h"
#include "CCB.h"

using namespace cocos2d;

class CCBSpriteBatchNode : public CCSpriteBatchNode
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(CCBSpriteBatchNode, create);
//    virtual bool init(void);
};

#endif /* defined(__ccx__CCBSpriteBatchNode__) */

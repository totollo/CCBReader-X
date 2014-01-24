//
//  CCBSButtonLoader.h
//  ccx
//
//  Created by Higgx on 12/26/13.
//
//

#ifndef __ccx__CCBSButtonLoader__
#define __ccx__CCBSButtonLoader__

#include "CCBSButton.h"
#include "CCControlButtonLoader.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBSButtonLoader : public CCControlButtonLoader
{
public:
    virtual ~CCBSButtonLoader() {};
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CCBSButtonLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCBSButton);
    
    virtual void onHandlePropTypeSound(CCNode * pNode, CCNode * pParent, const char* pPropertyName, const char * pText, CCBReader * pCCBReader);
};

#endif /* defined(__ccx__CCBSButtonLoader__) */

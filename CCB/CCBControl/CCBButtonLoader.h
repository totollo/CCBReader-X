//
//  CCBButtonLoader.h
//  ccx
//
//  Created by Higgx on 12/9/13.
//
//

#ifndef __ccx__CCBButtonLoader__
#define __ccx__CCBButtonLoader__

#include "CCBButton.h"

USING_NS_CC;
USING_NS_CC_EXT;

class CCBButtonLoader : public CCControlLoader {
public:
    virtual ~CCBButtonLoader() {};
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CCBButtonLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCBButton);
    
    virtual void onHandlePropTypeCCBFile(CCNode * pNode, CCNode * pParent, const char* pPropertyName, CCNode * pCCBFileNode, CCBReader * pCCBReader);
    virtual void onHandlePropTypeString(CCNode * pNode, CCNode * pParent, const char * pPropertyName, const char * pString, CCBReader * pCCBReader);
    virtual void onHandlePropTypeSize(CCNode * pNode, CCNode * pParent, const char* pPropertyName, CCSize pSize, CCBReader * pCCBReader);
    
};
#endif /* defined(__ccx__CCBButtonLoader__) */

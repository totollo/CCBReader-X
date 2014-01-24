//
//  CCBLoader.h
//  cpp
//
//  Created by Higgx on 11/4/13.
//
//


#ifndef __cpp__CCBLoader__
#define __cpp__CCBLoader__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCB.h"
#include "CCBReader.h"

#define add_ccb(cui) CCBLoader::registerCCNodeLoader(#cui,cui##Loader::loader());

class CCBLoader
{
public:
    static cocos2d::CCNode* nodeFromCCBFile(const char * pCCBFileName);
    static cocos2d::extension::CCNodeLoaderLibrary* getLib();
    static void registerCCNodeLoader(const char *pClassName, cocos2d::extension::CCNodeLoader *pCCNodeLoader);
    static void unregisterCCNodeLoader(const char *pClassName);
    static void cleanCache();
private:
};

#endif /* defined(__cpp__CCBLoader__) */

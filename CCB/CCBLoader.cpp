//
//  CCBLoader.cpp
//  cpp
//
//  Created by Higgx on 11/4/13.
//
//

#include "CCBLoader.h"
#include "CCBLoaderDelegate.h"
#include <map>

#include "CCBSliderLoader.h"
#include "CCBButtonLoader.h"
#include "CCBClippingNodeLoader.h"
#include "CCLayoutBoxLoader.h"
#include "CCBEditBoxLoader.h"
#include "CCBSButtonLoader.h"
#include "CCBSpriteBatchNodeLoader.h"
#include "CCBCheckBoxLoader.h"

USING_NS_CC;
USING_NS_CC_EXT;
using namespace std;

static CCNodeLoaderLibrary *_pLib = NULL;

CCNodeLoaderLibrary* CCBLoader::getLib(){
    if (!_pLib) {
        _pLib =CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
        _pLib->retain();
        
//        添加FW定义的LOADER
        add_ccb(CCBSlider);
        add_ccb(CCBButton);
        add_ccb(CCBClippingNode);
        add_ccb(CCLayoutBox);
        add_ccb(CCBEditBox);
        add_ccb(CCBSButton);
        add_ccb(CCBSpriteBatchNode);
        add_ccb(CCBCheckBox);
    }
    return _pLib;
}

CCNode* CCBLoader::nodeFromCCBFile(const char *pCCBFileName){
    CCBReader* reader = new CCBReader(CCBLoader::getLib());
    reader->jsControlled = false;
    assert(reader!=NULL);
    
    if (NULL == pCCBFileName || strlen(pCCBFileName) == 0)
    {
        return NULL;
    }
//    这里的CCBReader是修改版。增加啦CCB文件缓存。减少IO
    CCNode *node =  reader->readNodeGraphFromFile(pCCBFileName);
    
    reader->release();
    return node;
}

//清除CCBReader的缓存
void CCBLoader::cleanCache(){
    CCBReader::cleanCache();
}

void CCBLoader::registerCCNodeLoader(const char *pClassName, cocos2d::extension::CCNodeLoader *pCCNodeLoader){
    CCBLoader::getLib()->registerCCNodeLoader(pClassName, pCCNodeLoader);
}

void CCBLoader::unregisterCCNodeLoader(const char *pClassName){
    CCBLoader::getLib()->unregisterCCNodeLoader(pClassName);
}
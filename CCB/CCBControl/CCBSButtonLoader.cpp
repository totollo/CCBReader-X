//
//  CCBSButtonLoader.cpp
//  ccx
//
//  Created by Higgx on 12/26/13.
//
//

#include "CCBSButtonLoader.h"
#include <string>

using namespace std;

#define PROPERTY_SOUND "sound"

void CCBSButtonLoader::onHandlePropTypeSound(CCNode * pNode, CCNode * pParent, const char* pPropertyName, const char * pText, CCBReader * pCCBReader){
    if (strcmp(pPropertyName,PROPERTY_SOUND) == 0) {
        ((CCBSButton*)pNode)->sound = string(pText);
    }
}
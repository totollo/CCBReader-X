//
//  CCLayoutBoxLoader.cpp
//  ccx
//
//  Created by Higgx on 12/17/13.
//
//

#include "CCLayoutBoxLoader.h"


#define PROPERTY_D "direction"
#define PROPERTY_S "spacing"

void CCLayoutBoxLoader::onHandlePropTypeIntegerLabeled(CCNode * pNode, CCNode * pParent, const char* pPropertyName, int pIntegerLabeled, CCBReader * pCCBReader){
    if (strcmp(PROPERTY_D, pPropertyName) == 0) {
        ((CCLayoutBox*)pNode)->direction = (CCLayoutBoxDirection)pIntegerLabeled;
    }
}

void CCLayoutBoxLoader::onHandlePropTypeFloatScale(CCNode * pNode, CCNode * pParent, const char* pPropertyName, float pFloatScale, CCBReader * pCCBReader){
    if (strcmp(PROPERTY_S, pPropertyName) == 0) {
        ((CCLayoutBox*)pNode)->setSpacing(pFloatScale);
    }
}
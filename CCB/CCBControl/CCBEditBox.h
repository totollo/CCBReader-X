//
//  CCBEditBox.h
//  ccx
//
//  Created by Higgx on 12/23/13.
//
//

#ifndef __ccx__CCBEditBox__
#define __ccx__CCBEditBox__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCB.h"


USING_NS_CC;
USING_NS_CC_EXT;

using namespace std;

class CCBEditBox
: public CCNode
, public CCEditBoxDelegate
{
public:
    
    CCEditBox* box;
    CCScale9Sprite* _frame;
    int count;
    
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(CCBEditBox, create);
    virtual bool init(void);
    void check();
    
    void setSpriteFrame(CCSpriteFrame* frame);
    void setColor(ccColor3B color);
    void setOpacity(unsigned char op);
    void setPreferredSize(CCSize size);
    void setInsetLeft(float f);
    void setInsetTop(float f);
    void setInsetRight(float f);
    void setInsetBottom(float f);

    string text;
    string getText();
    void setText(string str);
    
    virtual void setDelegate(CCEditBoxDelegate* delegate);
    
    //开始进入编辑
    virtual void editBoxEditingDidBegin(cocos2d::extension::CCEditBox* editBox);
    //结束编辑
    virtual void editBoxEditingDidEnd(cocos2d::extension::CCEditBox* editBox);
    //编辑框文本改变
    virtual void editBoxTextChanged(cocos2d::extension::CCEditBox* editBox, const std::string& text);
    //当触发return后的回调函数
    virtual void editBoxReturn(cocos2d::extension::CCEditBox* editBox);
};



#endif /* defined(__ccx__CCBEditBox__) */

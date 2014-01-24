//
//  CCBEditBox.cpp
//  ccx
//
//  Created by Higgx on 12/23/13.
//
//

#include "CCBEditBox.h"


bool CCBEditBox::init(){
    _frame = CCScale9Sprite::create();
    _frame->retain();
    count = 0;
    return true;
}

void CCBEditBox::check(){
    count++;
    if (count==8) {
        box = CCEditBox::create(_frame->getPreferredSize(), _frame);
        box->setDelegate(this);
        box->setAnchorPoint(CCPointZero);
        this->addChild(box);
        _frame->release();
    }
}

void CCBEditBox::setSpriteFrame(CCSpriteFrame* frame){
    _frame->setSpriteFrame(frame);
    check();
}
void CCBEditBox::setColor(ccColor3B color){
    _frame->setColor(color);
    check();
}
void CCBEditBox::setOpacity(unsigned char op){
    _frame->setOpacity(op);
    check();
}
void CCBEditBox::setPreferredSize(CCSize size){
    _frame->setPreferredSize(size);
    check();
}
void CCBEditBox::setInsetLeft(float f){
    _frame->setInsetLeft(f);
    check();
}
void CCBEditBox::setInsetTop(float f){
    _frame->setInsetTop(f);
    check();
}
void CCBEditBox::setInsetRight(float f){
    _frame->setInsetRight(f);
    check();
}
void CCBEditBox::setInsetBottom(float f){
    _frame->setInsetBottom(f);
    check();
}


void CCBEditBox::setDelegate(cocos2d::extension::CCEditBoxDelegate *delegate){
    box->setDelegate(delegate);
}

void CCBEditBox::editBoxEditingDidBegin(cocos2d::extension::CCEditBox *editBox){
    
}

void CCBEditBox::editBoxEditingDidEnd(cocos2d::extension::CCEditBox *editBox)
{
    
    text = editBox->getText();
    CCLog("editbox : %s",text.c_str());
    
}

void CCBEditBox::editBoxTextChanged(cocos2d::extension::CCEditBox *editBox, const std::string &text){
    //    this->text = text;
}

void CCBEditBox::editBoxReturn(cocos2d::extension::CCEditBox *editBox){
    
}

string CCBEditBox::getText(){
    return text;
}

void CCBEditBox::setText(string str){
    box->setText(str.c_str());
    text = str;
}

//
//  GameAbout.cpp
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-26.
//
//

#include "GameAbout.h"
#include "GameMenu.h"

using namespace cocos2d;

CCScene *GameAbout::scene()
{
    CCScene *scene = CCScene::create();
    
    GameAbout *layer = GameAbout::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool GameAbout::init()
{
    if (!CCLayer::init())
    {
        return false;
    }
    
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    //初始化背景
    CCSprite *bg = CCSprite::create("bg.png");
    bg->setScale(0.5);
    bg->setPosition(ccp(size.width/2, size.height/2));
    this->addChild(bg,0,0);
    
    //初始化星球
    CCSprite *bgstar = CCSprite::create("moon.png");
    bgstar->setAnchorPoint(ccp(0.5,0));
    bgstar->setScale(0.5);
    bgstar->setPosition(ccp(size.width/3*1, 0));
    this->addChild(bgstar,1,1);
    
    //初始化关于框
    CCSprite *kuang = CCSprite::create("tb.png");
    kuang->setScale(0.5);
    kuang->setPosition(ccp(size.width/2,size.height/2));
    this->addChild(kuang,2,2);
    
    char inf[256];
    sprintf(inf,"name:meow war\n\nprogram:shuoquan man\n\nart design:peng xu\n\ncompany:hz books\n\n    powered by cocos2D-x");
    CCLabelTTF *myjineng = CCLabelTTF::create(inf, "Marker Felt", 40);
    myjineng->setAnchorPoint(ccp(0,1));
    myjineng->setColor(ccc3(200, 200, 200));
    myjineng->setPosition(ccp(50, 600));
    kuang->addChild(myjineng);
    
    //初始化关于标题
    CCSprite *abouttitle = CCSprite::create("about.png");
    abouttitle->setScale(0.5);
    abouttitle->setPosition(ccp(size.width/2, size.height - 20));
    this->addChild(abouttitle,3,3);
    
    //初始化返回按钮
    CCMenuItemImage *back = CCMenuItemImage::create("backA.png", "backB.png",this,menu_selector(GameAbout::menuBackCallback));
    back->setScale(0.5);
    back->setPosition(ccp(size.width - 20,size.height - 20));
    back->setEnabled(false);
    CCMenu *mainmenu = CCMenu::create(back,NULL);
    mainmenu->setPosition(ccp(0,0));
    this->addChild(mainmenu,3,4);
    
    return true;
}

void GameAbout::menuBackCallback(CCObject *pSender)
{
    CCDirector::sharedDirector()->replaceScene(GameMenu::scene());
}

void GameAbout::onEnter()
{
    CCLayer::onEnter();
    //菜单进入后，菜单项点击有效
    CCNode *mainmenu = this->getChildByTag(4);
    CCArray *temp = mainmenu->getChildren();
    ((CCMenuItemImage*) temp->objectAtIndex(0))->setEnabled(true);
}

void GameAbout::onExit()
{
    CCLayer::onExit();
}

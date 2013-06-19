//
//  GameHeroBullet.cpp
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-26.
//
//

#include "GameHeroBullet.h"


GameHeroBullet::GameHeroBullet(void)
{
    isvisable = false;
}

GameHeroBullet::~GameHeroBullet(void)
{
    
}

void GameHeroBullet::setIsVisable()
{
    //子弹移动，运行动作
    this->setVisible(true);
    isvisable = true;
    CCActionInterval *move = CCMoveTo::create((-this->getPosition().y + 550)/150,ccp(this->getPosition().x,550));
    CCCallFunc *funCall = CCCallFunc::create(this, callfunc_selector(GameHeroBullet::setIsNotVisable));
    this->runAction(CCSequence::create(move,funCall,NULL));
}

void GameHeroBullet::setIsNotVisable()
{
    this->setVisible(false);
    isvisable = false;
    this->stopAllActions();
}

bool GameHeroBullet::getIsvisable()
{
    return isvisable;
}

void GameHeroBullet::onEnter()
{
    CCNode::onEnter();
    //初始化主体
    this->setContentSize(CCSizeMake(21, 52));
    CCSprite *mainbody = CCSprite::create("YuGuZD.png");
    addChild(mainbody);
}

void GameHeroBullet::onExit()
{
    CCNode::onExit();
}




//
//  GameMain.h
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-26.
//
//

#ifndef __MaoMaoWar__GameMain__
#define __MaoMaoWar__GameMain__

#include <iostream>
#include "cocos2d.h"
#include "GameObjHero.h"
#include "GameObjEnemy.h"
#include "GameMark.h"

using namespace cocos2d;
class GameMain : public cocos2d::CCLayer
{
public:
    virtual bool init();
    
    static cocos2d::CCScene* scene();
    
    void menuBackCallback();
    
    /********精灵**************/
    static GameMain sGameMain;
    CCSprite *blood1;
    CCSprite *blood2;
    CCSprite *blood3;
    CCSprite *bg1;
    CCSprite *bg2;
    short blood;
    CCArray *bullets;
    CCArray *enemybullets;
    bool isreduce;
    bool isover;
    GameObjHero *hero;
    void setover();
    CCSprite *gameover;
    virtual void update(float time);
    CCArray *enemys;
    void releaseheroBullet(int x,int y);
    void releaseenemyBullet(int x,int y);
    //检测是否碰撞
    bool isCollion(CCPoint p1,CCPoint p2,int w1,int h1,int w2,int h2);
    void setherohurt();
    void resetreduce();
    GameMark *gamemark;
    CREATE_FUNC(GameMain);
    
};

#endif /* defined(__MaoMaoWar__GameMain__) */

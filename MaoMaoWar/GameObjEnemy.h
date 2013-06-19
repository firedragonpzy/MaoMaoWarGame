//
//  GameObjEnemy.h
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-26.
//
//

#ifndef __MaoMaoWar__GameObjEnemy__
#define __MaoMaoWar__GameObjEnemy__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameObjEnemy : public CCNode
{
public:
    CCSprite *boom;
    CCSprite *mainbody;
    GameObjEnemy(void);
    virtual ~GameObjEnemy(void);
    void releasebullet();
    virtual void onEnter();
    virtual void onExit();
    void movestart();
    void restart();
    void setdie();
    short type;
    bool islife;
    void setType(short var);
};

#endif /* defined(__MaoMaoWar__GameObjEnemy__) */

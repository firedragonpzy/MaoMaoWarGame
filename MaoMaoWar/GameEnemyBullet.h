//
//  GameEnemyBullet.h
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-27.
//
//

#ifndef __MaoMaoWar__GameEnemyBullet__
#define __MaoMaoWar__GameEnemyBullet__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameEnemyBullet : public CCNode
{
public:
    bool isvisable;
    GameEnemyBullet(void);
    virtual ~GameEnemyBullet(void);
    void setIsVisable();
    void setIsNotVisable();
    bool getIsvisable();
    virtual void onEnter();
    virtual void onExit();
};

#endif /* defined(__MaoMaoWar__GameEnemyBullet__) */

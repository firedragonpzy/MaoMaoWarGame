//
//  GameHeroBullet.h
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-26.
//
//

#ifndef __MaoMaoWar__GameHeroBullet__
#define __MaoMaoWar__GameHeroBullet__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

class GameHeroBullet : public CCNode
{
public:
    bool isvisable;
    GameHeroBullet(void);
    virtual ~GameHeroBullet(void);
    void setIsVisable();
    void setIsNotVisable();
    bool getIsvisable();
    virtual void onEnter();
    virtual void onExit();
};

#endif /* defined(__MaoMaoWar__GameHeroBullet__) */

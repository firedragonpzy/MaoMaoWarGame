//
//  GameMark.h
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-27.
//
//

#ifndef __MaoMaoWar__GameMark__
#define __MaoMaoWar__GameMark__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

class GameMark : public CCNode
{
public:
    GameMark(void);
    virtual ~GameMark(void);
    virtual void onEnter();
    virtual void onExit();
    CCArray *bits;
    int mark;
    void addnumber(int var);
    CCTexture2D *ui;
};

#endif /* defined(__MaoMaoWar__GameMark__) */

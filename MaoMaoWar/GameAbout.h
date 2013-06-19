//
//  GameAbout.h
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-26.
//
//

#ifndef __MaoMaoWar__GameAbout__
#define __MaoMaoWar__GameAbout__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;
class GameAbout : public cocos2d::CCLayer
{
public:
    virtual bool init();
    
    virtual void onEnter();
    
    virtual void onExit();
    
    static cocos2d::CCScene* scene();
    
    void menuBackCallback(CCObject *pSender);
    
    void menuEnter();
    
    CREATE_FUNC(GameAbout);
};

#endif /* defined(__MaoMaoWar__GameAbout__) */

//
//  GameMenu.h
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-25.
//
//

#ifndef __MaoMaoWar__GameMenu__
#define __MaoMaoWar__GameMenu__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameMenu: public cocos2d::CCLayer
{
public:
    bool issound;
    
    CCMenuItemImage *soundItem;
    
    virtual bool init();
    virtual void onEnter();
    virtual void onExit();
    
    static cocos2d::CCScene* scene();
    
    void menuEnter();
    void menuNewGameCallback(CCObject *pSender);
    void menuContinueCallback(CCObject *pSender);
    void menuAboutCallback(CCObject *pSender);
    void menuSoundCallback(CCObject *pSender);
    
    CREATE_FUNC(GameMenu);
};

#endif /* defined(__MaoMaoWar__GameMenu__) */

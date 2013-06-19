//
//  GameObjHero.h
//  MaoMaoWar
//
//  Created by panda zheng on 13-5-26.
//
//

#ifndef __MaoMaoWar__GameObjHero__
#define __MaoMaoWar__GameObjHero__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class GameObjHero : public CCNode , public CCTargetedTouchDelegate
{
public:
    CCSprite *lefthand;
    CCSprite *righthand;
    CCPoint offset;
    bool iscontrol;
    GameObjHero(void);
    virtual ~GameObjHero(void);
    void releasebullet();
    CCRect rect();
    virtual void onEnter();
    virtual void onExit();
    bool containsTouchLocation(CCTouch* touch);
    virtual bool ccTouchBegan(CCTouch* touch,CCEvent* event);
    virtual void ccTouchMoved(CCTouch* touch,CCEvent* event);
    virtual void ccTouchEnded(CCTouch* touch,CCEvent* event);
    
    virtual void touchDelegateRetain();
    virtual void touchDelegateRelease();
};

#endif /* defined(__MaoMaoWar__GameObjHero__) */

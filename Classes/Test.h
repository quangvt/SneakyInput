#ifndef Test_h
#define Test_h

#include "cocos2d.h"
#include "SneakyButton.h"
#include "SneakyButtonSkinnedBase.h"
#include "SneakyJoystickSkinnedBase.h"

USING_NS_CC;

class Test : public Layer
{
public:
    static Scene* createScene();
    
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(Test);
    
    SneakyJoystick *leftJoystick;
    SneakyButton *jumpBtn;
    SneakyButton *attackBtn;
    
//    void update(float dt);
    
};

#endif /* Test_h */

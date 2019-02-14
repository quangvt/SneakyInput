#include "Test.h"

USING_NS_CC;

Scene* Test::createScene()
{
    Scene* scene = new Scene();
    Test* layer = Test::create();
    scene->addChild(layer);
    return scene;
}

bool Test::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    // FOR JOYSTICK
    Rect joystickBaseDimensions;
    joystickBaseDimensions = Rect(0, 0, 160.0f, 160.0f);

    Point joystickBasePosition;
    joystickBasePosition = Vec2(visibleSize.width * 0.2f, visibleSize.height*0.2f);

    SneakyJoystickSkinnedBase *joystickBase = SneakyJoystickSkinnedBase::create();
    joystickBase->setPosition(joystickBasePosition);
    joystickBase->setBackgroundSprite(Sprite::create("res/joystick-back.png"));
    joystickBase->setThumbSprite(Sprite::create("res/joystick-stick.png"));

    SneakyJoystick *aJoystick = SneakyJoystick::create();
    aJoystick->initWithRect(joystickBaseDimensions);
    aJoystick->autorelease();
    joystickBase->setJoystick(aJoystick);
    joystickBase->setPosition(joystickBasePosition);

    leftJoystick = joystickBase->getJoystick();
    leftJoystick->retain();
    this->addChild(joystickBase);
    
    // FOR BUTTON (JUMP)
    Rect jumpButtonDimensions = Rect(0, 0, 128.0f, 128.0f);
    Point jumpButtonPosition = Vec2(visibleSize.width * 0.9f, visibleSize.height * 0.2f);
    
    SneakyButtonSkinnedBase *jumpButtonBase = SneakyButtonSkinnedBase::create();
    jumpButtonBase->setPosition(jumpButtonPosition);
    
    jumpButtonBase->setDefaultSprite(Sprite::create("res/iconfinder_Stop1NormalRed.png"));
    jumpButtonBase->setActivatedSprite(Sprite::create("res/iconfinder_Stop1Pressed.png"));
    jumpButtonBase->setDisabledSprite(Sprite::create("res/iconfinder_Stop1Disabled.png"));
    jumpButtonBase->setPressSprite(Sprite::create("res/iconfinder_Stop1PressedBlue.png"));

    SneakyButton *ajumpButton = SneakyButton::create();
    ajumpButton->initWithRect(jumpButtonDimensions);
    ajumpButton->autorelease();
    
    jumpButtonBase->setButton(ajumpButton);
    jumpButtonBase->setPosition(jumpButtonPosition);
    
    jumpBtn = jumpButtonBase->getButton();
    jumpBtn->retain();
    this->addChild(jumpButtonBase);
    
    // FOR BUTTON (ATTACK)
    Rect attackButtonDimensions = Rect(0, 0, 128.0f, 128.0f);
    Point attackButtonPosition = Vec2(visibleSize.width * 0.7f, visibleSize.height * 0.2f);
    
    SneakyButtonSkinnedBase *attackButtonBase = SneakyButtonSkinnedBase::create();
    attackButtonBase->setPosition(attackButtonPosition);
    
    attackButtonBase->setDefaultSprite(Sprite::create("res/iconfinder_12_30.png"));
    attackButtonBase->setActivatedSprite(Sprite::create("res/iconfinder_13_30.png"));
    attackButtonBase->setDisabledSprite(Sprite::create("res/iconfinder_14_30.png"));
    attackButtonBase->setPressSprite(Sprite::create("res/iconfinder_15_30.png"));

    SneakyButton *attackButton = SneakyButton::create();
    attackButton->initWithRect(attackButtonDimensions);
    attackButton->autorelease();
    
    attackButtonBase->setButton(attackButton);
    attackButtonBase->setPosition(attackButtonPosition);
    
    attackBtn = attackButtonBase->getButton();
    attackBtn->retain();
    this->addChild(attackButtonBase);
    
    return true;
}

//void Test::update(float dt){
//    
//}

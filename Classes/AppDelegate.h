#ifndef  _APP_DELEGATE_H_
#define  _APP_DELEGATE_H_

#include "cocos2d.h"

<<<<<<< HEAD

class  AppDelegate : private cocos2d::Application
=======
/**
@brief    The cocos2d Application.

The reason for implement as private inheritance is to hide some interface call by CCDirector.
*/
class  AppDelegate : private cocos2d::CCApplication
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
{
public:
    AppDelegate();
    virtual ~AppDelegate();

<<<<<<< HEAD
    virtual void initGLContextAttrs();//���� OpenGL����


    virtual bool applicationDidFinishLaunching();//�߼���ʼ��


    virtual void applicationDidEnterBackground();//�л�����̨


    virtual void applicationWillEnterForeground();//�л���ǰ̨
=======
    /**
    @brief    Implement CCDirector and CCScene init code here.
    @return true    Initialize success, app continue.
    @return false   Initialize failed, app terminate.
    */
    virtual bool applicationDidFinishLaunching();

    /**
    @brief  The function be called when the application enter background
    @param  the pointer of the application
    */
    virtual void applicationDidEnterBackground();

    /**
    @brief  The function be called when the application enter foreground
    @param  the pointer of the application
    */
    virtual void applicationWillEnterForeground();
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
};

#endif // _APP_DELEGATE_H_


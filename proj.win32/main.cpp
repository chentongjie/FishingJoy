#include "main.h"
#include "AppDelegate.h"
#include "CCEGLView.h"

USING_NS_CC;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance
    AppDelegate app;
    CCEGLView* eglView = CCEGLView::sharedOpenGLView();
    eglView->setViewName("FishingJoy");
<<<<<<< HEAD
    eglView->setFrameSize(2048, 1536);
	eglView->setFrameZoomFactor(0.6);
=======
    eglView->setFrameSize(2048,1536);
	//界面的放大系数
	eglView->setFrameZoomFactor(0.4f);
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
    return CCApplication::sharedApplication()->run();
}

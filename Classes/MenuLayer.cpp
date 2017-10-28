#include "MenuLayer.h"


<<<<<<< HEAD
MenuLayer::MenuLayer()
{
}


MenuLayer::~MenuLayer()
{
}
bool MenuLayer::init()
{
	if (!cocos2d::Layer::init())
=======
MenuLayer::MenuLayer(void)
{
}

bool MenuLayer::init()
{
	if (!CCLayer::init())
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
	{
		return false;
	}
	return true;
<<<<<<< HEAD
}
=======
}

MenuLayer::~MenuLayer(void)
{
}
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55

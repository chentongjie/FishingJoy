#include "BackgroundLayer.h"
<<<<<<< HEAD
USING_NS_CC;

BackgroundLayer::BackgroundLayer()
{
}


BackgroundLayer::~BackgroundLayer()
=======

BackgroundLayer::BackgroundLayer(void)
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
{
}

bool BackgroundLayer::init()
{
<<<<<<< HEAD
	if (!cocos2d::Layer::init())
	{
		return false;
	}
	/*获取窗口大小*/
	auto WindowsSize = Director::getInstance()->getVisibleSize();
	
	
	/*创建一个精灵背景图*/
	auto *bgSprite = Sprite::create("bj01_01-ipadhd.png");
	
	
	/*把精灵加到层的子节点*/
	this->addChild(bgSprite);
	
	
	/*设置背景图显示位置（精灵的位置在窗口的中心）*/
	bgSprite->setPosition(WindowsSize.width / 2, WindowsSize.height / 2);
	return true;
}
=======
	if (!CCLayer::init())
	{
		return false;
	}
	CCSprite *bgSprite = CCSprite::create(STATIC_DATA_STRING("game_background_01"));
	this->addChild(bgSprite);
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	bgSprite->setPosition(CCPoint(winSize.width / 2, winSize.height / 2));
	return true;
}

BackgroundLayer::~BackgroundLayer(void)
{
}
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55

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
	/*��ȡ���ڴ�С*/
	auto WindowsSize = Director::getInstance()->getVisibleSize();
	
	
	/*����һ�����鱳��ͼ*/
	auto *bgSprite = Sprite::create("bj01_01-ipadhd.png");
	
	
	/*�Ѿ���ӵ�����ӽڵ�*/
	this->addChild(bgSprite);
	
	
	/*���ñ���ͼ��ʾλ�ã������λ���ڴ��ڵ����ģ�*/
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

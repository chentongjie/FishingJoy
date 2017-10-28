#include "GameMenuLayer.h"

<<<<<<< HEAD

GameMenuLayer::GameMenuLayer()
{
}


GameMenuLayer::~GameMenuLayer()
{
=======
GameMenuLayer::GameMenuLayer(void)
{
}

CCScene* GameMenuLayer::scene(void)
{
	CCScene* scene = CCScene::create();
	GameMenuLayer* gameMenuLayer = GameMenuLayer::create();
	scene->addChild(gameMenuLayer);
	return scene;
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
}

bool GameMenuLayer::init()
{
<<<<<<< HEAD
	if (!cocos2d::Layer::init())
	{
		return false;
	}
	auto WindowsSize = Director::getInstance()->getVisibleSize();


	/*����һ�����鱳��ͼ*/
	auto *bgSprite = CCSprite::create("UI_GameStartMenuLayer-ipadhd.png");



	/*�Ѿ���ӵ�����ӽڵ�*/
	this->addChild(bgSprite);


	/*���ñ���ͼ��ʾλ�ã������λ���ڴ��ڵ����ģ�*/
	bgSprite->setPosition(WindowsSize.width / 2, WindowsSize.height / 2);
	return true;
}
void GameMenuLayer::createMenu()
{
	auto *spriteFrameCache = CCSpriteFrameCache::sharedSpriteFrameCache();
	spriteFrameCache->addSpriteFramesWithFile("UI_GameMenuText_cn-ipadhd.plist");
	spriteFrameCache->addSpriteFramesWithFile("UI_GameStartMenuLayer-ipadhd.plist");
	auto *startNormalBackgoundSprite = CCSprite::createWithSpriteFrameName("ui_background_normal-ipadhd.png");
	CCSprite *startSelectedTextSprite = CCSprite::createWithSpriteFrameName("UI_GameMenuText_cn-ipadhd.png");
	startNormalBackgoundSprite->addChild(startSelectedTextSprite);

	auto starSpriteSize = startNormalBackgoundSprite->getContentSize();
	startSelectedTextSprite->setPosition(ccp(starSpriteSize.width / 2, starSpriteSize.height / 2+20));

	CCSprite *starSelectedBackgroundSprite = CCSprite::createWithSpriteFrameName("bj01_01-ipadhd.png");
	CCSprite *starSelectedTextSprite = CCSprite::createWithSpriteFrameName("bj02_01-ipadhd.png");
	starSelectedBackgroundSprite->addChild(starSelectedTextSprite);

	starSelectedTextSprite->setPosition(ccp(starSpriteSize.width / 2, starSpriteSize.height / 2 + 20));
	CCMenuItemSprite*startMenuItem = CCMenuItemSprite::create(startNormalBackgoundSprite,starSelectedBackgroundSprite,this);
	CCMenu *menu = CCMenu::create(startMenuItem,NULL);
	this->addChild(menu);
	menu->setPosition(ccp(1024, 800));

}
CCScene *GameMenuLayer::scene()
{
	CCScene *scene = CCScene::create();
	GameMenuLayer *layer = GameMenuLayer::create();
	scene->addChild(layer);
	return scene;

}
void GameMenuLayer::onStertGame(CCObject *sender)
{

=======
	do 
	{
		if(!CCLayer::init())
		{
			return false;
		}
		CCSprite* bgSprite = CCSprite::create(STATIC_DATA_STRING("game_menu_background"));
		CC_BREAK_IF(!bgSprite);
		this->addChild(bgSprite);
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		bgSprite->setPosition(ccp(winSize.width / 2, winSize.height / 2));
		CCSprite* titleSprite = CCSprite::create(STATIC_DATA_STRING("game_menu_title"));
		CC_BREAK_IF(!titleSprite);
		this->addChild(titleSprite);
		titleSprite->setPosition(ccp(winSize.width/2, winSize.height * 0.75));
		this->createMenu();
		return true;
	} while (0);
	return false;
}

void GameMenuLayer::createMenu(void)
{
	CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile(STATIC_DATA_STRING("game_menu_ui"));
	CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile(STATIC_DATA_STRING("game_menu_text"));
	
	//"��ʼ��Ϸ"��ť����
	CCSprite* startNormalBgSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("game_menu_start_normal"));
	CCSprite* startNormalTextSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("game_menu_start_text"));

	CCSize startNormalBgSize = startNormalBgSprite->getContentSize();

	startNormalBgSprite->addChild(startNormalTextSprite);
	startNormalTextSprite->setPosition(ccp(startNormalBgSize.width / 2, startNormalBgSize.height / 2 + 20));
	
	//"��ʼ��Ϸ"��ťѡ��
	CCSprite* startSelectedBgSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("game_menu_start_selected"));
	CCSprite* startSelectedTextSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("game_menu_start_text"));

	startSelectedBgSprite->addChild(startSelectedTextSprite);
	startSelectedTextSprite->setPosition(ccp(startNormalBgSize.width / 2, startNormalBgSize.height / 2 + 20));

	CCMenuItemSprite* startMenuItem = CCMenuItemSprite::create(startNormalBgSprite, 
		startSelectedBgSprite, this, menu_selector(GameMenuLayer::menuCallbackStartGame));

	//"ѡ�񳡾�"��ť����
	CCSprite* sceneNormalBgSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("game_menu_scene_normal"));
	CCSprite* sceneNormalTextSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("game_menu_scene_text"));

	CCSize sceneNormalBgSize = sceneNormalBgSprite->getContentSize();

	sceneNormalBgSprite->addChild(sceneNormalTextSprite);
	sceneNormalTextSprite->setPosition(ccp(sceneNormalBgSize.width / 2, sceneNormalBgSize.height / 2 + 3));

	//"ѡ�񳡾�"��ťѡ��
	CCSprite* sceneSelectedBgSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("game_menu_scene_selected"));
	CCSprite* sceneSelectedTextSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("game_menu_scene_text"));

	sceneSelectedBgSprite->addChild(sceneSelectedTextSprite);
	sceneSelectedTextSprite->setPosition(ccp(sceneNormalBgSize.width / 2, sceneNormalBgSize.height / 2 + 3));

	CCMenuItemSprite* sceneMenuItem = CCMenuItemSprite::create(sceneNormalBgSprite, 
		sceneSelectedBgSprite, this, menu_selector(GameMenuLayer::menuCallbackStartGame));

	CCMenu* menu = CCMenu::create(startMenuItem, sceneMenuItem, NULL);
	this->addChild(menu);
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	menu->setPosition(ccp(winSize.width / 2, winSize.height * 0.4));
	menu->alignItemsVerticallyWithPadding(50);
}

void GameMenuLayer::menuCallbackSelectScene(CCObject* sender)
{

}

void GameMenuLayer::menuCallbackStartGame(CCObject* sender)
{

}

GameMenuLayer::~GameMenuLayer()
{
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
}
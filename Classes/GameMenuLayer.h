#pragma once
<<<<<<< HEAD
#include"cocos2d.h"
using namespace cocos2d;
/*ÓÎÏ·²Ëµ¥²ã*/
class GameMenuLayer :public cocos2d::Layer
{
public:
	GameMenuLayer();
	~GameMenuLayer();
	CREATE_FUNC(GameMenuLayer);
	virtual bool init(void);
	static cocos2d::CCScene* scene();
protected:
	void createMenu();
	void onStertGame(CCObject *sender);
	void onSelectScene(CCObject *sender);

=======
#include "cocos2d.h"
#include "StaticData.h"
USING_NS_CC;

class GameMenuLayer :
	public CCLayer
{
public:
	GameMenuLayer(void);
	CREATE_FUNC(GameMenuLayer);
	static CCScene* scene(void);
	void menuCallbackSelectScene(CCObject* sender);
	void menuCallbackStartGame(CCObject* sender);
	virtual bool init();
	virtual ~GameMenuLayer(void);
protected:
	void createMenu(void);
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
};


#pragma once
<<<<<<< HEAD
#include"cocos2d.h"
#include"BackgroundLayer.h"
#include"FishLayer.h"
#include"MenuLayer.h"
using namespace cocos2d;
/*��Ϸ������*/
class GameScene :public cocos2d::CCScene
=======
#include "cocos2d.h"
#include "BackgroundLayer.h"
#include "FishLayer.h"
#include "MenuLayer.h"
USING_NS_CC;

class GameScene :
	public CCScene
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
{
public:
	GameScene(void);
	CREATE_FUNC(GameScene)
<<<<<<< HEAD
	~GameScene();
	/*��ʼ����������ɸ�����Ĵ����ͼ���*/
	virtual bool init(void);
protected:
	/*���ݳ�Ա*/
	BackgroundLayer::Layer * backgroundLayer;/*������*/
	//CannonLayer *cannonLayer;/*��̨��*/
	FishLayer::Layer *fishLayer;/*���*/
	//PaneLayer *paneLayer;/*���ܲ�*/
	MenuLayer *menuLayer;/*�˵���*/
	

=======
	virtual bool init();
	virtual ~GameScene();
protected:
	BackgroundLayer* backgroundLayer;
	FishLayer* fishLayer;
	MenuLayer* menuLayer;
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
};


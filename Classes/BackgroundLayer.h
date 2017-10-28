#pragma once
<<<<<<< HEAD
#include"cocos2d.h"
/*±³¾°²ãÀà*/
class BackgroundLayer :public cocos2d::Layer
{
public:
	BackgroundLayer();
	~BackgroundLayer();
	bool init();
	
=======
#include "cocos2d.h"
#include "StaticData.h"
USING_NS_CC;

class BackgroundLayer :
	public CCLayer
{
public:
	BackgroundLayer(void);
	CREATE_FUNC(BackgroundLayer)
	virtual bool init();
	virtual ~BackgroundLayer(void);
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
};


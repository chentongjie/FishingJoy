#pragma once
<<<<<<< HEAD
#include"cocos2d.h"
/*²Ëµ¥²ã*/
class MenuLayer :public cocos2d::Layer
{
public:
	MenuLayer();
	~MenuLayer();
	bool init();
=======
#include "cocos2d.h"
USING_NS_CC;

class MenuLayer :
	public CCLayer
{
public:
	MenuLayer(void);
	CREATE_FUNC(MenuLayer)
	virtual bool init();
	virtual ~MenuLayer(void);
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
};


#pragma once
<<<<<<< HEAD
#include"cocos2d.h"
/*Óã²ã*/
class FishLayer :public cocos2d::Layer
{
public:
	FishLayer();
	~FishLayer();
	bool init();
};

=======
#include "cocos2d.h"
#include "StaticData.h"
USING_NS_CC;

class FishLayer :
	public CCLayer
{
public:
	FishLayer(void);
	CREATE_FUNC(FishLayer)
	virtual bool init();
	virtual ~FishLayer(void);
};
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55

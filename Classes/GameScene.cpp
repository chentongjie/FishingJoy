#include "GameScene.h"

<<<<<<< HEAD

=======
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55
GameScene::GameScene()
{
}

<<<<<<< HEAD

GameScene::~GameScene()
{
}
bool GameScene::init()
{
	/*do  {...}while(0)����û��ʵ�����壬���кܶ�ô���
	1���������帴�ӵĺ꣬��������ʱ���������ú�ʱֻ�ǵ�����{}���п��ܻ���벻����
	2������ʹ��goto�Գ���������ͳһ�Ŀ��ƣ���goto ��ǩ�������е�gotoʱ�������м�Ĳ���
		����ǩ����Ĳ�������������һЩ���򣻵�goto������������̽ṹ�������ã�do{..}while(0)
		ͨ��break����������ʵ�֡�
	3������պ������warning
		�ں������ڲ�ͬ�ܹ������ƣ��ܶ�ʱ����õ��պ꣬�ڱ����ʱ�򣬿պ�����warning��Ϊ�˱���
		������warning���Ϳ���ʹ��do{}while(0)������պ�
	4������һ�������ĺ�������ʵ�ָ��ӵĲ�����
		����Ĺ��ܸܺ��ӣ������ܶ����ֲ�Ը������һ��������ʱ��ʹ��do{}while(0);������Ĵ���
		д�����棬������Զ�����������ÿ��Ǳ�������ͬ����֮ǰ����֮����ظ���
	*/
	do
	{
		if (!Scene::init())
		{
			break;
		}
		/*����������*/
		backgroundLayer = BackgroundLayer::create();
		/*����Ƿ񴴽��ɹ�*/
		CC_BREAK_IF(!backgroundLayer);
		/*�������㵼�볡��*/
		this->addChild(backgroundLayer);
		/*�������*/
		fishLayer = FishLayer::create();
		/*�������Ƿ񴴽��ɹ�*/
		CC_BREAK_IF(!fishLayer);
		/*����㵼�볡��*/
		this->addChild(fishLayer);
		return true;

	}
	while (0);
	return false;
}
=======
bool GameScene::init()
{
	do
	{
		if (!CCScene::init())
		{
			break;
		}
		backgroundLayer = BackgroundLayer::create();
		CC_BREAK_IF(!backgroundLayer);
		this->addChild(backgroundLayer);
		fishLayer = FishLayer::create();
		CC_BREAK_IF(!fishLayer);
		this->addChild(fishLayer);
		menuLayer = MenuLayer::create();
		CC_BREAK_IF(!menuLayer);
		CC_SAFE_RETAIN(menuLayer);
		return true;
	} while (0);
	return false;
}

GameScene::~GameScene()
{
	CC_SAFE_RELEASE_NULL(menuLayer);
}
>>>>>>> 2d8d0953eea3456b4584dfc0425f37dbe1b17e55

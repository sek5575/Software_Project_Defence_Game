#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"
#include "Order.h"
#include "Monster.h"
#include "Unit.h"

class Game : public cocos2d::Layer
{
public:
	virtual bool init();
	static cocos2d::Scene* scene();

	CREATE_FUNC(Game);

private:
	void addmonster(float dt);	//���� �߰�
	void addmonster_death(cocos2d::Point pt);	//���Ͱ� ������ ���� �ִϸ��̼�
	void addunit(float dt);	//���� �߰�
	void addunit_mix(cocos2d::Point pt);	//�����Ͽ� ���� ����
	void addunit_sell(cocos2d::Point pt);	//�ȾƼ� ���� ����
	void addattack(Monster* monster);	//���� ���
	void unit_atk_monster(float dt);	//�������κ��� ���� ����
	void unit_atk_cooltime(float dt);	//������ ���� ���� ����
	void unit_atk_motion(Unit* unit);			//���� ���� ���

	void selfRemover(Node* sender);	//����
	void monsterRemover(Node* sender);	//���� ����
	void unitRemover(Node* sender);		//���� ����]

	float calDistance(cocos2d::Point from, cocos2d::Point to);	//�� �� ������ �Ÿ� ���

	std::vector<Monster*> arr_monster;	//���� �迭
	std::vector<Unit*> arr_unit;	//���� �迭

	int cur_level;	//���� �ܰ�
	int cur_leave;	//���� ���� ��
	int cur_monster;	//���� �������� ���� ���� ��
};

#endif
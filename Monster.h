#ifndef __DEFENCE_MONSTER_H__
#define __DEFENCE_MONSTER_H__

#include "cocos2d.h"
#include "Order.h"

class Monster
{
public:
	Monster();
	virtual ~Monster();

	void setEnergy(float max);
	void setBody(char* name);
	void setDefence(float def);
	float getEnergy();
	float getDefence();

	cocos2d::Sprite* getBody();
	float subEnergy(float damage);
	void release();

private:
	cocos2d::Sprite* body;	//�̹���

	float maxEnergy;		//�ִ� ü��
	float curEnergy;		//���� ü��
	float defence;			//����
};

#endif
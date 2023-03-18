#pragma once
#include "Player.h"
class Demons : public Player
{
public:
	friend class Parents;
	std::string name;
	int health;
	int damage;
	void urare();
	void prezentare();
	~Demons() {};
};
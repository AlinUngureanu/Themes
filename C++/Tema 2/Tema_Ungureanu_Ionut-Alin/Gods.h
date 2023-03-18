#pragma once
#include "Player.h"
class Gods : public Player
{
public:	
	std::string nume;
	int health;
	int dimage;
	void urare();
	void prezentare();
     ~Gods() {};
};
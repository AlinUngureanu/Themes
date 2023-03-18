#pragma once
#include <iostream>
#include "Messages.h"
#include "Account.h"
class Player : public Messages
{
public:
	std::string name;
	int age;
	int level;
	Account account;
	void urare();
	void prezentare();
	virtual ~Player() {};
};
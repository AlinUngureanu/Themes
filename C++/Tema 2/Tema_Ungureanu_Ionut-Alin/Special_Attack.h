#pragma once
#include "Gods.h"
class Special_Attack : public Gods
{
private:
	std::string name;
	std::string type;
	int damage;
public:
	Special_Attack(std::string nume, std::string tip, int n) : name{ nume }, type{ tip }, damage{ n } {};
	Special_Attack() : Special_Attack{ "Gol","Gol",0 } {};
	void set_name(std::string name);
	std::string get_name();
	void set_damage(int damage);
	int get_damage();
	void set_type(std::string type);
	std::string get_type();
	~Special_Attack() {};
};
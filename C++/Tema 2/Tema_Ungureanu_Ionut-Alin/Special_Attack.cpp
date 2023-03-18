#include "Special_Attack.h"

void Special_Attack::set_name(std::string name) {
	this->name = name;
}

std::string Special_Attack::get_name() {
	return name;
}

void Special_Attack::set_damage(int damage) {
	this->damage = damage;
}

int Special_Attack::get_damage() {
	return damage;
}

void Special_Attack::set_type(std::string type) {
	this->type = type;
}

std::string Special_Attack::get_type() {
	return type;
}
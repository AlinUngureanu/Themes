#pragma once
#include <iostream>
#include "Demons.h"
class Parents
{
private:
	std::string name_mother;
	std::string name_father;
public:
	Parents(std::string nume, std::string a, int b, int c) : name_mother{ nume }, name_father{ a }, nr_f{ b }, nr_s{ c } {};
	Parents() : Parents{ "Gol","Gol",0,0 } {};
	int nr_f;
	int nr_s;
	void afisare()
		{
			std::cout << "Mama:" << name_mother << std::endl;
			std::cout << "Tata:" << name_father << std::endl;
			std::cout << "Numar frati:" << nr_f << std::endl;
			std::cout << "Numar surori:" << nr_s << std::endl;
		}
	void set_name_mother(std::string name_mother);
	std::string get_name_mother();
	void set_name_father(std::string name_father);
	std::string get_name_father();
	~Parents() {};
};
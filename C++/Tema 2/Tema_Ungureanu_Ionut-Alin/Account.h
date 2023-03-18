#pragma once
#include <iostream>
class Account
{private:
	std::string username;
	std::string password;
	int code;
public:
	Account(std::string nume, std::string parola, int cod) ;
	Account() : Account{ "Gol","Gol",0 } {};
	void set_username(std::string username);
	std::string get_username();
	void set_password(std::string password);
	std::string get_password();
	void set_code(int code);
	int get_code();
	~Account() {};
};
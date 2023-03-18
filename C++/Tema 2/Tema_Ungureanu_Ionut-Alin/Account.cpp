#include "Account.h"

Account::Account(std::string nume, std::string parola, int cod)
{
	username = nume;
	password = parola;
	code = cod;
}



void Account::set_username(std::string username) {
	this->username = username;
}

std::string Account::get_username() {
	return username;
}

void Account::set_password(std::string password) {
	this->password = password;
}

std::string Account::get_password() {
	return password;
}

void Account::set_code(int code) {
	this->code = code;
}

int Account::get_code() {
	return code;
}
#include <string>
#include <iostream>
#include <vector>

using namespace std;

#if !defined(_USER_H)
#define _USER_H


class User {
public:
	string getUsername();
	bool validPassword(string pass);
	User(string username, string password, bool isLogged);
private:
	string username;
	string password;
	bool isLogged;
};

#endif  //_USER_H

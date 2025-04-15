#if !defined(_SYSTEM_H)
#define _SYSTEM_H

#include <string>
#include <iostream>
#include <vector>
#include "User.h"

using namespace std;

class System {
public:
	bool registerUser(string username, string password);
	User* login(string username, string password);
	User* findUser(string username);
	void printUsers();
private:
	vector<User*> users;
};

#endif  //_SYSTEM_H

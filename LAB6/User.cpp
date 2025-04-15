#include "User.h"

string User::getUsername() {
    return username;
}

bool User::validPassword(string pass) {
    return password == pass;
}

User::User(string username, string password, bool isLogged) {

    this->username = username;
    this->password = password;
    this->isLogged = isLogged;
}


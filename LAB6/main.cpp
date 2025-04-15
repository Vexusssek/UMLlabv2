#include <iostream>
#include <string>
#include <vector>
#include "System.h"
#include "User.h"

using namespace std;


int main()
{

    System system;
    system.registerUser("user1", "password1");
    system.printUsers();
    system.registerUser("user1", "password1");

    system.login("user1", "password1");

    system.registerUser("user2", "password2");

    system.printUsers();


    return 0;
}
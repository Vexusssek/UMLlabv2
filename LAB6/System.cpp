#include "System.h"

bool System::registerUser(string username, string password) {

    if(findUser(username)) {
        std::cout << "Uzytkownik o tej nazwie juz istnieje." << std::endl;
        return false;
    }
    users.push_back(new User(username, password, false));
    std::cout << "Zarejestrowano uzytkownika: " << username << std::endl;
    return true;
}

User* System::login(string username, string password) {
    User* user = findUser(username);
    if(user && user->validPassword(password)) {
        std::cout << "Zalogowano jako: " << user->getUsername() << std::endl;
        return user;
    }

    std::cout << "Niepoprawne dane logowania." << std::endl;

    return nullptr;
}

User* System::findUser(string username) {

    for (User* user : users) {
        if (user->getUsername() == username) {
            return user;
        }
    }
    return nullptr;

}

void System::printUsers() {
std:: cout << "Zarejestrowani uzytkownicy:" << std::endl;
    for (User* user : users) {
        std::cout << user->getUsername() << std::endl;
    }
    std::cout << "Liczba uzytkownikow: " << users.size() << std::endl;
}

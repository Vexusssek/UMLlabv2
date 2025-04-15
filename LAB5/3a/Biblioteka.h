#if !defined(_BIBLIOTEKA_H)
#define _BIBLIOTEKA_H
#include <iostream>
#include <string>
using namespace std;


class Biblioteka {
public:
	Biblioteka(string nazwa, string adres);
private:
	string nazwa;
	string adres;
};

#endif  //_BIBLIOTEKA_H

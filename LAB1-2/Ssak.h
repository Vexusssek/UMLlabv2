#if !defined(_SSAK_H)
#define _SSAK_H

#include <iostream>
#include <string>

using namespace std;

class Ssak {
public:
	void wyswietlInfo();
	Ssak(string imie, int wiek);
private:
	string imie;
	int wiek;
};

#endif  //_SSAK_H

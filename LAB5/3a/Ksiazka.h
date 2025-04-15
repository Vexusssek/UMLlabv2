#if !defined(_KSIAZKA_H)
#define _KSIAZKA_H

#include "Zasob.h"
#include <string>
#include <iostream>
using namespace std;

class Ksiazka : public Zasob {
public:
	Ksiazka(string tytul, string autor, int rokWydania, string ISBN);
	void wyswietlInfo();
private:
	string tytul;
	string autor;
	int rokWydania;
	string ISBN;
};

#endif  //_KSIAZKA_H

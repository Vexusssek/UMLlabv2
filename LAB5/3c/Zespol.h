#include <string>
#include <vector>
#include "czlonekZespolu.h"
#include <iostream>

using namespace std;

#if !defined(_ZESPOL_H)
#define _ZESPOL_H


class Zespol {
public:
	Zespol(string nazwa);
	~Zespol();
	void printInfo(int i);
	void dodajDane(int i, string imie, int wiek);
	void dodajCzlonka(czlonekZespolu* czlonek);
private:
	string nazwa;
	vector<czlonekZespolu*> czlonkowie;
};

#endif  //_ZESPOL_H

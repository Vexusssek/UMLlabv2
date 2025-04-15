#include <iostream>
#include <string>
#include <vector>
#include "Produkt.h"
#include "pozycjaListyZakupow.h"


using namespace std;

#if !defined(_LISTAZAKUPOW_H)
#define _LISTAZAKUPOW_H


class listaZakupow {
public:
	listaZakupow(string nazwaListy);
	~listaZakupow();
	void printInfo(int i);
	void dodajDane(int i, Produkt* produkt, int ilosc);
	void dodajPozycje(pozycjaListyZakupow* pozycja);
private:
	string nazwaListy;
	vector<pozycjaListyZakupow*> pozycje;
};

#endif  //_LISTAZAKUPOW_H
#include "Produkt.h"
#include <iostream>
#include <string>

using namespace std;


#if !defined(_POZYCJALISTYZAKUPOW_H)
#define _POZYCJALISTYZAKUPOW_H


class pozycjaListyZakupow {
public:
	Produkt* produkt;
	int getIlosc();
	void setIlosc(int ilosc);
	void setProdukt(Produkt* produkt);
	Produkt* getProdukt();
private:
	int ilosc;
};

#endif  //_POZYCJALISTYZAKUPOW_H

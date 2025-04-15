#include <iostream>
#include <string>
#include "Instrument.h"

#if !defined(_CZLONEKZESPOLU_H)
#define _CZLONEKZESPOLU_H


class czlonekZespolu {
public:
	void setImie(string imie);
	string getImie();
	void setWiek(int wiek);
	int getWiek();
	czlonekZespolu();
	~czlonekZespolu();
	void setInstrument(Instrument* instrument);
	Instrument* getInstrument();
private:
	string imie;
	int wiek;
	Instrument* instrument;
};

#endif  //_CZLONEKZESPOLU_H

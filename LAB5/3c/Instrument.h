#include <iostream>
#include <string>

#if !defined(_INSTRUMENT_H)
#define _INSTRUMENT_H

using namespace std;

class Instrument {
public:
	void setNazwa(string nazwaInstrumentu);
	string getNazwa();
private:
	string nazwaInstrumentu;
};

#endif  //_INSTRUMENT_H

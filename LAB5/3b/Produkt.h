#include <iostream>
#include <string>

using namespace std;

#if !defined(_PRODUKT_H)
#define _PRODUKT_H


class Produkt {
public:
	void setNazwa(string nazwa);
	void setId(int id);
	void setProducent(string producent);
	string getNazwa();
	int getId();
	string getProducent();
private:
	string nazwa;
	int id;
	string producent;
};

#endif  //_PRODUKT_H

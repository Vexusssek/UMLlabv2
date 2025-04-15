#if !defined(_PIES_H)
#define _PIES_H

#include "Ssak.h"
#include <iostream>
#include <string>
using namespace std;

class Pies : public Ssak {
public:
	void zaszczekaj();
	Pies(string rasa);
private:
	string rasa;
};

#endif  //_PIES_H

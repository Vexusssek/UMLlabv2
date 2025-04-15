#include "Potega.h"
#include "symbolNewtona.h"
#include <iostream>

using namespace std;

#if !defined(_PRAWDOPODOBIENSTWO_H)
#define _PRAWDOPODOBIENSTWO_H


class Prawdopodobienstwo {
public:
	double obliczPrawodpodobienstwo(int n, int k, double p);
private:
	int n;
	int k;
	double p;
	Potega* potega;
	symbolNewtona* newton;
};

#endif  //_PRAWDOPODOBIENSTWO_H

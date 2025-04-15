#include "Prawdopodobienstwo.h"

double Prawdopodobienstwo::obliczPrawodpodobienstwo(int n, int k, double p) {

    this->n = n;
    this->k = k;
    this->p = p;
    potega = new Potega();
    newton = new symbolNewtona();
    double result = newton->obliczSymbonNewtona(n, k) * potega->obliczPotege(p, k) * potega->obliczPotege(1 - p, n - k);
    delete potega;
    delete newton;
    return result;

}


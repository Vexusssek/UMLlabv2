#include "Potega.h"

double Potega::obliczPotege(double podstawa, int wykladnik) {
    
    double wynik = 1.0;
    for (int i = 0; i < wykladnik; ++i) {
        wynik *= podstawa;
    }
    return wynik;

}


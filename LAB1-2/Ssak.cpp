#include "Ssak.h"

void Ssak::wyswietlInfo() {

    cout << "Imie: " << imie << ", Wiek: " << wiek << endl; 
}

Ssak::Ssak(string imie, int wiek) {

    this->imie = imie;
    this->wiek = wiek;
}


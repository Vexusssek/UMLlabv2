#include "Zespol.h"

Zespol::Zespol(string nazwa) {
    this->nazwa = nazwa;
}

Zespol::~Zespol() {

    for (czlonekZespolu* czlonek : czlonkowie) {
        delete czlonek;
    }
    czlonkowie.clear();

}

void Zespol::printInfo(int i) {
    cout << "Zespół: " << nazwa << endl;
    cout << czlonkowie[i]->getImie() << " " << czlonkowie[i]->getWiek() << endl;
    
    Instrument* instr = czlonkowie[i]->getInstrument();
    if (instr != nullptr) {
        cout << "Instrument: " << instr->getNazwa() << endl;
    } else {
        cout << "Instrument: brak" << endl;
    }
    cout << endl;
}

void Zespol::dodajDane(int i, string imie, int wiek) {
    czlonkowie[i]->setImie(imie);
    czlonkowie[i]->setWiek(wiek);
}

void Zespol::dodajCzlonka(czlonekZespolu* czlonek) {
    czlonkowie.push_back(czlonek);
}


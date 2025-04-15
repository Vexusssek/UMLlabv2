#include "czlonekZespolu.h"

void czlonekZespolu::setImie(string imie) {
    this->imie = imie;

}

string czlonekZespolu::getImie() {
    return imie;   
}

void czlonekZespolu::setWiek(int wiek) {

    this->wiek = wiek;
}

int czlonekZespolu::getWiek() {
    return wiek;
}

czlonekZespolu::czlonekZespolu() {
    this->imie = "brak";
    this->wiek = 0;
    this->instrument = nullptr;
}

czlonekZespolu::~czlonekZespolu() {
    delete instrument;
}

void czlonekZespolu::setInstrument(Instrument* instrument) {
    this->instrument = instrument;
}
Instrument* czlonekZespolu::getInstrument() {
    return instrument;
}


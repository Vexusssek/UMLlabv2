#include "Produkt.h"

void Produkt::setNazwa(string nazwa) {
    this->nazwa = nazwa;
}

void Produkt::setId(int id) {
    this->id = id;
}

void Produkt::setProducent(string producent) {
    this->producent = producent;
}

string Produkt::getNazwa() {

    return this->nazwa;
}

int Produkt::getId() {
    return this->id;
}

string Produkt::getProducent() {
    return this->producent;
}


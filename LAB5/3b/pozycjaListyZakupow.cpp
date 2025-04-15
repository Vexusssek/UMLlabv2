#include "pozycjaListyZakupow.h"

int pozycjaListyZakupow::getIlosc() {
    return this->ilosc;
}

void pozycjaListyZakupow::setIlosc(int ilosc) {
    this->ilosc = ilosc;
}

void pozycjaListyZakupow::setProdukt(Produkt* produkt) {
    this->produkt = produkt;
}

Produkt* pozycjaListyZakupow::getProdukt() {

    return this->produkt;
}


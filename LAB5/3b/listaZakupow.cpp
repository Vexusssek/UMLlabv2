
#include "listaZakupow.h"

listaZakupow::listaZakupow(string nazwaListy) {
    
    this->nazwaListy = nazwaListy;
}

listaZakupow::~listaZakupow() {
    for (int i = 0; i < this->pozycje.size(); i++) {
        delete this->pozycje[i];
    }
    this->pozycje.clear();
}

void listaZakupow::printInfo(int i) {

    cout << "Lista zakupow: " << this->nazwaListy << endl;
    cout << "Pozycja nr " << i + 1 << endl;
    cout << "Nazwa: " << this->pozycje[i]->getProdukt()->getNazwa() << endl;
    cout << "Producent: " << this->pozycje[i]->getProdukt()->getProducent() << endl;
    cout << "Ilosc: " << this->pozycje[i]->getIlosc() << endl;
    cout << "ID: " << this->pozycje[i]->getProdukt()->getId() << endl;
    cout << "-------------------------" << endl;
    cout << endl;
}

void listaZakupow::dodajDane(int i, Produkt* produkt, int ilosc) {
    pozycjaListyZakupow* pozycja = new pozycjaListyZakupow();
    pozycja->setProdukt(produkt);
    pozycja->setIlosc(ilosc);
}

void listaZakupow::dodajPozycje(pozycjaListyZakupow* pozycja) {
    this->pozycje.push_back(pozycja);
    cout << "Dodano pozycję do listy zakupów." << endl;
}


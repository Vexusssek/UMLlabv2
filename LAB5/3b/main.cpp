#include <iostream>
#include <vector>
#include <string>
#include "listaZakupow.h"
#include "pozycjaListyZakupow.h"
#include "Produkt.h"


using namespace std;


int main()
{
   
    listaZakupow lista("Moja lista zakupów");
    Produkt* produkt = new Produkt;
    produkt->setNazwa("Mleko");
    produkt->setId(1);
    produkt->setProducent("Mlekovita");
    pozycjaListyZakupow* pozycja = new pozycjaListyZakupow();
    pozycja->setProdukt(produkt);
    pozycja->setIlosc(2);
    lista.dodajPozycje(pozycja);
    lista.dodajDane(0, produkt, 2);
    lista.printInfo(0);

    return 0;
}
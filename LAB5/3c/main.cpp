#include <iostream>
#include <string>
#include <vector>
#include "Zespol.h"
#include "czlonekZespolu.h"
#include "Instrument.h"

using namespace std;


int main()
{

    Zespol* zespol = new Zespol("Zespół Muzyczny");

    czlonekZespolu* czlonek1 = new czlonekZespolu();

    zespol->dodajCzlonka(czlonek1);
    zespol->dodajDane(0, "Jan", 25);

    zespol->printInfo(0);

    czlonekZespolu* czlonek2 = new czlonekZespolu();
    zespol->dodajCzlonka(czlonek2);
    
    zespol->dodajDane(1, "Anna", 30);
    zespol->printInfo(1);

    Instrument* gitara = new Instrument();
    gitara->setNazwa("Gitara");
    czlonek1->setInstrument(gitara);

    zespol->printInfo(0);


    delete zespol;

    return 0;
}
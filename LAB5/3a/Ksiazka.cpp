#include "Ksiazka.h"

Ksiazka::Ksiazka(string tytul, string autor, int rokWydania, string ISBN) : Zasob(0) {

    this->tytul = tytul;
    this->autor = autor;
    this->rokWydania = rokWydania;
    this->ISBN = ISBN;
}

void Ksiazka::wyswietlInfo() {

    cout << "Tytul: " << tytul << endl;
    cout << "Autor: " << autor << endl;
    cout << "Rok Wydania: " << rokWydania << endl;
    cout << "ISBN: " << ISBN << endl;
}


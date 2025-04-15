#include "Zasob.h"
#include "Biblioteka.h"
#include "Ksiazka.h"

int main()
{
    Biblioteka biblioteka1("Biblioteka Miejska", "ul. Mickiewicza 20");
    Ksiazka ksiazka1("C++ Programming", "Stroustrup", 2018, "978-0134997834");
    ksiazka1.wyswietlInfo();





    return 0;
}
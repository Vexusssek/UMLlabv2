#include "Silnia.h"

int Silnia::obliczSilnie(int n) {

    if (n <= 1) {
        return 1;
    }
    return n * obliczSilnie(n - 1);
}


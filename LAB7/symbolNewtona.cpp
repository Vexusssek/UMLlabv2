#include "symbolNewtona.h"

int symbolNewtona::obliczSymbonNewtona(int n, int k) {
    if (k < 0 || k > n) return 0;
    if (k > n - k) k = n - k;
    
    double wynik = 1;
    for (int i = 0; i < k; i++) {
        wynik = wynik * (n - i) / (i + 1);
    }
    return (int)(wynik + 0.5);
}
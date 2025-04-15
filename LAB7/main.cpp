#include <iostream>
#include "Potega.h"
#include "Prawdopodobienstwo.h"
#include "Silnia.h"
#include "symbolNewtona.h"

using namespace std;


int main() {

    int n, k;
    double p;
    
    cout << "Podaj n: ";
    cin >> n;
    cout << "Podaj k: ";
    cin >> k;
    cout << "Podaj p: ";
    cin >> p;

    Prawdopodobienstwo prawdopodobienstwo;
    cout << "Prawdopodobienstwo sukcesu: " << prawdopodobienstwo.obliczPrawodpodobienstwo(n, k, p) << endl;

    return 0;
}
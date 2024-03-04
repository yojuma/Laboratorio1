#include <iostream>

using namespace std;

int longitud_serie_collatz(long long semilla) {
    int longitud = 1;
    while (semilla != 1) {
        cout << semilla << ", ";
        if (semilla % 2 == 0) {
            semilla /= 2;
        } else {
            semilla = 3 * semilla + 1;
        }
        longitud++;
    }
    cout << "1" << endl;
    return longitud;
}

void encontrar_semilla_mas_larga(int k) {
    long long semilla_mas_larga = 0;
    int longitud_mas_larga = 0;

    for (long long semilla = 2; semilla < k; semilla++) {
        int longitud = longitud_serie_collatz(semilla);
        if (longitud > longitud_mas_larga) {
            longitud_mas_larga = longitud;
            semilla_mas_larga = semilla;
        }
    }

    cout << "La serie más larga es con la semilla: " << semilla_mas_larga << ", teniendo " << longitud_mas_larga << " terminos." << endl;
}

int main16() {
    int k;
    cout << "Ingrese el valor de k: ";
    cin >> k;

    encontrar_semilla_mas_larga(k);

    return 0;
}

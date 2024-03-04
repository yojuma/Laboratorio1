#include <iostream>
using namespace std;

int contar_divisores(int numero) {
    int conteo = 0;
    for (int i = 1; i * i <= numero; i++) {
        if (numero % i == 0) {
            if (i * i == numero) {
                conteo++;
            } else {
                conteo += 2;
            }
        }
    }
    return conteo;
}


int encontrar_numero_triangular(int k) {
    int n = 1;
    while (true) {
        int numero_triangular = n * (n + 1) / 2;
        int cantidad_divisores = contar_divisores(numero_triangular);
        if (cantidad_divisores > k) {
            return numero_triangular;
        }
        n++;
    }
}

int main17() {
    int k;
    cout << "Ingrese el valor de k: ";
    cin >> k;

    int numero_triangular = encontrar_numero_triangular(k);
    cout << "El numero es: " << numero_triangular << " que tiene " << k + 1 << " divisores" << endl;

    return 0;
}


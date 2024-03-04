#include<iostream>
using namespace std;


int MCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a, int b) {
    return (a * b) / MCD(a, b);
}

int minimo_del_rango(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = mcm(result, i);
    }
    return result;
}

int main11() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int resultado = minimo_del_rango(numero);
    cout << "El minimo comun multiplo de todos los numeros enteros entre 1 y " << numero << " es: " << resultado << std::endl;

    return 0;
}

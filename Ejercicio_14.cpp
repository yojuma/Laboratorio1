#include <iostream>
#include <algorithm> // Para std::reverse

using namespace std;


bool esPalindromo(int numero) {
    string original = to_string(numero);
    string invertido = original;
    reverse(invertido.begin(), invertido.end()); // Invertimos el string
    return original == invertido; // Comparamos el original con el invertido
}

int main14() {
    int maxPalindromo = 0; // Para almacenar el máximo palíndromo encontrado
    int factorA = 0, factorB = 0; // Para almacenar los factores del palíndromo

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > maxPalindromo) {
                maxPalindromo = producto;
                factorA = i;
                factorB = j;
            }
        }
    }

    cout << factorA << "*" << factorB << "=" << maxPalindromo << endl;

    return 0;
}

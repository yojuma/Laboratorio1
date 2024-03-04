#include<iostream>
#include<cmath>
using namespace std;

int main9(){
    int numero;
    int suma_numeros=0;
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    cout<<endl;

    while (numero != 0) {
        int digito = numero % 10;
        int numero_elevado=pow(digito,digito);
        suma_numeros+=numero_elevado;
        numero /= 10;
    }
    cout<<"EL resultado de la suma es: "<<suma_numeros<< endl;


    return 0;
}

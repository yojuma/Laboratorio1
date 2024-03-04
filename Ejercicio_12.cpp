#include<iostream>
using namespace std;

int main12(){
    int numero;
    int contador=0;
    int x,z,i,k;
    int mayor_factor;
    unsigned int tabla[100];
    i=0;

    cout<<"ingrese un numero entero: ";
    cin>>numero;

    for(x=1;x<=100;x++){   //x genera numeros del 1 al 100
        contador=0;
        for(z=1;z<=x;z++){ //generando numeros con z hasta el valor de x para dividir los dos numeros en modulo
            if(x%z==0){
                contador++;
            }
        }
        if(contador==2){
            tabla[i]=x;
            i++;
        }
    }

    for(k=1;k<numero;k++){
        if(numero%tabla[k]<numero){
            if(numero%tabla[k]==0){
                mayor_factor=tabla[k];
            }
        }
        else{
            cout<<"El mayor factor primo de "<<numero<<" es: "<<mayor_factor<<endl;
            break;
        }
    }
    return 0;
}

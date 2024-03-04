#include<iostream>
using namespace std;

int main13(){
    int numero;
    int contador=0;
    int x,z,i,k;
    int suma_primos=0;
    unsigned int tabla[100];
    i=0;

    cout<<"Ingrese un numero: ";
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
    for(k=0;k<numero;k++){
        if(tabla[k]<numero){
            suma_primos+=int(tabla[k]);
        }
        else{
            cout<<"La suma de los numeros primos menores que "<<numero<<" es: "<<suma_primos<<endl;
            break;
        }
    }


    return 0;
}

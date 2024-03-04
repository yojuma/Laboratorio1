#include<iostream>

using namespace std;

int main7(){
    int numero;
    int f0=0;
    int f1=1;
    unsigned int suma;

    cout<<"Ingrese un numero par y positivo: ";
    cin>>numero;

    cout<<endl;

    for(int i=1;i<numero;i++){

        unsigned int fn=f0+f1;
        f0=f1;
        f1=fn;
        if(fn%2==0 & fn<=numero){
            cout<<fn<<",";
            suma+=fn;
        }
    }

    cout<<"La suma de los numeros es: "<<suma<< endl;

    return 0;
}

#include<iostream>

using namespace std;

int main5(){
    int tamano;

    cout<<"Ingrese un numero entero impar: "<< endl;
    cin>> tamano;

    if(tamano%2==0){
        cout<<"Eso no es un numero impar"<< endl;
    }


    for(int i=1;i<=tamano;i+=2){
        cout<<string((tamano-i)/2,' ')<<string(i,'*')<< endl;
    }

    for(int i=tamano-2;i>=1;i-=2)
        cout<<string((tamano-i)/2,' ')<<string(i,'*')<< endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int c=20;
    int capacidad_maxima = c;
    int array[capacidad_maxima];
    int cantidad_elementos = 0;
    int array2[capacidad_maxima];
    int cantidad_elementos2 = 0;
    int a=3,b=5;


    for (int i=0;i<capacidad_maxima;i++){
        array[i] = i*a;
    }
    for (int i=i+1;i<capacidad_maxima;i++){
        array[i] = i*b;
    }

    for(int i=0; i<capacidad_maxima; i++){
        if(array[i]<c){
            cout<<"posicion "<<i<<": "<<array[i]<< endl;
    }
    }

    return 0;
}

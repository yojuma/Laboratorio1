#include <iostream>
using namespace std;

int main6(){

    unsigned int numero;
    float contador_euler=1;
    float i;
    float denominador=1;

    cout<<"Ingresa un numero: ";
    cin>>numero;

    for(float i=1;i<numero;i++){
        denominador*=i;
        contador_euler+=(1/denominador);
    }
    cout<<"e es aproximadamente: "<<float(contador_euler)<< endl;
    return 0;
}

#include<iostream>
#include <ctype.h>

using namespace std;

int main(){
    int dia;
    char mes;
    cout<<"Ingrese el numero del dia: "<< endl;
    cin>>dia;

    cout<<"Ingrese el mes: "<< endl;
    cin>>mes;

    if(isalpha(mes)){
        cout<<"yes"<< endl;
    }
    else{
        cout<<"eso no es un mes"<< endl;
    }
}

#include<iostream>
#include <ctype.h>

using namespace std;

int main(){
    int dia,mes;

    cout<<"Ingrese el numero del dia: "<< endl;
    cin>>dia;

    cout<<"Ingrese el mes: "<< endl;
    cin>>mes;

    if(dia==29&&mes==2){
        cout<<dia<<"/" <<mes<<" es valida en bisiesto"<< endl;
        }
    else{
        if(dia>31){
           cout<<dia<<"/"<<mes<<" es una fecha invalida"<< endl;
        }
        else if(mes>12){
           cout<<dia<<"/"<<mes<<" es una fecha invalida"<< endl;
        }
        else{
           cout<<dia<<"/"<<mes<<" es una fecha valida"<< endl;
        }

     }

    return 0;
}

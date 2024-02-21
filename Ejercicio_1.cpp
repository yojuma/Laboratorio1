#include <iostream>

using namespace std;

int main1()
{
    //1. Leer datos
    char letra;
    cout <<"Por favor ingrese una letra: "<< endl;
    cin >> letra;

    //2. Evaluar condicion
        if(letra == 'A'||letra =='a'||letra =='E'||letra =='e'||letra =='I'||letra =='i'||letra =='O'||letra =='o'||letra =='U'||letra =='u'){
            cout << "Su letra es una vocal"<< endl;

        }
        else if(letra == 'B'||letra =='b'||letra =='C'||letra =='c'||letra =='D'||letra =='d'||letra =='F'||letra =='f'||letra =='G'||letra =='g'||
                letra =='H'||letra =='h'||letra =='J'||letra =='j'||letra =='K'||letra =='k'||letra =='L'||letra =='l'||letra =='M'||letra =='m'||
                letra =='N'||letra =='n'||letra =='P'||letra =='p'||letra =='Q'||letra =='q'||letra =='R'||letra =='r'||letra =='S'||letra =='s'||
                letra =='T'||letra =='t'||letra =='V'||letra =='v'||letra =='W'||letra =='w'||letra =='X'||letra =='x'||letra =='Y'||letra =='y'||
                letra =='Z'||letra =='z'){
                cout << "Su letra es una consonante"<< endl;

        }
        else{
            cout <<"No es una letra"<< endl;
        }
    return 0;
}

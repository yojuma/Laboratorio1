#include <iostream>

using namespace std;

int main2()
{
    int monto;
    cout <<"Ingrese la cantidad de dinero sin puntos : "<< endl;
    cin >> monto;
    cout<<" "<<endl;

    if(monto==0){
        cout<<"No es necesario"<< endl;

    }
    else{
        //billetes
        int billetes_50m = monto/50000;
        monto-=billetes_50m*50000;
        cout<<"50.000= "<<billetes_50m<< endl;


        int billetes_20m = monto/20000;
        monto-=billetes_20m*20000;
        cout<<"20.000= "<<billetes_20m<< endl;

        int billetes_10m = monto/10000;
        monto-=billetes_10m*10000;
        cout<<"10.000= "<<billetes_10m<< endl;

        int billetes_5m = monto/5000;
        monto-=billetes_5m*5000;
        cout<<"5.000= "<<billetes_5m<< endl;

        int billetes_2m = monto/2000;
        monto-=billetes_2m*2000;
        cout<<"2.000= "<<billetes_2m<< endl;

        int billetes_1m = monto/1000;
        monto-=billetes_1m*1000;
        cout<<"1.000= "<<billetes_1m<< endl;

        //monedas
        int monedas_5s = monto/500;
        monto-=monedas_5s*500;
        cout<<"500= "<<monedas_5s<< endl;

        int monedas_2s = monto/200;
        monto-=monedas_2s*200;
        cout<<"200= "<<monedas_2s<< endl;

        int monedas_100 = monto/100;
        monto-=monedas_100*100;
        cout<<"100= "<<monedas_100<< endl;

        int monedas_50 = monto/50;
        monto-=monedas_50*50;
        cout<<"50= "<<monedas_50<< endl;

        cout<<"Faltante: "<<monto<< endl;

        }

    return 0;
}

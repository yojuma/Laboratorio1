#include<iostream>

using namespace std;

int main4(){
    int numero,hora,duracion,hora2,cambio_dia;
    int sumarle_a_las_horas,suma_horas,suma_minutos;

    cout << "Ingrese una hora del dia: "<< endl;
    cin >> numero;

    hora=numero/100;

    float minutos=((float(numero)/100)-hora)*100;

    if(numero>2359||numero<1||minutos>60){
        cout<<hora<<":"<<int(minutos)<<" Es una hora invalida.";
        return 0;
    }

    cout << "Ingrese la duracion : "<< endl;
    cin >> duracion;

    hora2=duracion/100;

    float minutos2=((float(duracion)/100)-hora2)*100;

    if(duracion>2359||duracion<1||minutos>60){
        cout<<hora2<<":"<<int(minutos2)<<" Es una hora invalida.";
        return 0;
    }

    if(minutos+minutos2>=60){
        sumarle_a_las_horas=(minutos+minutos2)/60;
        suma_horas=(hora+hora2)+sumarle_a_las_horas;
        suma_minutos=((((minutos+minutos2)/60)-sumarle_a_las_horas)*60);

        if(int(hora+hora2)>=24){
            cambio_dia=hora+hora2;
            cout<<"La hora es: "<<((cambio_dia)-24)<<":"<<suma_minutos<< endl;
            return 0;
        }

    cout<<"La hora es: "<<suma_horas<<":"<<suma_minutos<< endl;
    }

    else if(hora+hora2>=24){
        int nuevo_dia=hora+hora2;
        cout<<"La hora es: "<<((int(nuevo_dia))-24)<<":"<<minutos+minutos2<< endl;
        return 0;
    }

    else{
    cout<<"La hora es: "<<hora+hora2<<":"<<minutos+minutos2<< endl;
    }
    return 0;
}


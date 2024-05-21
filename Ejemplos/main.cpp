#include <iostream>
#include <stdlib.h>
#include "Alumno.h"
using namespace std;

int main(void){
    Fecha F(12,6,1999);
    Hora H(12,34,56);
    Evento E(13,8,2001,7,8,9);
    //Pruebas de constructores y muestraTuEstado()
    Alumno E1;
    Alumno E2("Juan","Perez","Lopez","m",1.82,E,2,7.6,"ICE");
    Alumno E3("Mario","Elmada","Juarez","masc.",1.76,F,H,3,8.9,"IE");
    Alumno E4("Laura","Zuniga","Ruiz","Fem.",1.86,29,4,2004,8,54,32,4,6.54,"ICA");

    cout<<"E1"<<endl;E1.muestraTuEstado();cout<<endl<<endl;
    cout<<"E2"<<endl;E2.muestraTuEstado();cout<<endl<<endl;
    cout<<"E3"<<endl;E3.muestraTuEstado();cout<<endl<<endl;
    cout<<"E4"<<endl;E4.muestraTuEstado();cout<<endl<<endl;
    system("pause");
    system("cls");

    //Prueba de pideleElUsuarioTuEstado()
    cout<<"E1"<<endl;E1.muestraTuEstado();cout<<endl<<endl;

    cout<<"E1"<<endl;E1.pideleAlUsuarioTuEstado();

    cout<<endl<<"E1"<<endl;E1.muestraTuEstado();cout<<endl<<endl;
    system("pause");
    system("cls");

    //Pruebas de dameTuAtributoSemestre(),dameTuAtributoPromedio(),dameTuAtributoCarrera()
    //modificaTuAtributoSemestre(),modificaTuAtributoPromedio() y modificaTuAtributoCarrera()
    cout<<"E1"<<endl;E1.muestraTuEstado();cout<<endl<<endl;
    cout<<"E2"<<endl;E2.muestraTuEstado();cout<<endl<<endl;

    E2.modificaTuAtributoSemestre(E1.dameTuAtributoSemestre());
    E2.modificaTuAtributoPromedio(E1.dameTuAtributoPromedio());
    E2.modificaTuAtributoCarrera(E1.dameTuAtributoCarrera());

    cout<<endl<<"E2"<<endl;E1.muestraTuEstado();cout<<endl<<endl;

    return 0;
}

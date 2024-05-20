#include <iostream>
#include <stdlib.h>
#include "Empleado.h"
using namespace std;

int main(void){
    Fecha F(12,6,1999);
    Hora H(12,34,56);
    Evento E(13,8,2001,7,8,9);
    //Pruebas de constructores y muestraTuEstado()
    Empleado E1;
    Empleado E2("Juan","Perez","Lopez","m",1.82,E,2,4967.6,"Intendente");
    Empleado E3("Mario","Elmada","Juarez","masc.",1.76,F,H,3,5678.9,"General");
    Empleado E4("Laura","Zuniga","Ruiz","Fem.",1.86,29,4,2004,8,54,32,4,49876.54,"Gerente");

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

    //Pruebas de dameTuAtributoNumeroEmpleado(),dameTuAtributoSueldo(),dameTuAtributoPuesto()
    //modificaTuAtributoNumeroEmpleado(),modificaTuAtributoSueldo() y modificaTuAtributoPuesto()
    cout<<"E1"<<endl;E1.muestraTuEstado();cout<<endl<<endl;
    cout<<"E2"<<endl;E2.muestraTuEstado();cout<<endl<<endl;

    E2.modificaTuAtributoNumeroEmpleado(E1.dameTuAtributoNumeroEmpleado());
    E2.modificaTuAtributoSueldo(E1.dameTuAtributoSueldo());
    E2.modificaTuAtributoPuesto(E1.dameTuAtributoPuesto());

    cout<<endl<<"E2"<<endl;E1.muestraTuEstado();cout<<endl<<endl;

    return 0;
}

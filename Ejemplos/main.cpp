#include <iostream>
#include <stdlib.h>
#include "Profesor.h"
using namespace std;

int main(void){
    Fecha F(12,6,1999);
    Hora H(12,34,56);
    Evento E(13,8,2001,7,8,9);
    //Pruebas de constructores y muestraTuEstado()
    Profesor E1;
    Profesor E2("Juan","Perez","Lopez","m",1.82,E,2,12345.56,"Docente",1,4.5,"Matematicas");
    Profesor E3("Mario","Elmada","Juarez","masc.",1.76,F,H,3,1357.79,"Maestro",2,9.0,"Fisica");
    Profesor E4("Laura","Zuniga","Ruiz","Fem.",1.86,29,4,2004,8,54,32,4,15432.21,"Profesora",4,24,"Circuitos");

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

    E2.modificaTuAtributoNumeroGrupos(E1.dameTuAtributoNumeroGrupos());
    E2.modificaTuAtributoCarga(E1.dameTuAtributoCarga());
    E2.modificaTuAtributoAcademia(E1.dameTuAtributoAcademia());

    cout<<endl<<"E2"<<endl;E1.muestraTuEstado();cout<<endl<<endl;

    return 0;
}

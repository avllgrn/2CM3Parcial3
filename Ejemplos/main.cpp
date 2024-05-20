#include <iostream>
#include <stdlib.h>
#include "Persona.h"
using namespace std;

int main(void){
    Persona P1;
    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    Evento FN(1,2,2003,4,5,6);
    Persona P2("Juan","Perez","Lopez","Masculino",1.65,FN);
    cout<<"P2"<<endl;
    P2.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    Fecha FFN(7,8,2009);
    Hora HFN(10,11,12);
    Persona P3("Luisa","Garcia","Hernandez","Femenino",1.75,FFN, HFN);
    cout<<"P3"<<endl;
    P3.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    Persona P4("Oakley","Justice","Law","Unknown",1.87,13,14,2015,16,117,18);
    cout<<"P4"<<endl;
    P4.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.pideleAlUsuarioTuEstado();
    cout<<"Nombre: "<<P1.dameTuAtributoNombre()<<endl
        <<"Paterno: "<<P1.dameTuAtributoPaterno()<<endl
        <<"Materno: "<<P1.dameTuAtributoMaterno()<<endl
        <<"Genero: "<<P1.dameTuAtributoGenero()<<endl
        <<"estatura: "<<P1.dameTuAtributoEstatura()<<endl;
    cout<<"FechaNacimiento: \n\tF: ";
    P1.dameTuAtributoFechaNacimiento().dameTuAtributoF().muestraTuEstado();
    cout<<"\n\tH:";
    P1.dameTuAtributoFechaNacimiento().dameTuAtributoH().muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoNombre("Un nombre");
    P1.modificaTuAtributoPaterno("Un Paterno");
    P1.modificaTuAtributoMaterno("Un Materno");
    P1.modificaTuAtributoGenero("Un Genero");
    P1.modificaTuAtributoEstatura(1.98);
    P1.modificaTuAtributoFechaNacimiento(FN);
    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoFechaNacimiento(FFN,HFN);
    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoFechaNacimiento(13,14,2015,16,117,18);
    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoDia(P2.dameTuAtributoFechaNacimiento().dameTuAtributoF().dameTuAtributoDia());
    cout<<"P1.modificaTuAtributoDia"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoMes(P2.dameTuAtributoFechaNacimiento().dameTuAtributoF().dameTuAtributoMes());
    cout<<"P1.modificaTuAtributoMes"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoAnio(P2.dameTuAtributoFechaNacimiento().dameTuAtributoF().dameTuAtributoAnio());
    cout<<"P1.modificaTuAtributoAnio"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoHora(P2.dameTuAtributoFechaNacimiento().dameTuAtributoH().dameTuAtributoHora());
    cout<<"P1.modificaTuAtributoHora"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoMinuto(P2.dameTuAtributoFechaNacimiento().dameTuAtributoH().dameTuAtributoMinuto());
    cout<<"P1.modificaTuAtributoMinuto"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"P1"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;
    P1.modificaTuAtributoSegundo(P2.dameTuAtributoFechaNacimiento().dameTuAtributoH().dameTuAtributoSegundo());
    cout<<"P1.modificaTuAtributoSegundo"<<endl;
    P1.muestraTuEstado();
    cout<<endl<<endl;

    return 0;
}

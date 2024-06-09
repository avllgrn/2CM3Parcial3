#include <iostream>
#include <stdio.h>
#include "Persona.h"
#include "Empleado.h"
#include "Profesor.h"
using namespace std;

int main(void){
    Persona P;
    Empleado E;
    Profesor M;
    Persona* ptrP;
    Empleado* ptrE;

    ptrP = &P;
    cout<<"P con ptrP"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;
    cout<<endl<<"P con ptrP"<<endl;
    ptrP->pideleAlUsuarioTuEstado(); cout<<endl;
    cout<<"P con ptrP"<<endl;
    ptrP->muestraTuEstado();         cout<<endl<<endl;
    system("pause");                cout<<endl<<endl;
    system("cls");

    ptrP = &E;
    cout<<"E con ptrP"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;
    cout<<endl<<"E con ptrP"<<endl;
    ptrP->pideleAlUsuarioTuEstado(); cout<<endl;
    cout<<"E con ptrP"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;
    system("pause");                cout<<endl<<endl;
    system("cls");

    ptrP = &M;
    cout<<"M con ptrP"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;
    cout<<endl<<"M con ptrP"<<endl;
    ptrP->pideleAlUsuarioTuEstado(); cout<<endl;
    cout<<"M con ptrP"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;
    system("pause");                cout<<endl<<endl;
    system("cls");

    ptrP = &E;
    cout<<"E con ptrE"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;
    cout<<endl<<"E con ptrE"<<endl;
    ptrP->pideleAlUsuarioTuEstado(); cout<<endl;
    cout<<"E con ptrE"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;
    system("pause");                cout<<endl<<endl;
    system("cls");

    ptrP = &M;
    cout<<"M con ptrE"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;
    cout<<endl<<"M con ptrE"<<endl;
    ptrP->pideleAlUsuarioTuEstado(); cout<<endl;
    cout<<"M con ptrE"<<endl;
    ptrP->muestraTuEstado();         cout<<endl;

    return 0;
}

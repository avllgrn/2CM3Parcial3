#include <iostream>
#include <stdio.h>
#include "Punto2D.h"
#include "Complejo.h"
#include "Fraccion.h"
using namespace std;

int main(void){

    Punto2D* ptrPunto2D;//Apuntador Punto2D
    Complejo* ptrComplejo;//Apuntador Complejo
    Fraccion* ptrFraccion;//Apuntador Fraccion

    ptrPunto2D = new Punto2D();//Instanciar dinamicamente un Objeto Punto2D, sin nombre, y guardar su direccion en Apuntador ptrPunto2D
    ptrComplejo = new Complejo();//Instanciar dinamicamente un Objeto Complejo, sin nombre, y guardar su direccion en Apuntador ptrComplejo
    ptrFraccion = new Fraccion();//Instanciar dinamicamente un Objeto Fraccion, sin nombre, y guardar su direccion en Apuntador ptrFraccion

    cout<<"ptrPunto2D->muestraTuEstado() => ";ptrPunto2D->muestraTuEstado();cout<<endl<<endl;//Estado de Objeto Punto2D apuntado por ptrPunto2D
    cout<<"ptrComplejo->muestraTuEstado() => ";ptrComplejo->muestraTuEstado();cout<<endl<<endl;//Estado de Objeto Complejo apuntado por ptrComplejo
    cout<<"ptrFraccion->muestraTuEstado() => ";ptrFraccion->muestraTuEstado();cout<<endl<<endl;//Estado de Objeto Fraccion apuntado por ptrFraccion

    delete ptrPunto2D;//Liberar dinamicamente un Objeto Punto2D, sin nombre, cuya direccion esta en Apuntador ptrPunto2D
    delete ptrComplejo;//Liberar dinamicamente un Objeto Complejo, sin nombre, cuya direccion esta en Apuntador ptrComplejo
    delete ptrFraccion;//Liberar dinamicamente un Objeto Fraccion, sin nombre, cuya direccion esta en Apuntador ptrFraccion

    return 0;
}

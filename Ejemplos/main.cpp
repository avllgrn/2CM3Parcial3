#include <iostream>
#include <stdio.h>
#include "Punto2D.h"
#include "Complejo.h"
#include "Fraccion.h"
using namespace std;

int main(void){
    Punto2D P;//Objeto Punto2D
    Complejo C;//Objeto Complejo
    Fraccion F;//Objeto Fraccion

    Punto2D* ptrPunto2D;//Apuntador a Punto2D
    Complejo* ptrComplejo;//Apuntador a Complejo
    Fraccion* ptrFraccion;//Apuntador a Fraccion

    ptrPunto2D = &C;//Guardar la direccion de Objeto Complejo y en Apuntador a ptrPunto2D
    ptrComplejo = &F;//Guardar la direccion de Objeto Fraccion en Apuntador a ptrComplejo
    ptrFraccion = &P;//Guardar la direccion de Objeto Punto2D en Apuntador a ptrFraccion


    cout<<"P.muestraTuEstado() => ";P.muestraTuEstado();cout<<endl;//Estado de P
    cout<<"&P\t\t= "<<&P<<endl//Direccion de P
        <<"ptrPunto2D      = "<<ptrPunto2D<<endl//Contenido en ptrInt
        <<"&ptrFraccion    = "<<&ptrPunto2D<<endl;//Direccion de ptrInt
    cout<<"ptrPunto2D->muestraTuEstado() => ";ptrPunto2D->muestraTuEstado();cout<<endl<<endl;//Estado de Objeto Punto2D apuntado por ptrPunto2D

    cout<<"C.muestraTuEstado() => ";C.muestraTuEstado();cout<<endl;//Estado de C
    cout<<"&C\t\t= "<<&C<<endl//Direccion de C
        <<"ptrComplejo     = "<<ptrComplejo<<endl//Contenido en ptrFloat
        <<"&ptrComplejo    = "<<&ptrComplejo<<endl;//Direccion de ptrFloat
    cout<<"ptrComplejo->muestraTuEstado() => ";ptrComplejo->muestraTuEstado();cout<<endl<<endl;//Estado de Objeto Complejo apuntado por ptrComplejo

    cout<<"F.muestraTuEstado() => ";F.muestraTuEstado();cout<<endl;//Estado de F
    cout<<"&F\t\t= "<<&F<<endl//Direccion de F
        <<"ptrFraccion     = "<<ptrFraccion<<endl//Contenido en ptrChar
        <<"&ptrFraccion    = "<<&ptrFraccion<<endl;//Direccion de ptrChar
    cout<<"ptrFraccion->muestraTuEstado() => ";ptrFraccion->muestraTuEstado();cout<<endl<<endl;//Estado de Objeto Fraccion apuntado por ptrFraccion

    return 0;
}

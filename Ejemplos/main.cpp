#include <iostream>
#include <stdio.h>
#include "Punto3D.h"
using namespace std;

int main(void){
    Punto2D P2D;
    Punto3D P3D;
    Punto2D* ptr;

    ptr = &P2D;
    cout<<"P2D";
    ptr->muestraTuEstado();         cout<<endl;
    cout<<endl<<"P2D"<<endl;
    ptr->pideleAlUsuarioTuEstado(); cout<<endl;
    cout<<"P2D";
    ptr->muestraTuEstado();         cout<<endl<<endl;
    system("pause");                cout<<endl<<endl;

    ptr = &P3D;
    cout<<"P3D";
    ptr->muestraTuEstado();         cout<<endl;
    cout<<endl<<"P3D"<<endl;
    ptr->pideleAlUsuarioTuEstado(); cout<<endl;
    cout<<"P3D";
    ptr->muestraTuEstado();         cout<<endl;

    return 0;
}

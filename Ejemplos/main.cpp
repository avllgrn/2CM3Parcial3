#include <iostream>
#include <stdlib.h>
#include "Punto3D.h"
using namespace std;

int main(void){
    Punto3D P(1,2,3);
    P.muestraTuEstado();
    cout<<endl;
    P.pideleAlUsuarioTuEstado();
    cout<<endl;
    P.muestraTuEstado();
    cout<<endl;
    P.modificaTuAtributoX(1.2);
    P.muestraTuEstado();
    cout<<endl;
    P.modificaTuAtributoY(3.4);
    P.muestraTuEstado();
    cout<<endl;
    P.modificaTuAtributoZ(5.6);
    P.muestraTuEstado();
    cout<<endl;
    P.modificaTuEstado(9.8,7.6,5.4);
    P.muestraTuEstado();
    cout<<endl;
    return 0;
}

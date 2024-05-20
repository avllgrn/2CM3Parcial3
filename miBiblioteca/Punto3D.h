#ifndef PUNTO3D_H
#define PUNTO3D_H


#include <iostream>
#include <stdlib.h>
#include "Punto2D.h"
using namespace std;

class Punto3D : public Punto2D{
private:
    double z;
public:
    Punto3D(void);
    Punto3D(double x, double y, double z);
    ~Punto3D(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    double dameTuAtributoXZ(void);
    void modificaTuAtributoZ(double z);
    void modificaTuEstado(double x, double y, double z);
};

#endif // PUNTO3D_H

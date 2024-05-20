#ifndef CIRCULOP_H
#define CIRCULOP_H

#include <iostream>
#include <math.h>
#include "Punto2D.h"
using namespace std;

class CirculoP{
private:
    Punto2D C;
    Punto2D P;
public:
    CirculoP(void);
    CirculoP(Punto2D C, Punto2D P);
    CirculoP(double xC,double yC,double xP,double yP);
    ~CirculoP(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    Punto2D dameTuAtributoC(void);
    void modificaTuAtributoC(Punto2D C);
    void modificaTuAtributoC(double xC,double yC);
    Punto2D dameTuAtributoP(void);
    void modificaTuAtributoP(Punto2D P);
    void modificaTuAtributoP(double xP,double yP);
    void modificaTuEstado(Punto2D C, Punto2D P);
    double dameTuAtributoRadio(void);
    double dameTuAtributoDiametro(void);
    double dameTuAtributoArea(void);
    double dameTuAtributoPerimetro(void);
};




#endif // CIRCULOP_H

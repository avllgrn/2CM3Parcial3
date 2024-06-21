#ifndef FRACCION_H
#define FRACCION_H


#include <iostream>
#include <stdlib.h>
using namespace std;

class Fraccion{
private:
    int numerador;
    int denominador;
    void verificaTuEstado(void);
public:
    Fraccion(void);
    Fraccion(int numerador, int denominador);
    ~Fraccion(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    int dameTuAtributoNumerador(void);
    void modificaTuAtributoNumerador(int numerador);
    int dameTuAtributoDenominador(void);
    void modificaTuAtributoDenominador(int denominador);
};
istream& operator >>(istream& Izquierdo, Fraccion& Derecho);
ostream& operator <<(ostream& Izquierdo, Fraccion Derecho);
Fraccion operator+(Fraccion Izquierdo, Fraccion Derecho);
Fraccion operator-(Fraccion Izquierdo, Fraccion Derecho);
Fraccion operator*(Fraccion Izquierdo, Fraccion Derecho);
Fraccion operator/(Fraccion Izquierdo, Fraccion Derecho);
bool operator<(Fraccion Izquierdo, Fraccion Derecho);
bool operator<=(Fraccion Izquierdo, Fraccion Derecho);
bool operator>(Fraccion Izquierdo, Fraccion Derecho);
bool operator>=(Fraccion Izquierdo, Fraccion Derecho);
bool operator!=(Fraccion Izquierdo, Fraccion Derecho);
bool operator==(Fraccion Izquierdo, Fraccion Derecho);

Fraccion suma(Fraccion A, Fraccion B);
Fraccion resta(Fraccion A, Fraccion B);
Fraccion multiplica(Fraccion A, Fraccion B);
Fraccion divide(Fraccion A, Fraccion B);


#endif // FRACCION_H

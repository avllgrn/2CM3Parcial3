#include "Punto3D.h"



Punto3D::Punto3D(void) : Punto2D(){
    Punto3D::z = 0.0;
}
Punto3D::Punto3D(double x, double y, double z) : Punto2D(x,y){
    Punto3D::z = z;
}
Punto3D::~Punto3D(void){
}
void Punto3D::pideleAlUsuarioTuEstado(void){
    Punto2D::pideleAlUsuarioTuEstado();
    cout<<"Dame mi z ";cin>>this->z;
}
void Punto3D::muestraTuEstado(void){
    cout<<"("
        <<this->dameTuAtributoX()<<","
        <<this->dameTuAtributoY()<<","
        <<this->z<<")";
}
double Punto3D::dameTuAtributoXZ(void){
    return this->z;
}
void Punto3D::modificaTuAtributoZ(double z){
    this->z = z;
}
void Punto3D::modificaTuEstado(double x, double y, double z){
    this->modificaTuAtributoX(x);
    this->modificaTuAtributoY(y);
    this->z = z;
}


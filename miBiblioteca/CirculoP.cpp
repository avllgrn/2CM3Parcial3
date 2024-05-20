#include "CirculoP.h"


CirculoP::CirculoP(void){
    //cout<<"CirculoP construido"<<endl;
}
CirculoP::CirculoP(Punto2D C, Punto2D P){
    CirculoP::C = C;
    CirculoP::P = P;
    //cout<<"CirculoP construido"<<endl;
}
CirculoP::CirculoP(double xC,double yC,double xP,double yP){
    CirculoP::C.modificaTuAtributoX(xC);
    CirculoP::C.modificaTuAtributoY(yC);
    CirculoP::P.modificaTuAtributoX(xP);
    CirculoP::P.modificaTuAtributoY(yP);
}
CirculoP::~CirculoP(void){
    //cout<<"Circulo destruido!"<<endl;
}
void CirculoP::pideleAlUsuarioTuEstado(void){
    cout<<"Dame mi C"<<endl;
    this->C.pideleAlUsuarioTuEstado();
    cout<<"Dame mi P"<<endl;
    this->P.pideleAlUsuarioTuEstado();
}
void CirculoP::muestraTuEstado(void){
    cout<<"C";
    this->C.muestraTuEstado();
    cout<<endl<<"P";
    this->P.muestraTuEstado();
    cout<<endl
        <<"Radio: "<<this->dameTuAtributoRadio()
        <<endl
        <<"Diametro: "<<this->dameTuAtributoDiametro()
        <<endl
        <<"Area: "<<this->dameTuAtributoArea()
        <<endl
        <<"Perimetro: "<<this->dameTuAtributoPerimetro();
}
Punto2D CirculoP::dameTuAtributoC(void){
    return this->C;
}
void CirculoP::modificaTuAtributoC(Punto2D C){
    this->C = C;
}
void CirculoP::modificaTuAtributoC(double xC,double yC){
    this->C.modificaTuAtributoX(xC);
    this->C.modificaTuAtributoY(yC);
}
Punto2D CirculoP::dameTuAtributoP(void){
    return this->P;
}
void CirculoP::modificaTuAtributoP(Punto2D P){
    this->P = P;
}
void CirculoP::modificaTuEstado(Punto2D C, Punto2D P){
    this->C = C;
    this->P = P;
}
void CirculoP::modificaTuAtributoP(double xP,double yP){
    this->P.modificaTuAtributoX(xP);
    this->P.modificaTuAtributoY(yP);
}
double CirculoP::dameTuAtributoRadio(void){
    return distanciaEntre(C,P);
}
double CirculoP::dameTuAtributoDiametro(void){
    return 2*this->dameTuAtributoRadio();
}
double CirculoP::dameTuAtributoArea(void){
    return M_PI*pow(this->dameTuAtributoRadio(),2);
}
double CirculoP::dameTuAtributoPerimetro(void){
    return 2*M_PI*this->dameTuAtributoRadio();
}

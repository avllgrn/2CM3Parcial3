#include "Persona.h"

Persona::Persona(void){
    Persona::estatura = 1.65;
}
Persona::Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento){
    Persona::Nombre = Nombre;
    Persona::Paterno = Paterno;
    Persona::Materno = Materno;
    Persona::Genero = Genero;
    Persona::estatura = estatura;
    Persona::FechaNacimiento = FechaNacimiento;
    Persona::verificaTuEstado();
}
Persona::Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H){
    Persona::Nombre = Nombre;
    Persona::Paterno = Paterno;
    Persona::Materno = Materno;
    Persona::Genero = Genero;
    Persona::estatura = estatura;
    Persona::FechaNacimiento.modificaTuEstado(F,H);
    Persona::verificaTuEstado();
}
Persona::Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo){
    Persona::Nombre = Nombre;
    Persona::Paterno = Paterno;
    Persona::Materno = Materno;
    Persona::Genero = Genero;
    Persona::estatura = estatura;
    Persona::FechaNacimiento.modificaTuEstado(dia,mes,anio,hora,minuto,segundo);
    Persona::verificaTuEstado();
}
Persona::~Persona(void){
    //cout<<"Objeto destruido..."<<endl;
}
void Persona::verificaTuEstado(void){
    if(this->estatura<0.3 || this->estatura>2.72)
        this->estatura = 1.65;
}
void Persona::pideleAlUsuarioTuEstado(void){
    cout<<"Dame mi nombre: ";cin>>this->Nombre;
    cout<<"Dame mi paterno: ";cin>>this->Paterno;
    cout<<"Dame mi materno: ";cin>>this->Materno;
    cout<<"Dame mi genero: ";cin>>this->Genero;
    cout<<"Dame mi estatura: ";cin>>this->estatura;
    cout<<"Dame mi Fecha de Nacimiento: "<<endl;
    this->FechaNacimiento.pideleAlUsuarioTuEstado();
    this->verificaTuEstado();
}
void Persona::muestraTuEstado(void){
    cout<<"Nombre: "<<this->Nombre<<endl
        <<"Paterno: "<<this->Paterno<<endl
        <<"Materno: "<<this->Materno<<endl
        <<"Genero: "<<this->Genero<<endl
        <<"estatura: "<<this->estatura<<endl
        <<"Fecha de Nacimiento: "<<endl;
    this->FechaNacimiento.muestraTuEstado();
}
string Persona::dameTuAtributoNombre(void){
    return this->Nombre;
}
void Persona::modificaTuAtributoNombre(string Nombre){
    this->Nombre = Nombre;
}
string Persona::dameTuAtributoPaterno(void){
    return this->Paterno;
}
void Persona::modificaTuAtributoPaterno(string Paterno){
    this->Paterno = Paterno;
}
string Persona::dameTuAtributoMaterno(void){
    return this->Materno;
}
void Persona::modificaTuAtributoMaterno(string Materno){
    this->Materno = Materno;
}
string Persona::dameTuAtributoGenero(void){
    return this->Genero;
}
void Persona::modificaTuAtributoGenero(string Genero){
    this->Genero = Genero;
}
float Persona::dameTuAtributoEstatura(void){
    return this->estatura;
}
void Persona::modificaTuAtributoEstatura(float estatura){
    this->estatura = estatura;
    this->verificaTuEstado();
}
Evento Persona::dameTuAtributoFechaNacimiento(void){
    return this->FechaNacimiento;
}
void Persona::modificaTuAtributoFechaNacimiento(Evento FechaNacimiento){
    this->FechaNacimiento = FechaNacimiento;
}
void Persona::modificaTuAtributoFechaNacimiento(Fecha F, Hora H){
    this->FechaNacimiento.modificaTuEstado(F,H);
}
void Persona::modificaTuAtributoFechaNacimiento(int dia, int mes, int anio, int hora, int minuto, int segundo){
    this->FechaNacimiento.modificaTuEstado(dia,mes,anio,hora,minuto,segundo);
}
void Persona::modificaTuAtributoF(Fecha F){
    this->FechaNacimiento.modificaTuAtributoF(F);
}
void Persona::modificaTuAtributoH(Hora H){
    this->FechaNacimiento.modificaTuAtributoH(H);
}
void Persona::modificaTuAtributoDia(int dia){
    Fecha FTemporal;
    FTemporal = this->FechaNacimiento.dameTuAtributoF();
    FTemporal.modificaTuAtributoDia(dia);
    this->FechaNacimiento.modificaTuAtributoF(FTemporal);
}
void Persona::modificaTuAtributoMes(int mes){
    Fecha FTemporal;
    FTemporal = this->FechaNacimiento.dameTuAtributoF();
    FTemporal.modificaTuAtributoMes(mes);
    this->FechaNacimiento.modificaTuAtributoF(FTemporal);
}
void Persona::modificaTuAtributoAnio(int anio){
    Fecha FTemporal;
    FTemporal = this->FechaNacimiento.dameTuAtributoF();
    FTemporal.modificaTuAtributoAnio(anio);
    this->FechaNacimiento.modificaTuAtributoF(FTemporal);
}
void Persona::modificaTuAtributoHora(int hora){
    Hora HTemporal;
    HTemporal = this->FechaNacimiento.dameTuAtributoH();
    HTemporal.modificaTuAtributoHora(hora);
    this->FechaNacimiento.modificaTuAtributoH(HTemporal);
}
void Persona::modificaTuAtributoMinuto(int minuto){
    Hora HTemporal;
    HTemporal = this->FechaNacimiento.dameTuAtributoH();
    HTemporal.modificaTuAtributoMinuto(minuto);
    this->FechaNacimiento.modificaTuAtributoH(HTemporal);
}
void Persona::modificaTuAtributoSegundo(int segundo){
    Hora HTemporal;
    HTemporal = this->FechaNacimiento.dameTuAtributoH();
    HTemporal.modificaTuAtributoSegundo(segundo);
    this->FechaNacimiento.modificaTuAtributoH(HTemporal);
}
void Persona::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento){
    this->Nombre = Nombre;
    this->Paterno = Paterno;
    this->Materno = Materno;
    this->Genero = Genero;
    this->FechaNacimiento = FechaNacimiento;
    this->verificaTuEstado();
}
void Persona::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H){
    this->Nombre = Nombre;
    this->Paterno = Paterno;
    this->Materno = Materno;
    this->Genero = Genero;
    this->FechaNacimiento.modificaTuEstado(F,H);
    this->verificaTuEstado();
}
void Persona::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo){
    this->Nombre = Nombre;
    this->Paterno = Paterno;
    this->Materno = Materno;
    this->Genero = Genero;
    this->FechaNacimiento.modificaTuEstado(dia,mes,anio,hora,minuto,segundo);
    this->verificaTuEstado();
}

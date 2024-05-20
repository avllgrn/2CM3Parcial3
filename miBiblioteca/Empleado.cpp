#include "Empleado.h"


void Empleado::verificaTuEstado(void){
    if(this->sueldo < 1234.56)
        this->sueldo = 1234.56;

    if(this->numeroEmpleado < 1)
        this->numeroEmpleado = 1;
}
Empleado::Empleado(void) : Persona(){
    Empleado::numeroEmpleado = 1;
    Empleado::sueldo = 1234.56;
    Empleado::Puesto = "Empleado";
}
Empleado::Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numeroEmpleado,float sueldo,string Puesto)
        : Persona(Nombre,Paterno,Materno,Genero,estatura,FechaNacimiento){
    Empleado::numeroEmpleado = numeroEmpleado;
    Empleado::sueldo = sueldo;
    Empleado::Puesto = Puesto;
    Empleado::verificaTuEstado();
}
Empleado::Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numeroEmpleado,float sueldo,string Puesto)
        : Persona(Nombre,Paterno,Materno,Genero,estatura,F,H){
    Empleado::numeroEmpleado = numeroEmpleado;
    Empleado::sueldo = sueldo;
    Empleado::Puesto = Puesto;
    Empleado::verificaTuEstado();
}
Empleado::Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numeroEmpleado,float sueldo,string Puesto)
        : Persona(Nombre,Paterno,Materno,Genero,estatura,dia,mes,anio,hora,minuto,segundo){
    Empleado::numeroEmpleado = numeroEmpleado;
    Empleado::sueldo = sueldo;
    Empleado::Puesto = Puesto;
    Empleado::verificaTuEstado();
}
void Empleado::pideleAlUsuarioTuEstado(void){
    string Enter;
    Persona::pideleAlUsuarioTuEstado();
    cout<<"Dame mi numeroEmpleado ";
    cin>>this->numeroEmpleado;
    cout<<"Dame mi sueldo ";
    cin>>this->sueldo;
    cout<<"Dame mi Puesto ";
    getline(cin,Enter);
    getline(cin,this->Puesto);
    Empleado::verificaTuEstado();
}
void Empleado::muestraTuEstado(void){
    Persona::muestraTuEstado();
    cout<<"Numero: "<<this->numeroEmpleado<<endl
        <<"Sueldo: "<<this->sueldo<<endl
        <<"Puesto: "<<this->Puesto;
}
int Empleado::dameTuAtributoNumeroEmpleado(void){
    return this->numeroEmpleado;
}
void Empleado::modificaTuAtributoNumeroEmpleado(int numeroEmpleado){
    this->numeroEmpleado = numeroEmpleado;
    this->verificaTuEstado();
}
float Empleado::dameTuAtributoSueldo(void){
    return this->sueldo;
}
void Empleado::modificaTuAtributoSueldo(float sueldo){
    this->sueldo = sueldo;
    this->verificaTuEstado();
}
string Empleado::dameTuAtributoPuesto(void){
    return this->Puesto;
}
void Empleado::modificaTuAtributoPuesto(string Puesto){
    this->Puesto = Puesto;
}
void Empleado::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numeroEmpleado,float sueldo,string Puesto){
    Persona::modificaTuEstado(Nombre,Paterno,Materno,Genero,estatura,FechaNacimiento);
    this->numeroEmpleado = numeroEmpleado;
    this->sueldo = sueldo;
    this->Puesto = Puesto;
    this->verificaTuEstado();
}
void Empleado::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numeroEmpleado,float sueldo,string Puesto){
    Persona::modificaTuEstado(Nombre,Paterno,Materno,Genero,estatura,F,H);
    this->numeroEmpleado = numeroEmpleado;
    this->sueldo = sueldo;
    this->Puesto = Puesto;
    this->verificaTuEstado();
}
void Empleado::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numeroEmpleado,float sueldo,string Puesto){
    Persona::modificaTuEstado(Nombre,Paterno,Materno,Genero,estatura,dia,mes,anio,hora,minuto,segundo);
    this->numeroEmpleado = numeroEmpleado;
    this->sueldo = sueldo;
    this->Puesto = Puesto;
    this->verificaTuEstado();
}

#include "Profesor.h"

void Profesor::verificaTuEstado(void){
    if(this->carga < 0|| this->carga > 24)
        this->carga = 0;

    if(this->numeroGrupos < 0)
        this->numeroGrupos = 0;
}
Profesor::Profesor(void) : Empleado(){
    Profesor::numeroGrupos = 0;
    Profesor::carga = 0;
    Profesor::Academia = "Fisica";
}
Profesor::Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia)
        : Empleado(Nombre,Paterno,Materno,Genero,estatura,FechaNacimiento,numeroEmpleado,sueldo,Puesto){
    Profesor::numeroGrupos = numeroGrupos;
    Profesor::carga = carga;
    Profesor::Academia = Academia;
    Profesor::verificaTuEstado();
}
Profesor::Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia)
        : Empleado(Nombre,Paterno,Materno,Genero,estatura,F,H,numeroEmpleado,sueldo,Puesto){
    Profesor::numeroGrupos = numeroGrupos;
    Profesor::carga = carga;
    Profesor::Academia = Academia;
    Profesor::verificaTuEstado();
}
Profesor::Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia)
        : Empleado(Nombre,Paterno,Materno,Genero,estatura,dia,mes,anio,hora,minuto,segundo,numeroEmpleado,sueldo,Puesto){
    Profesor::numeroGrupos = numeroGrupos;
    Profesor::carga = carga;
    Profesor::Academia = Academia;
    Profesor::verificaTuEstado();
}
void Profesor::pideleAlUsuarioTuEstado(void){
    string Enter;
    Empleado::pideleAlUsuarioTuEstado();
    cout<<"Dame mi numero de grupos ";
    cin>>this->numeroGrupos;
    cout<<"Dame mi carga ";
    cin>>this->carga;
    cout<<"Dame mi academia ";
    getline(cin,Enter);
    getline(cin,this->Academia);
    Profesor::verificaTuEstado();
}
void Profesor::muestraTuEstado(void){
    Empleado::muestraTuEstado();
    cout<<"Numero de grupos: "<<this->numeroGrupos<<endl
        <<"Carga: "<<this->carga<<endl
        <<"Academia: "<<this->Academia;
}
int Profesor::dameTuAtributoNumeroGrupos(void){
    return this->numeroGrupos;
}
void Profesor::modificaTuAtributoNumeroGrupos(int numeroGrupos){
    this->numeroGrupos = numeroGrupos;
    this->verificaTuEstado();
}
float Profesor::dameTuAtributoCarga(void){
    return this->carga;
}
void Profesor::modificaTuAtributoCarga(float carga){
    this->carga = carga;
    this->verificaTuEstado();
}
string Profesor::dameTuAtributoAcademia(void){
    return this->Academia;
}
void Profesor::modificaTuAtributoAcademia(string Academia){
    this->Academia = Academia;
}
void Profesor::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia){
    Empleado::modificaTuEstado(Nombre,Paterno,Materno,Genero,estatura,FechaNacimiento,numeroEmpleado,sueldo,Puesto);
    this->numeroGrupos = numeroGrupos;
    this->carga = carga;
    this->Academia = Academia;
    this->verificaTuEstado();
}
void Profesor::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia){
    Empleado::modificaTuEstado(Nombre,Paterno,Materno,Genero,estatura,F,H,numeroEmpleado,sueldo,Puesto);
    this->numeroGrupos = numeroGrupos;
    this->carga = carga;
    this->Academia = Academia;
    this->verificaTuEstado();
}
void Profesor::modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia){
    Empleado::modificaTuEstado(Nombre,Paterno,Materno,Genero,estatura,dia,mes,anio,hora,minuto,segundo,numeroEmpleado,sueldo,Puesto);
    this->numeroGrupos = numeroGrupos;
    this->carga = carga;
    this->Academia = Academia;
    this->verificaTuEstado();
}

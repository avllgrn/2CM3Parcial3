#ifndef PROFESOR_H
#define PROFESOR_H


#include <iostream>
#include <stdlib.h>
#include "Empleado.h"
using namespace std;

class Profesor : public Empleado{
private:
    int numeroGrupos;
    float carga;
    void verificaTuEstado(void);
protected:
    string Academia;
public:
    Profesor(void);
    Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia);
    Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia);
    Profesor(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    int dameTuAtributoNumeroGrupos(void);
    void modificaTuAtributoNumeroGrupos(int numeroGrupos);
    float dameTuAtributoCarga(void);
    void modificaTuAtributoCarga(float carga);
    string dameTuAtributoAcademia(void);
    void modificaTuAtributoAcademia(string Academia);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numeroEmpleado,float sueldo,string Puesto,int numeroGrupos,float carga,string Academia);
};

#endif // PROFESOR_H

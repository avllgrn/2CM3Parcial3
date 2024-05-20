#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"
class Empleado : public Persona{
private:
    int numeroEmpleado;
    float sueldo;
    void verificaTuEstado(void);
protected:
    string Puesto;
public:
    Empleado(void);
    Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numeroEmpleado,float sueldo,string Puesto);
    Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numeroEmpleado,float sueldo,string Puesto);
    Empleado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numeroEmpleado,float sueldo,string Puesto);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    int dameTuAtributoNumeroEmpleado(void);
    void modificaTuAtributoNumeroEmpleado(int numeroEmpleado);
    float dameTuAtributoSueldo(void);
    void modificaTuAtributoSueldo(float sueldo);
    string dameTuAtributoPuesto(void);
    void modificaTuAtributoPuesto(string Puesto);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento,int numeroEmpleado,float sueldo,string Puesto);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H,int numeroEmpleado,float sueldo,string Puesto);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo,int numeroEmpleado,float sueldo,string Puesto);
};

#endif // EMPLEADO_H

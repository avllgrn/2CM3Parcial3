#ifndef PERSONA_H
#define PERSONA_H


#include <iostream>
#include "Evento.h"
using namespace std;

class Persona{
private:
    float estatura;
    void verificaTuEstado(void);
protected:
    string Nombre, Paterno, Materno, Genero;
    Evento FechaNacimiento;
public:
    Persona(void);
    Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento);
    Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H);
    Persona(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo);
    ~Persona(void);
    virtual void pideleAlUsuarioTuEstado(void);
    virtual void muestraTuEstado(void);
    string  dameTuAtributoNombre(void);
    void modificaTuAtributoNombre(string Nombre);
    string dameTuAtributoPaterno(void);
    void modificaTuAtributoPaterno(string Paterno);
    string dameTuAtributoMaterno(void);
    void modificaTuAtributoMaterno(string Materno);
    string dameTuAtributoGenero(void);
    void modificaTuAtributoGenero(string Genero);
    float dameTuAtributoEstatura(void);
    void modificaTuAtributoEstatura(float estatura);
    Evento dameTuAtributoFechaNacimiento(void);
    void modificaTuAtributoFechaNacimiento(Evento FechaNacimiento);
    void modificaTuAtributoFechaNacimiento(Fecha F, Hora H);
    void modificaTuAtributoFechaNacimiento(int dia, int mes, int anio, int hora, int minuto, int segundo);
    void modificaTuAtributoF(Fecha F);
    void modificaTuAtributoH(Hora H);
    void modificaTuAtributoDia(int dia);
    void modificaTuAtributoMes(int mes);
    void modificaTuAtributoAnio(int anio);
    void modificaTuAtributoHora(int hora);
    void modificaTuAtributoMinuto(int minuto);
    void modificaTuAtributoSegundo(int segundo);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Evento FechaNacimiento);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,Fecha F,Hora H);
    void modificaTuEstado(string Nombre,string Paterno,string Materno,string Genero,float estatura,int dia,int mes,int anio,int hora,int minuto,int segundo);
};

#endif // PERSONA_H

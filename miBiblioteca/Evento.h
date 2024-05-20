#ifndef EVENTO_H
#define EVENTO_H


#include <iostream>
#include "Fecha.h"
#include "Hora.h"
using namespace std;
class Evento{
private:
	Fecha F;
	Hora H;
public:
	Evento(void);
	Evento(Fecha F, Hora H);
	Evento(int dia, int mes, int anio, int hora, int minuto, int segundo);
	~Evento(void);
	void pideleAlUsuarioTuEstado(void);
	void muestraTuEstado(void);
	Fecha dameTuAtributoF(void);
	void modificaTuAtributoF(Fecha F);
	void modificaTuAtributoF(int dia, int mes, int anio);
	Hora dameTuAtributoH(void);
	void modificaTuAtributoH(Hora H);
	void modificaTuAtributoH(int hora, int minuto, int segundo);
	void modificaTuEstado(Fecha F, Hora H);
	void modificaTuEstado(int dia, int mes, int anio, int hora, int minuto, int segundo);
};

#endif
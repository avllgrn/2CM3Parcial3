#include "Evento.h"


Evento::Evento(void){
	//cout<<"Evento construido"<<endl;
}
Evento::Evento(Fecha F, Hora H){
	Evento::F = F;
	Evento::H = H;
	//cout<<"Evento construido"<<endl;

}
Evento::Evento(int dia, int mes, int anio, int hora, int minuto, int segundo){
	Evento::F.modificaTuEstado(dia,mes,anio);
	Evento::H.modificaTuEstado(hora,minuto,segundo);
	//cout<<"Evento construido"<<endl;
}
Evento::~Evento(void){
	//cout<<"Evento destruido"<<endl;
}
void Evento::pideleAlUsuarioTuEstado(void){
	cout<<"Dame mi F"<<endl;
	this->F.pideleAlUsuarioTuEstado();
	cout<<"Dame mi H"<<endl;
	this->H.pideleAlUsuarioTuEstado();
}
void Evento::muestraTuEstado(void){
	cout<<"Fecha: ";this->F.muestraTuEstado();
	cout<<"Hora: ";this->H.muestraTuEstado();
}
Fecha Evento::dameTuAtributoF(void){
	return this->F;
}
void Evento::modificaTuAtributoF(Fecha F){
	this->F = F;
}
void Evento::modificaTuAtributoF(int dia, int mes, int anio){
	this->F.modificaTuEstado(dia,mes,anio);
}
Hora Evento::dameTuAtributoH(void){
	return this->H;
}
void Evento::modificaTuAtributoH(Hora H){
	this->H = H;
}
void Evento::modificaTuAtributoH(int hora, int minuto, int segundo){
	this->H.modificaTuEstado(hora,minuto,segundo);
}
void Evento::modificaTuEstado(Fecha F, Hora H){
	this->F = F;
	this->H = H;
}
void Evento::modificaTuEstado(int dia, int mes, int anio, int hora, int minuto, int segundo){
	this->F.modificaTuEstado(dia,mes,anio);
	this->H.modificaTuEstado(hora,minuto,segundo);
}

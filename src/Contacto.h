#ifndef CONTACTO_H_
#define CONTACTO_H_

#include <iostream>
#include <list>
#include "Inmueble.h"
using namespace std;


class Contacto{
	static int autonumerico;
	int id;
	string mail;
	string telefono;
	string dir;
	list<Inmueble*> inmuebles;
public:
	Contacto();
	void newInmueble(int id, int superficie, string dir, Estado est, float precio, string foto, bool alambrado, bool luz, bool agua, bool gas);
	void newInmueble(int id, int superficie, string dir, Estado est, float precio, string foto, int cantHab, int cantBanios, bool cochera, int cantSuites, int porcentaje, Fecha fEstimada, EstadoPropiedad estado);
	void updateInmueble(int id);
	void updateEstadoInmueble(int id);
	void deleteInmueble(int id);
	virtual void getInfo();
	virtual ~Contacto();
};

class Inmobiliaria : public Contacto{
	string sitioWeb;
	float porcentajeCobro;
public:
	Inmobiliaria();
	void getInfo();
	float getPorcentajeCobro();
	~Inmobiliaria();
};

class Propietario : public Contacto{
	Fecha inicioConsulta;
	Fecha finConsulta;
public:
	Propietario();
	void getInfo();
	~Propietario();
};



#endif //CONTACTO_H_

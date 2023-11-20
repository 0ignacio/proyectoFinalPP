#ifndef INMUEBLE_H_
#define INMUEBLE_H_

#include <iostream>
#include <list>
#include "Contacto.h"
#include "Cliente.h"
using namespace std;

enum Estado{
	Alquiler,
	EnVenta,
	NoDisp
};

enum EstadoPropiedad{
	EnConstruccion,
	Habitable
};


class Fecha{

};
class Contacto;

class Inmueble{
	int id;
	int superficie;
	string dir;
	Estado estado;
	float precio;
	string foto;
	Contacto *contacto;
	list<Cliente*> clientes;
public:
	Inmueble(int id, int superficie, string dir, Estado est, float precio, string foto);
	virtual void getInfo() = 0;
	void addInteresado(Cliente* cliente);
	float calcularPrecio();
	virtual void modificar();
	virtual ~Inmueble();
};

class Terreno : public Inmueble{
	bool alambrado;
	bool luz;
	bool agua;
	bool gas;
public:
	Terreno(int id, int superficie, string dir, Estado est, float precio, string foto, bool alambrado, bool luz, bool agua, bool gas);
	void modificar();
	void getInfo();
};

class Propiedad : public Inmueble{
	int cantHabitaciones;
	int cantBanios;
	bool cochera;
	int cantSuites;
	int porcentajeConstruccion;
	Fecha fechaEstimada;
	EstadoPropiedad estadoProp;
public:
	Propiedad(int id, int superficie, string dir, Estado est, float precio, string foto, int cantHab, int cantBanios, bool cochera, int cantSuites, int porcentaje, Fecha fEstimada, EstadoPropiedad estado);
	void modificar();
	void getInfo();
};

#endif // INMUEBLE_H_

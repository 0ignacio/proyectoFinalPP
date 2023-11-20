#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <iostream>
#include <list>
#include "Inmueble.h"
using namespace std;

class Cliente{
	int id;
	string nombre;
	string mail;
	string telefono;
public:
	Cliente(int id, string nom, string mail, string tel);
};

#endif //CLIENTE_H_

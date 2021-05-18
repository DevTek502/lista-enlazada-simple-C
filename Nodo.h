#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo
{
	private:
		//informacion
		int dato;
		//apuntadores
		Nodo *siguiente;
	public:
		Nodo(int);
		int getDato();
		void setDato(int);
		Nodo * getSiguiente();
		void setSiguiente(Nodo *);
		~Nodo();
	protected:
};

#endif

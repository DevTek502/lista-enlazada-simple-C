#include "Nodo.h"

Nodo::Nodo(int dato)
{
	this->dato=dato;
	this->siguiente=NULL;
}

//get y set int, siguiente
int Nodo::getDato()
{
	return dato;
}

void Nodo::setDato(int dato)
{
	this->dato = dato;
}


Nodo * Nodo::getSiguiente()
{
	return siguiente;
}

void Nodo::setSiguiente(Nodo *apuntador)
{
	this->siguiente = apuntador;
}

Nodo::~Nodo()
{
}

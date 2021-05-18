#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"
using namespace std;

class Lista
{
	private:
		//apuntadores 
		Nodo *primero;
		Nodo *ultimo;
	public:
		Lista();
		bool estadoLista();
		void insertarInicio(int);
		void insertarFinal(int);
		void eliminarIncio();
		void eliminarFinal();
		void imprimirLista();
		~Lista();
	protected:
};

#endif

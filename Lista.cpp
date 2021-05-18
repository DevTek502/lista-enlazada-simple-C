#include "Lista.h"

Lista::Lista()
{
	this->primero=NULL;
	this->ultimo=NULL;
}

bool Lista::estadoLista()
{
	if(this->primero==NULL && this->ultimo==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Lista::insertarInicio(int dato)
{
	Nodo *nuevoElemento = new Nodo(dato);
	if(estadoLista()==true)
	{
		this->primero=nuevoElemento;
		this->ultimo=nuevoElemento;
	}
	else
	{
		nuevoElemento->setSiguiente(this->primero);
		this->primero=nuevoElemento;
	}
}

void Lista::insertarFinal(int dato)
{
	Nodo *nuevoElemento = new Nodo(dato);
	if(estadoLista()==true)
	{
		this->primero=nuevoElemento;
		this->ultimo=nuevoElemento;
	}
	else 
	{
		this->ultimo->setSiguiente(nuevoElemento);
		this->ultimo=nuevoElemento;
	}
}

void Lista::eliminarIncio()
{
	if(estadoLista()==true)
	{
		cout<<"No hay elementos en la lista"<<endl;
	}
	else
	{
		if(this->primero==this->ultimo)
		{
			this->primero=NULL;
			this->ultimo=NULL;
		}
		else
		{
			Nodo *auxPrimero =  this->primero;
			this->primero = this->primero->getSiguiente();
			auxPrimero->setSiguiente(NULL);
		}
	}
}

void Lista::eliminarFinal()
{
	if(estadoLista()==true)
	{
		cout<<"No hay elementos en la lista"<<endl;
	}
	else
	{
		if(this->primero==this->ultimo)
		{
			this->primero=NULL;
			this->ultimo=NULL;
		}
		else
		{
			Nodo *auxPrimero =  this->primero;
			while(auxPrimero->getSiguiente()!=this->ultimo)
			{
				auxPrimero = auxPrimero->getSiguiente();
			}
			this->ultimo=auxPrimero;
			auxPrimero->setSiguiente(NULL);
		}
	}
}

void Lista::imprimirLista()
{
	if(estadoLista()==true)
	{
		cout<<"No hay elementos en la lista"<<endl;
	}
	else
	{
		Nodo *auxPrimero =  this->primero;
		while(auxPrimero!=NULL)
		{
			cout<<"Nodo: "<<auxPrimero->getDato()<<"-->";
			auxPrimero = auxPrimero->getSiguiente();
		}
	}
}


Lista::~Lista()
{
}

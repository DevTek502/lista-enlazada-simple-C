#include <iostream>
#include <conio.h>
#include "Lista.h"
using namespace std;


int main(int argc, char** argv) {
	int numero;
	Lista listaSimple;
	int opMenu;	 	
	 do{
        system("cls");//para borrar en pantalla cuando repita el menu
        cout<<"--Menu--"<<endl;
        cout<<"1. Instear al Inicio "<<endl;
        cout<<"2. Insertar al Final "<<endl;
        cout<<"3. Eliminar al Inicio"<<endl;
        cout<<"4. Eliminar al Final"<<endl;
        cout<<"5. Imprimir Lista"<<endl;
        cout<<"6. Salir"<<endl<<endl;
        cout<<"INGRESE LA OPCION QUE DESEE REALIZAR: ";
        cin>>opMenu;

        switch (opMenu)
        {
            case 1:
            	cout<<"Ingrese un numero: ";
            	cin>>numero;
            	listaSimple.insertarInicio(numero);
                break;

            case 2:
            	cout<<"Ingrese un numero: ";
            	cin>>numero;
            	listaSimple.insertarFinal(numero);
            	break;
            	
            case 3:
            	listaSimple.eliminarIncio();
            	break;
            	
            case 4:
            	listaSimple.eliminarFinal();
            	break;
            	
            case 5: 
				listaSimple.imprimirLista();
				getch();        	
                break; 
        }

    }while(opMenu != 6);
	return 0;
}

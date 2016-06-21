#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct registro
{
       int valor;
       struct registro *sig;       
};

typedef registro nodo ;

bool colaVacia (nodo *inicio)
{
	if (inicio == NULL)
	{
		void iniciarCola();
		return true;
	}

	else
		return false;

}

void iniciarCola (  nodo *primero , nodo *nuevo , nodo *ultimo, int v)
{
	if (primero == NULL)
	{
		nuevo = new (nodo);	
		nuevo -> valor = v;
		nuevo = primero ;
		nuevo->sig =NULL;
	}
	else
	{
		nuevo = new (nodo);	
		nuevo -> valor = v;
		nuevo = ultimo ;
		nuevo->sig =NULL;

		cout <<"hola "<<endl;
		system("Pause");
	}
}

void encolar ()
{

}

void desencolar ()
{
}

void primeroEnCola ()
{
}

void main ()
{
	void colaVacia (); 
	void iniciarCola ();
	void encolar ();
	void desencolar ();
	void primeroEnCola ();
}

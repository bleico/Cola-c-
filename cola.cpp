#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct registro
{
       int valor;
       struct registro *sig;       
}temp;

typedef registro nodo ;

void iniciarCola (  nodo *primero , nodo *nuevo , nodo *ultimo)
{
	nuevo = new (nodo);	

	
}

bool colaVacia (nodo *inicio)
{
	if (inicio ==NULL)
		return true;
	else
		return false;

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

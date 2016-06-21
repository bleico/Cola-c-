
#include <iostream>

using namespace std;

struct registro
{
      int valor;
      struct registro*sig;
};

typedef registro _nodo;

_nodo *crearLista (_nodo *apuntador)
{
return (apuntador = NULL);
}

bool esListaVacia (_nodo *apuntador)
{
if(apuntador==NULL)
return true;
else 
return false;
}

_nodo*insertarEnLista
(int elemento, _nodo *apuntador)
{
_nodo *registroNuevo, *apuntadorAuxiliar;

registroNuevo = new(crearLista);
if(registroNuevo !=NULL)
{
registroNuevo->valor=elemento;
}

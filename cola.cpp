#include <iostream>
#include <stdlib.h>
using namespace std;

struct registro
{
       int valor;
       struct registro *sig;       
}temp;

typedef registro _nodo;

_nodo *crearCola(_nodo *inicio)
{
      return (inicio = NULL);
}

bool esColaVacia(_nodo *inicio)
{
     if (inicio ==NULL)
     return true;
     else
     return false;
}

_nodo *finDeCola (_nodo *inicio)
{
      _nodo *aux;
      aux = inicio;
      
      if (esColaVacia(inicio))
         return NULL;
      else
      {
          while(aux->sig != NULL)
          aux=aux->sig;
      }
      return aux;
}

_nodo *encolar(int elemento, _nodo *inicio)
{
      _nodo *nuevoNodo;
      nuevoNodo = new _nodo;
      nuevoNodo ->valor=elemento;
      nuevoNodo ->sig = NULL;
      
      if(esColaVacia(inicio))
      inicio = nuevoNodo;
      else
      {
          _nodo *ultimoNodo;
          ultimoNodo = finDeCola(inicio);
          ultimoNodo ->sig = nuevoNodo;
      }
      return inicio ;
}

_nodo *desencolar (_nodo *inicio)
{
      _nodo *nodoAEliminar;
      if(!esColaVacia(inicio))
      {
       nodoAEliminar = inicio;
       inicio = inicio->sig;
       delete (nodoAEliminar);
      }
      return inicio;
}

/*void imprimir(_nodo *inicio)
{
     _nodo *aux;
     int n,i,arreglo[n];
     for(i=1;i<=n;i++)
    {                 
     cout<<" InicioCola -> ";
     while (aux!=NULL)
     {
     cout<<aux->valor<<" -> ";
     aux = aux -> sig; 
     }        
     cout<<"NULL"<<endl<<endl;                                                                   
    } 
}*/

int main()
{
    _nodo *inicioCola;
    _nodo *aux;
    inicioCola = aux;
    int n,i,arreglo[n];
    cout<<" Introduzca cantidad de valores que desea introducir : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<" Introduzca valor : ";
    cin>>aux->valor;
                                       
    } 
    inicioCola = crearCola(inicioCola);
    
    for(i=1;i<=n;i++)
    {
    inicioCola = encolar(inicioCola);
    inicioCola = desencolar(inicioCola);
    cout<<" InicioCola -> ";
     while (aux!=NULL)
     {
     cout<<aux->valor<<" -> ";
     aux = aux -> sig; 
     }
     }        
     cout<<"NULL"<<endl<<endl;  
    system("pause");
    return 0;
}

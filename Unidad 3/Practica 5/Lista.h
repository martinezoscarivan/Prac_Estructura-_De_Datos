#include "Nodo.h"
# include <iostream>
using namespace std;
class Lista
{
    private:
    
        Nodo* primero;
        
    public:
        //Método constructor
        Lista()
        {
        primero= NULL;
        }
        void crearLista();
        void insertarLista(int entrada);
        void visualizarLista();
        
};
void Lista::crearLista()
{
 	int x;
 	int num;
 	do
 	{
 	cout<<"Ingresa el numero de Elementos"<<endl;
 	cin>>num;
 	cout<<"\t"<<endl;
 	if(num<0)
 	{
 	cout<<"EL VALOR QUE INGRESO DEBE SER MAYOR A 0, POR FAVOR VUELVE A INTENTARLO"<<endl;
	}
	else 
	{
		cout<<"Los elementos son:"<<endl;
		primero=0;
    	for (int i=1; i<=num; i++)
    	{
    	cin>>x;
   		primero= new Nodo(x, primero);
		}
	}
	}while(num<0);
}
void Lista::insertarLista(int entrada)
{
    Nodo* nuevo;
    
    if(entrada!=-1)
    {nuevo=new Nodo(entrada);
    nuevo->ponerEnlace(primero); 
	primero=nuevo;
    }
}
void Lista::visualizarLista()
{
    Nodo* n;
      n=primero;
      while(n!=NULL)
      { 
         cout<<n->DatoNodo()<<" "<<endl;
         n=n->enlaceNodo();    
      }
}

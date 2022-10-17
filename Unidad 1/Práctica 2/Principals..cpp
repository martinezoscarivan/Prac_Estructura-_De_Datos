# include "Memoria..h"
# include <cstdlib>
# include <iostream>

using namespace std;

int main ( int argc, char * arg[])
{
	int n, ns;
	int salir=1;
	
	do
	{
		system("color E");
	system("cls");
	cout<<"                 PRACTICA 2                "<<endl;
	cout<<"         MANEJO DE MEMORIA DINAMICA       "<<endl;
	cout<<"         OSCAR IVAN MARTINEZ DONJUAN       "<<endl;
	cout<<"\n"<<endl;
	do
	{
	cout<<" INGRESE LA CANTIDAD DE NUMEROS QUE DESEA VISUALIZAR: "<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"DEBES INGRESAR NUMEROS MAYORES A 0"<<endl;
	}
	}while(n<=0);
	Memoria M(n);
	M.setNumeros(n);
	M.visualizar();
    
	cout<<"INGRESE EL NUMERO A BUSCAR DENTRO DEL ARREGLO:"<<endl;
	cin>>ns;
	M.buscaN(ns);
	M.Liberar();	
	getchar();
	cout<<"\n"<<endl;
	cout<<"DESEA SALIR DEL PROGRAMA?"<<endl; 
	cout<<"SI LA OPCION ES: "<<endl;
	cout<<"SI = OPRIME UN NUMERO DIFERENTE DE 1"<<endl;
	cout<<"NO = OPRIME 1"<<endl;
	cout<<"ELIGE UNA OPCION:"<<endl;
	cin>>salir;		
	
	}while(salir==1);

	cout<<"\t"<<endl;
	system("pause");
	return 0;
}

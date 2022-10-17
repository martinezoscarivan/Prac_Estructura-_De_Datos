# include "Potencia.h"
# include <cstdlib>
# include <iostream>
using namespace std;
int main (int argc, char * arg[])
{
	int n, e, p, S, salir;
	int OPC;
	
	do
	{
	cout<<"             BIENVENIDO                      "<<endl;
	cout<<"  ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN       "<<endl;
	cout<<"         PRACTICA UNIDAD 2    "<<endl;
	cout<<"    RECURSIVIDAD Y ITERATIVA      "<<endl;
	do
	{
	cout<<"Ingresa la base:"<<endl;
	cin>>n;
	if (n<0)
	{
		cout<<"INGRESA VALORES MAYORES A O"<<endl;
	}
}while(n<0);
	cout<<"Ingresa el exponente del numero:"<<endl;
	cin>>e;	
			Potencia P;	
	cout<<"            	               MENU FORMAS DE OBTENER POTENCIAS                  "<<endl;
	cout<<"\n"<<endl;	
	cout<<"         1. Recursividad"<<endl;
	cout<<"         2. Iterativa"<<endl;
	cout<<"         3. SALIR"<<endl;
	cout<<"         Elige una opcion: "<<endl;
	cin>>OPC;
	switch(OPC)
	{
		case 1:
			system("cls");
			cout<<" MOSTRAR POTENCIA CON RECURSIVIDAD "<<endl;
			P.recursividad(n, e);
			P.visualizar();
			cout<<"\n"<<endl;
			break;
			case 2: 
			system("cls");
			cout<<" MOSTRAR POTENCIA CON ITERATIVA"<<endl;
			P.iterativa(n, e);
			P.visualizarin();
			cout<<"\n"<<endl;
			break;
			case 3:
				system("cls");
				cout<<"SELECCIONO LA OPCION SALIR"<<endl;
				cout<<"Esta seguro que desea salir?"<<endl;
				cout<<"\n 1. Si"<<endl;
				cout<<"\n 2. No"<<endl;
				cout<<"Seleccione una opcion"<<endl;
				cin>>S;
				cout<<"\n \n";
				if (S==1)
				{
				return 0;
				}
    			break;	
	default:
		cout<<"LA OPCION QUE SELECCIONO NO EXISTE"<<endl;
	}
}while(salir<=3);
	
	getchar();
	system("pause");
	return 0;
}

# include "Sucesion.h"
# include <cstdlib>
# include <iostream>

using namespace std;
int main (int argc, char * arg[])
{
	int n, S, salir;
	int OPC;
	do
	{
		Sucesion SF(n);
	cout<<"               BIENVENIDO                      "<<endl;
	cout<<"   ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN       "<<endl;
	cout<<"            PRACTICA UNIDAD 2    "<<endl;
	cout<<"   MENU FORMAS DE OBTENER SUCESION FIBONACCI      "<<endl;
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
			cout<<" SUCESION RECURSIVA "<<endl;
			do
			{
			cout<<"INGRESA EL NUMERO HASTA DONDE DESEA LLEGAR LA SUCESION:"<<endl;
			cin>>n;
			if(n<0)
			{
			cout<<"Ingresa valores mayores a 0"<<endl;
			}
			}while(n<0);
			SF.SFR(n);
			SF.visualizar(n);
			SF.liberar();
			break;
			
				case 2:
				system("cls");
				cout<<" SUCESION ITERATIVA "<<endl;
				do
				{
				cout<<"INGRESA EL NUMERO HASTA DONDE DESEA LLEGAR LA SUCESION:"<<endl;
				cin>>n;	
				if(n<0)
				{
				cout<<"Ingresa valores mayores a 0"<<endl;
				}
				}while(n<0);
				SF.SFI(n);
				SF.liberar();
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

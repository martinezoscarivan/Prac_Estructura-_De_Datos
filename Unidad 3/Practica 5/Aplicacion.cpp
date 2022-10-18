# include <iostream>
# include "Lista.h"
using namespace std;
int main()
{
	int nm, S, salir;
	int OPC;
	Lista R;
	do
	{
	cout<<"                 BIENVENIDO           "<<endl;
	cout<<" ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN"<<endl;
	cout<<"              PROGRAMA LISTAS      "<<endl; 
	cout<<"                   MENU                     "<<endl;
	cout<<"     1. Insertar Elemento. "<<endl;
	cout<<"     2. Mostrar Elemento. "<<endl;
	cout<<"     3. Salir. "<<endl;
	cout<<"     Elige una opcion: "<<endl;
	cin>>OPC;
	switch(OPC)
	{
		case 1:system("cls");
		cout<<"  Insertar Elemento  "<<"\t"<<endl;	
		R.crearLista();
			break;
				case 2: system("cls");
				cout<<"  Mostrar Elementos  "<<"\t"<<endl;
				R.visualizarLista();
				cout<<"\n"<<endl;
				break;
					case 3: system("cls");
					cout<<"   SALIR   "<<endl;
					cout<<"Esta seguro que desea salir?"<<endl;
					cout<<"\n 1. Si"<<endl;
					cout<<"\n 2. No"<<endl;
					
					cout<<"Seleccione una opcion"<<endl;
					cin>>S;
					cout<<"\n";
					if (S==1)
					{
					return 0;
					}
  		  			break;	
default:
cout<<"LA OPCION QUE SELECCIONO NO EXISTE, PORFAVOR VUELVE A SELECCIONAR OTRA"<<endl;
	}
	}while(salir<=3);
	getchar();
	system("pause");
	return 0;
	}

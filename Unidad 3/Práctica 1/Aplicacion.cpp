# include <iostream>
# include "ColaLineal.h"
using namespace std;
int main()
{
	ColaLineal cola;
	int numero;
	int S, salir;
	int OPC;
	do
	{
	cout<<"                 BIENVENIDO           "<<endl;
	cout<<" ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN"<<endl;
	cout<<"         PROGRAMA DE ESTRUCTURAS LINEALES      "<<endl;
	cout<<"              PRACTICA 1 COLAS               "<<endl;
	cout<<"                   MENU                     "<<endl;
	cout<<"     1. Insertar Elemento"<<endl;
	cout<<"     2. Eliminar Elemento"<<endl;
	cout<<"     3. Mostrar Elemento al frente"<<endl;
	cout<<"     4. Mostrar Cola"<<endl;
	cout<<"     5. SALIR"<<endl;
	cout<<"     Elige una opcion: "<<endl;
	cin>>OPC;
	switch(OPC)
	{
		case 1:
			
			system("cls");
			do
			{
			cout<<"Ingresa los elementos de la fila"<<endl;
			cin>>numero;
			if (cola.colaLlena())
			{
				cout<<" LO SIENTO NO HAY ESPACIO EN LA FILA "<<endl;
				cout<<"\n"<<endl;
			}
			else
			{
			cola.insertar(numero);
			}
			}while(numero<0);
			break;
				case 2: system("cls");
				if(cola.colaVacia())
				{
				cout<<"NO HAY ELEMENTOS PARA QUITAR"<<endl;
				}
				else
				{
				numero=cola.quitar();
				cout<< numero <<" Se elimino de la cola "<<endl;
				}
				break;
					case 3:
						system("cls");
						if(cola.colaVacia())
						{
							cout<<"LA COLA ESTA VACIA"<<endl;				
						}
						else 
						{
						cout<<"El numero al frente es: "<<cola.frenteCola()<<endl;
						cout<<"\n"<<endl;	
						}
						break;		
						case 4:
							system("cls");
							if (cola.colaVacia())
							{
							cout<<"NO HAY ELEMENTOS PARA MOSTRAR EN LA COLA"<<endl;	
							}
							else
							{
							cout<<" -- LA COLA -- "<<endl;
							while(!cola.colaVacia())
							{
								numero=cola.quitar();
								cout<<    "["<<numero<<"]"  <<endl;
							}
							}
							break;
								case 5:
								system("cls");
								cout<<"SELECCIONO LA OPCION SALIR"<<endl;
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
	cout<<"LA OPCION QUE SELECCIONO NO EXISTE"<<endl;
	}
	}while(salir<=5);
	getchar();
	system("pause");
	return 0;
	}

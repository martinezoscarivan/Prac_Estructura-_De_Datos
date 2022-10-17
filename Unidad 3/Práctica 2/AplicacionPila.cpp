# include <iostream>
# include "PilaLineal.h"
using namespace std;
int main()
{
	PilaLineal p;
	int numero;
	int S, salir;
	int OPC;
	do
	{
	cout<<"                 BIENVENIDO           "<<endl;
	cout<<" ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN"<<endl;
	cout<<"         PROGRAMA DE ESTRUCTURAS LINEALES      "<<endl;
	cout<<"              PRACTICA 2 PILAS               "<<endl;
	cout<<"                   MENU                     "<<endl;
	cout<<"     1. Insertar Elemento"<<endl;
	cout<<"     2. Eliminar Elemento"<<endl;
	cout<<"     3. Mostrar Cima"<<endl;
	cout<<"     4. Mostrar Pila"<<endl;
	cout<<"     5. SALIR"<<endl;
	cout<<"     Elige una opcion: "<<endl;
	cin>>OPC;
	switch(OPC)
	{
		case 1:
			
			system("cls");
			do
			{
			cout<<"Ingresa los elementos de la Pila"<<endl;
			cin>>numero;
			if (p.pilaLlena())
			{
				cout<<" LO SIENTO NO HAY ESPACIO EN LA PILA "<<endl;
				cout<<"\n"<<endl;
			}
			else
			{
			p.insertar(numero);
			}
			}while(numero<0);
			break;
				case 2: system("cls");
				if(p.pilaVacia())
				{
				cout<<"NO HAY ELEMENTOS PARA QUITAR"<<endl;
				}
				else
				{
				numero=p.quitar();
				cout<< numero <<" Se elimino de la Pila "<<endl;
				}
				break;
					case 3:
						system("cls");
						if(p.pilaVacia())
						{
							cout<<"LA PILA ESTA VACIA"<<endl;				
						}
						else 
						{
						cout<<"EL elemento de la cima es: "<<p.cimaPila()<<endl;
						cout<<"\n"<<endl;	
						}
						break;		
						case 4:
							system("cls");
							if (p.pilaVacia())
							{
							cout<<"NO HAY ELEMENTOS PARA MOSTRAR EN LA PILA"<<endl;	
							}
							else
							{
							p.mostrarPila();
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

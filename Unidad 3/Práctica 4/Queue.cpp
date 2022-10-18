# include <iostream>
# include <cstdlib>
# include <queue>
using namespace std;
int main()
{
	queue<int> s;
	int numero;
	int S, salir;
	int OPC;
	do
	{
	cout<<"                 BIENVENIDO           "<<endl;
	cout<<" ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN"<<endl;
	cout<<"         PROGRAMA DE ESTRUCTURAS LINEALES      "<<endl;
	cout<<"              PRACTICA 2 COLAS               "<<endl;
	cout<<"                   MENU                     "<<endl;
	cout<<"     1. Insertar Elemento."<<endl;
	cout<<"     2. Eliminar Elemento."<<endl;
	cout<<"     3. Mostrar Frente."<<endl;
	cout<<"     4. Mostrar Final."<<endl;
	cout<<"     5. Mostrar elementos de la cola."<<endl;
	cout<<"     6. Salir."<<endl;
	cout<<"     Elige una opcion: "<<endl;
	cin>>OPC;
	switch(OPC)
	{
			case 1:system("cls");
			cout<<"SELECCIONO INGRESAR LOS ELEMENTOS"<<endl;
			do
			{
			cout<<"Ingresa los elementos de la fila"<<endl;
			cin>>numero;
			if(numero<0)
			{
				cout<<"INGRESA VALORES MAYORES A 0"<<endl;
			}
			s.push(numero);
			}while(numero<0);
			break;
			
				case 2: system("cls");
				cout<<"SELECCIONO ELIMINAR DATOS DE LA COLA"<<endl; 
				if(s.empty())
				{
				cout<<"NO HAY ELEMENTOS PARA QUITAR"<<endl;
				}
				else
				{ 
				cout<<s.front()<<" Se elimino de la cola "<<endl;
				s.pop(); 
				}
				break;
					case 3: system("cls");
						cout<<"SELECCIONO MOSTRAR ELEMENTO AL FRENTE DE LA COLA"<<endl;
						if(s.empty())
						{
							cout<<"LA COLA ESTA VACIA"<<endl;				
						}
						else 
						{
						cout<<"El elemento al frente de la cola es: "<<s.front()<<endl;
						cout<<"\n"<<endl;	
						}
						break;		
						case 4:
						system("cls");
						cout<<"SELECCIONO MOSTRAR ELEMENTO FINAL DE LA COLA"<<endl;
						if(s.empty())
						{
							cout<<"LA COLA ESTA VACIA"<<endl;				
						}
						else 
						{
						cout<<"El elemento final de la cola es: "<< s.back() <<endl;
						cout<<"\n"<<endl;	
						}
							break;
								case 5:
								system("cls");
								if (s.empty())
								{
								cout<<"NO HAY ELEMENTOS PARA MOSTRAR EN LA COLA"<<endl;	
								cout<<"\n"<<endl;
								}
								else
								{
								cout<<" -- LA COLA -- "<<endl;
								while(!s.empty())
								{
								cout<<s.size()<<" =["<<s.front()<<"]"  <<endl;
								s.pop();
								}
								}
								
  					  			break;	
									case 6:
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

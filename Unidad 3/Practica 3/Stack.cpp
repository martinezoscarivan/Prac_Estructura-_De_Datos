# include <iostream>
# include <cstdlib>
# include <stack>
using namespace std;
int main()
{
	stack<int> s;
	int numero;
	int S, salir;
	int OPC;
	do
	{
	cout<<"                 BIENVENIDO           "<<endl;
	cout<<" ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN"<<endl;
	cout<<"         PROGRAMA DE ESTRUCTURAS LINEALES      "<<endl;
	cout<<"              PRACTICA 3 PILAS               "<<endl;
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
			if(numero<0)
			{
				cout<<"Ingresa valores mayores a 0"<<endl;
			}
			else
			{
			s.push(numero);
			}
			}while(numero<0);
			break;
				case 2: system("cls");
				if(s.empty())
				{
				cout<<"NO HAY ELEMENTOS PARA QUITAR"<<endl;
				}
				else
				{
					
				cout<<s.top()<<" Se elimino de la Pila "<<endl;		
				s.pop();
				}
				break;
					case 3:
						system("cls");
						if(s.empty())
						{
							cout<<"LA PILA ESTA VACIA"<<endl;				
						}
						else 
						{
						cout<<"EL elemento de la pila en la cima es: "<<s.top()<<endl;
						cout<<"\n"<<endl;	
						}
						break;		
						case 4:
							system("cls");
							if (s.empty())
							{
							cout<<"NO HAY ELEMENTOS PARA MOSTRAR EN LA PILA"<<endl;	
							}
							else
							{
							cout<<"LOS ELEMENTOS DE LA PILA SON:"<<endl;
							while(! s.empty())
							{
							cout<<s.top() <<" "<<endl;
							s.pop();
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

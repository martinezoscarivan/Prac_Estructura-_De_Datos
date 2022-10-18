# include <iostream>
# include <cstdlib>
# include <list>
using namespace std;
int main()
{
	list<int> ls;
	int numero;
	int S, salir;
	int OPC;
	do
	{
	cout<<"                 BIENVENIDO           "<<endl;
	cout<<" ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN"<<endl;
	cout<<"         PROGRAMA DE ESTRUCTURAS LINEALES      "<<endl;
	cout<<"              PRACTICA 6 LIST               "<<endl;
	cout<<"                   MENU                     "<<endl;
	cout<<"     1. Insertar Elementos a la lista por el frente"<<endl;
	cout<<"     2. Insertar Elementos a la lista por el final"<<endl;
	cout<<"     3. Mostrar Elementos de la lista"<<endl;
	cout<<"     4. Mostrar el elemento al frente"<<endl;
	cout<<"     5. Mostrar el elemento al final"<<endl;
	cout<<"     6. Eliminar un elemento al frente"<<endl;
	cout<<"     7. Eliminar un elemento al final"<<endl;
	cout<<"     8. Eliminar todos los elementos de la lista"<<endl;
	cout<<"     9. Salir"<<endl;
	cout<<"     Elige una opcion: "<<endl;
	cin>>OPC;
	switch(OPC)
	{
		case 1:
			system("cls");
			cout<<"***** Elemento al frente ***** "<<endl;
			cout<<"Ingresa los elementos a la lista por el frente"<<endl;
			cin>>numero;
			ls.push_front(numero);
			break;
				case 2: system("cls");
				cout<<"***** Elemento al final *****"<<endl;
				cout<<"Ingresa elementos a la lista por el final"<<endl;
				cin>>numero;
				ls.push_back(numero);
				break;
					case 3:
						system("cls");
						cout<<"***** Mostrar elementos de la lista *****"<<endl;
						if(ls.empty())
						{
							cout<<"No hay elementos para mostrar en la lista"<<endl;				
						}
						else 
						{  
						list<int>::iterator it =ls.begin();
						
						cout<<"Los Elementos de la lista son:"<<endl;
						while(it !=ls.end())
						{
						cout<< "\t" << *it++ << endl;
						}
						cout<<endl;
						}
						break;		
							case 4: system("cls");
							cout<<"***** Mostrar elemento al frente *****"<<endl;
							if(ls.empty())
							{
							cout<<"LA Lista esta vacia"<<endl;				
							}
							else 
							{
							cout<<"EL elemento al frente es: "<<ls.front()<<endl;
							cout<<"\n"<<endl;	
							}
							break;
								case 5: system("cls");
								cout<<"***** Mostrar elemento al final *****"<<endl;
								if(ls.empty())
								{
								cout<<"LA Lista esta vacia"<<endl;				
								}
								else 
								{
								cout<<"EL elemento al final es: "<<ls.back()<<endl;
								cout<<"\n"<<endl;	
								}
								break;
									case 6: system("cls");
									cout<<" ***** Eliminar elemento al frente *****"<<endl;
									if(ls.empty())
									{
									cout<<"NO HAY ELEMENTOS PARA QUITAR"<<endl;
									}
									else
									{
									cout<< ls.front() <<" Se elimino "<<endl;
									ls.pop_front();
									cout<<"\n"<<endl;
									}
									break;
										case 7:system("cls");
										cout<<"***** Eliminar elemento al final *****"<<endl;
										if(ls.empty())
										{
										cout<<"NO HAY ELEMENTOS PARA QUITAR"<<endl;
										}
										else
										{
										cout<< ls.back() <<" Se elimino "<<endl;
										ls.pop_back();
										cout<<"\n"<<endl;
										}
										break;
											case 8:system("cls");
											cout<<"***** Eliminar todos los elementos de la lista *****"<<endl;
											if(ls.empty())
											{
											cout<<"NO HAY ELEMENTOS PARA QUITAR"<<endl;
											}
											else
											{
											ls.clear();
											cout<<" Se eliminaron todos los elementos de la lista"<<endl;
											}
											cout<<"\n"<<endl;
											break;
												case 9:
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
	}while(salir<=9);
	getchar();
	system("pause");
	return 0;
	}


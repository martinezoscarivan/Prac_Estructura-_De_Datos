# include "Rectangulo.h"
# include "Triangulo.h"
# include "Poligono.h"
# include "Circulo.h"
# include "Cuadrado.h"
# include <cstdlib>
# include <iostream>

using namespace std;
int main (int argc, char * arg[])
{

	// Declaracion de Variables.
	float h, b, area, perimetro, lA, lB, lC, a, r, l, lad;    
	int OPC, nL, salir, S;
	
		Rectangulo R;
		Triangulo T;
		Poligono P;
		Circulo C;
		Cuadrado Cu;
		
		do
		{		
	cout<<"                                     BIENVENIDO                      "<<endl;
	cout<<"		        CALCULADORA AREA Y PERIMETRO DE FIGURAS"<<endl;
	cout<<"                       ELABORADO POR OSCAR IVAN MARTINEZ DONJUAN       "<<endl;
	cout<<"            	                  MENU DE FIGURAS                  "<<endl;
	cout<<"\n"<<endl;	
	cout<<"         1. RECTANGULO"<<endl;
	cout<<"         2. TRIANGULO"<<endl;
	cout<<"         3. POLIGONO"<<endl;
	cout<<"         4. CIRCULO"<<endl;
	cout<<"         5. CUADRADO"<<endl;
	cout<<"         6. SALIR"<<endl;
	cout<<"         Elige una opcion: "<<endl;
	cin>>OPC;
	switch(OPC)
	{
		case 1:system("cls");
		// Declaracion de mensajes
	cout<<"   FIGURA RECTANGULO  "<<endl;
	do
	{
	cout<<"Escribe la Altura"<<endl;
	cin>>h;
	if(h<=0)
	{

		cout<<"DEBES INGRESAR MAYORES A 0"<<endl;
	}
	}while(h<=0);
	do
	{
	cout<<"Escribe la Base:"<<endl;
	cin>>b;
	if(b<=0)
	{
		cout<<"DEBES INGRESAR VALORES MAYORES A O"<<endl;
	}
	}while(b<=0);
	cout<<"\t"<<endl;
		R.setAltura(h);
		R.setBase(b);
		R.calcularArea();
		R.calcularPerimetro();
		R.visualizar();
		cout<<"\n"<<endl;
		break;
			case 2:	system("cls");
			cout<<"   FIGURA TRIANGULO  "<<endl;
			do
			{
			cout<<"Escribe el valor del Lado A:"<<endl;
			cin>>lA;
			if(lA<=0)
			{
				cout<<"DEBES INGRESAR VALORES MAYORES A 0"<<endl;
			}
			}while(lA<=0);
			do
			{
			cout<<"Escribe el valor del lado B:"<<endl;
			cin>>lB;
			if(lB<=0)
			{
				cout<<"DEBES INGRESAR VALORES MAYORES A 0"<<endl;
			}
			}while(lB<=0);
			do
			{
			cout<<"Escribe el valor del lado C:"<<endl;
			cin>>lC;
			if(lC<=0)
			{
				cout<<"DEBES INGRESAR VALORES MAYORES A O"<<endl;
			}
			}while(lC<=0);
			T.setLadoA(lA);
			T.setLadoB(lB);
			T.setLadoC(lC);
			T.calcularArea();
			T.calcularPerimetro();
			T.visualizar();
			cout<<"\n"<<endl;
			break;
				case 3:system("cls");
				cout<<"   FIGURA POLIGONO  "<<endl;
				do
				{
				cout<<"Escribe el numero de lados del Poligono:"<<endl;
				cin>>nL;
				if(nL<=3)
				{
				cout<<"UN POLIGONO DEBE TENER MAS DE TRES LADOS"<<endl;
				}
				}while(nL<=3);
				cout<<"\t"<<endl;
				do 
				{
				cout<<"Escribe el valor del lado:"<<endl;
				cin>>l;	
				if(l<=0)
				{
					cout<<"DEBES INGRESAR VALORES MAYORES A 0"<<endl;
				}
				}while(l<=0);
				cout<<"\t"<<endl;
				do
				{
				cout<<"Escribe el valor del Apotema:"<<endl;
				cin>>a;
				if(a<=0)
				{
				cout<<"DEBES INGRESAR VALORES MAYORES A 0"<<endl;
				}
				}while(a<=0);
				
				P.setNumL(nL);
				P.setLado(l);
				P.setApotema(a);
				P.calcularPerimetro();
				P.calcularArea();
				P.visualizar();
				cout<<"\n"<<endl;
				break;
					case 4: system("cls");
					cout<<"   FIGURA CIRCULO  "<<endl;
					do
					{
					cout<<"Escribe el valor del radio:"<<endl;
					cin>>r;
					if(r<=0);
					{
					cout<<"DEBES INGRESAR VALORES MAYORES A 0"<<endl;
					}
					}while(r<=0);
					C.setRadio(r);
					C.calcularArea();
					C.calcularPerimetro();
					C.visualizar();
					cout<<"\n"<<endl;
					break;
						case 5: system("cls");
						cout<<"   FIGURA CUADRADO  "<<endl;
						do{
						cout<<"Escribe el valor del lado:"<<endl;
						cin>>lad;
						if(lad<=0)
						{
							cout<<"DEBES INGRESAR VALORES MAYORES A 0"<<endl;
						}
						}while(lad<=0);
						Cu.setLado(lad);
						Cu.calcularArea();
						Cu.calcularPerimetro();
						Cu.visualizar();
						cout<<"\n"<<endl;
						break;
							case 6: system("cls");
    							cout<<"Seleccionaste Salir"<<endl;
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
cout<<" POR FAVOR VUELVE A ESCOGER OTRA OPCION. "<<endl;
}
}while(salir<=6);
	getchar();
	system("pause");
	return 0;
}

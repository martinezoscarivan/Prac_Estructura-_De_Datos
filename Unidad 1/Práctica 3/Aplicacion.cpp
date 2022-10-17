# include "Fecha.h"
# include <cstdlib>
# include <iostream>
using namespace std;
int main (int argc, char * arg[])
{
	int dia=0, mes=0, annio=0, cdia=0, cmes=0, can=0;
	int salir=1 ;
	Fecha f;
		do
		{		
							system("cls");
	cout<<"                   BIENVENIDO                      "<<endl;
	cout<<"                 EXAMEN UNIDAD 1            "<<endl;
	cout<<"               FECHA: DIA, MES Y AÑO  "  <<endl;
	cout<<"            OSCAR IVAN MARTINEZ DONJUAN       "<<endl;
	cout<<"\n"<<endl;
	cout<<"              FECHA DEL DIA DE HOY              "<<endl;
	do
	{
	cout<<"INGRESA EL DIA: "<<endl;
	cin>>dia;
	if(dia<0 || dia>31)
	{
	cout<<" INGRESA VALORES CORRECTOS "<<endl;
	}
	}while(dia<0 || dia>31);
	
	
	do
	{
	cout<<"INGRESA EL MES"<<endl;
	cin>>mes;
	if(mes<0 || mes >12)
	{
		cout<<"INGRESA VALORES CORRECTOS"<<endl;	
	}
	}while(mes<0 || mes >12);
	
	do
	{
	cout<<"INGRESA EL ANNIO"<<endl;
	cin>>annio;
	if(annio<1900 || annio >9999)
	{
		cout<<"INGRESA VALORES CORRECTOS"<<endl;
	}
	}while(annio<1900 && annio>9999);
	f.fecha(dia, mes, annio);
	f.visualizarFecha();
	cout<<"\n"<<endl;
	cout<<"    INGRESA LOS DATOS DE TU CUMPLEAÑOS              "<<endl;
	do
	{
	cout<<"INGRESA EL DIA: "<<endl;
	cin>>cdia;
	if (cdia<0 || cdia>31)
	{
		cout<<"INGRESA VALORES CORRECTOS"<<endl;
	}
	}while(cdia<0 || cdia>31);
	
	do
	{
	cout<<"INGRESA EL MES"<<endl;
	cin>>cmes;
	if(cmes<0 || cmes >12)
	{
		cout<<"INGRESA VALORES CORRECTOS"<<endl;	
	}
	}while(cmes<0 || cmes >12);
	
	do
	{
	cout<<"INGRESA EL AÑO"<<endl;
	cin>>can;
	if(can<1900 || can >9999)
	{
		cout<<"INGRESA VALORES CORRECTOS"<<endl;
	}
	}while(can<1900 && can>9999);
	
	
	
	getchar();
	f.fechac(cdia, cmes, can);
	f.visualizarFechac();
	cout<<"\n"<<endl;
	f.compararFecha();
	
	
	cout<<"\n"<<endl;
	cout<<"DESEA SALIR DEL PROGRAMA?"<<endl; 	
	cout<<"SI LA OPCION ES: "<<endl;
	cout<<"SI = OPRIME UN NUMERO DIFERENTE DE 1"<<endl;
	cout<<"NO = OPRIME 1"<<endl;
	cout<<"ELIGE UNA OPCION:"<<endl;
	cin>>salir;		

}while(salir==1);

	getchar();
	system("pause");
	return 0;

}

# include <cstdlib>
# include <iostream>

using namespace std;

class Fecha
{
	private:
		int dia, mes, annio, diac, mesc, anic;
		
	public:
		Fecha() { dia=0, mes=0; annio=0; diac=0; mesc=0; anic=0;}
		void fecha(int d, int m, int a);
		void fechac(int di, int me, int anc);
		void visualizarFecha();
		void visualizarFechac();
		void compararFecha();
};
void Fecha::fechac(int di, int me, int anc)
{
	diac=di;
	mesc=me;
	anic=anc;
}

void Fecha::visualizarFechac()
{
	cout<<"         FECHA DE MI CUMPLEAÑOS            "<<endl;
	cout<<"           DIA / MES / AÑO  "<<endl;
	cout<<" MI CUMPLEÑOS ES El: " << diac << " de " <<mesc <<" de " << anic <<endl;
}

void Fecha::visualizarFecha()
{
	cout<<"            FECHA ACTUAL ES     "<<endl;
	cout<<"         DIA /    MES    /   AÑO "<<endl;
	cout<<" FECHA ES : "<< dia <<" de "<< mes << " de "<< annio <<endl;
}

void Fecha::fecha(int d, int m, int a)
{
	dia=d;
	mes=m;
	annio=a;
}

void Fecha::compararFecha()
{
	if(dia%diac || mes%mesc)
	{
		cout<<"\n"<<endl;
	cout<<"   Today is NOT Your Birthday"<<endl;
	cout<<" Lo siento, hoy no es tu cumpleaños"<<endl;
	}
	else 
	{ 
	cout<<"	Today is Your Birthday"<<endl;
	cout<<"            o           "<<endl;
	cout<<"        Feliz Cumpleaños "<<endl;
	}
}

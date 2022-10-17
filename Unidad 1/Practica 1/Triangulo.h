# include <cstdlib>
# include <iostream>
# include <math.h>
using namespace std;

class Triangulo
{
	private:
		float area, perimetro, ladoA, ladoB, ladoC, sp;
	public:
		Triangulo() {area=0; perimetro=0; ladoA=0; ladoB=0; ladoC=0; sp=0; }
		void calcularPerimetro();
		void calcularArea();
		void setLadoA(float lA);
		void setLadoB(float lB);
		void setLadoC(float lC);
		void visualizar();
};

void Triangulo::visualizar()
{
	cout<<"FIGURA TRIANGULO"<<endl;
	cout<<"LADO UNO = "<< ladoA <<endl;
	cout<<"LADO DOS = "<< ladoB <<endl;
	cout<<"LADO TRES = "<< ladoC <<endl;
	cout<<"AREA = "<< area <<endl;
	cout<<"PERIMETRO = "<< perimetro<<endl;
}

void Triangulo::calcularArea()
{
	sp = ((ladoA+ladoB+ladoC)/2);
	area = sqrt(sp*(sp - ladoA)*(sp-ladoB)*(sp -ladoC));
}

void Triangulo::calcularPerimetro()
{
	perimetro= (ladoA + ladoB + ladoC);
}
void Triangulo::setLadoA(float lA)
{
	ladoA=lA;
}

void Triangulo::setLadoB(float lB)
{
	ladoB=lB;
}

void Triangulo::setLadoC(float lC)
{
	ladoC=lC;
}


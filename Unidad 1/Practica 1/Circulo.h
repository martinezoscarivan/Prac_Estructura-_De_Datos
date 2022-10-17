# include <cstdlib>
# include <iostream>

using namespace std;

class Circulo
{
	private:
		float area, perimetro, pi, radio;
		
	public:
		Circulo() { area=0; perimetro=0; pi=3.1416; radio=0;}
		void calcularPerimetro();
		void calcularArea();
		void setRadio(float r);
		void visualizar();
};

void Circulo::visualizar()
{
	cout<<"FIGURA CIRCULO"<<endl;
	cout<<"RADIO = "<< radio <<endl;
	cout<<"AREA = "<< area <<endl;
	cout<<"PERIMETRO = "<< perimetro <<endl;
}

void Circulo::calcularArea()
{
	area= pi*radio*radio;
}

void Circulo::calcularPerimetro()
{
	perimetro= 2* pi* radio;
}
void Circulo::setRadio(float r)
{
	radio=r;
}

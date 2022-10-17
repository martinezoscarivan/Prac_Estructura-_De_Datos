# include <cstdlib>
# include <iostream>

using namespace std;

class Rectangulo
{
	private:
		float area, perimetro, altura, base;
		
	public:
		Rectangulo() { area=0; base=0; altura=0; perimetro=0; }
		void calcularPerimetro();
		void calcularArea();
		void setBase(float b);
		void setAltura(float h);
		void visualizar();
};

void Rectangulo::visualizar()
{
	cout<<"FIGURA RECTANGULO"<<endl;
	cout<<"BASE= "<< base <<endl;
	cout<<"ALTURA= "<< altura <<endl;
	cout<<"AREA = "<< area <<endl;
	cout<<"PERIMETRO = "<< perimetro<<endl;
}

void Rectangulo::calcularArea()
{
	area= base * altura;
}
void Rectangulo::calcularPerimetro()
{
	perimetro= (2*base + 2*altura);
}
void Rectangulo::setBase(float b)
{
	base=b;
}
void Rectangulo::setAltura(float h)
{
	altura=h;
}


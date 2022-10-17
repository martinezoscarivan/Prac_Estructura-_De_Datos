# include <cstdlib>
# include <iostream>
using namespace std;
class Cuadrado
{
	private:
		float area, perimetro, lado;
		
	public:
		Cuadrado() { area=0; perimetro=0; lado=0;}
		void calcularPerimetro();
		void calcularArea();
		void setLado(float lad);
		void visualizar();
};

void Cuadrado::visualizar()
{
	cout<<"FIGURA CUADRADO"<<endl;
	cout<<"LADO= "<< lado <<endl;
	cout<<"AREA = "<< area <<endl;
	cout<<"PERIMETRO = "<< perimetro <<endl;
}

void Cuadrado::calcularArea()
{
	area= (lado*lado);
}
void Cuadrado::calcularPerimetro()
{
	perimetro= (lado+lado+lado+lado);
}
void Cuadrado::setLado(float lad)
{
	lado=lad;
}

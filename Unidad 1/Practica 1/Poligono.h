# include <cstdlib>
# include <iostream>

using namespace std;

class Poligono
{
	private:
		float area, perimetro, lado, apotema;
		int numL;
		
	public:
		Poligono() { area=0; perimetro=0; apotema=0; numL=0; lado=0;}
		void calcularPerimetro();
		void calcularArea();
		void setNumL(int nL);
		void setApotema(float a);
		void setLado(float l);
		void visualizar();
};

void Poligono::visualizar()
{
	cout<<"FIGURA POLIGONO"<<endl;
	cout<<"NUMERO DE LADO = "<< numL <<endl;
	cout<<"LADO = "<< lado <<endl;
	cout<<"APOTEMA = "<< apotema <<endl;
	cout<<"AREA = "<< area <<endl;
	cout<<"PERIMETRO = "<< perimetro <<endl;
}

void Poligono::calcularArea()
{
	area= (perimetro * apotema)/2;	
}

void Poligono::calcularPerimetro()
{
	perimetro= (numL*lado);
}

void Poligono::setLado(float l)
{
	lado= l;
}

void Poligono::setNumL(int nL)
{
	numL=nL;
}
void Poligono::setApotema(float a)
{
	apotema=a;
}

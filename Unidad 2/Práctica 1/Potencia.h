# include <cstdlib>
# include <iostream>

using namespace std;

class Potencia
{
	private:
		int p;
		
	public:
		Potencia() { p=0;}
		int recursividad(int x, int n);
		void visualizar();
		int iterativa(int x, int n);
		void visualizarin();
};

int Potencia::iterativa(int x, int n)
{
	p=1;
	for (int T=1; T<=n; T++)
	{
	p= p * x;
	}
	return p;
}
void Potencia::visualizarin()
{
	
	cout<<"  **** FORMA ITERATIVA **** "<<endl;
	cout<<"LA POTENCIA ES: "<< p <<endl;
}

int Potencia::recursividad(int x, int n)
{
 if(n==0)
 {
 	return 1;
 }
 else 
 {
 	return p=x * recursividad(x, n-1);//
 }
}

void Potencia::visualizar()
{
	cout<<" **** FORMA RECURSIVIDAD **** "<<endl;
	cout<<"LA POTENCIA ES: "<< p <<endl;
	cout<<"\n"<<endl;
}


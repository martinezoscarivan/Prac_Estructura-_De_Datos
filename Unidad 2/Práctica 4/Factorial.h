# include <iostream>
# include <cstdlib>
# include <new>
using namespace std;
class Factorial
{
	private:
		//atributos 
		//metodos privados
		double fact, *f, *fac;
		
		public:
			Factorial(int n){fact=1; f=new double [n]; fac=new double[n];}
			double factorial(int n); // 2. implementa la funcion
			double factorialr(int n);
			void visualizar(int n);
			void visualizarre(int n);
			void liberar();
};
void Factorial::visualizarre(int n)
{
		for (int i=1; i<=n; i++)
	{
		f[i]=factorialr(i);
		cout<<"["<<i<<"]="<<f[i]<<endl;	
	}
	
}

double Factorial::factorialr(int n)
{
	if(n==1)
	{
		return 1;
	}
	if(n>1)
	{
	return n*factorialr(n-1);
	}
}
void Factorial::visualizar(int n)
{
	for (int i=1; i<=n; i++)
	{
	cout<<"["<<i<<"]="<<f[i]<<endl;
	}
}


double Factorial::factorial(int n)
{
	for (int i=1; i<=n; i++)
	{
		fact=fact*i;
		f[i]=fact;
	}
		return fact;
}


void Factorial::liberar()
{
	delete [] f;
	delete []fac;
}

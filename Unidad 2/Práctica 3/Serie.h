# include <iostream>
# include <cstdlib>
# include <new>
using namespace std;
class Serie
{
	private:
		int *serie;
		int *recur;
		int num;
		int s;
		public:
			Serie(int n){num=n; s=8;serie=new int [n]; recur=new int[n];}
			void cserie(int n);
			void visualizar(int n);
			void liberar();
			int cserir(int n);
};

void Serie::visualizar(int n)
{
	for (int a=0; a<n; a++)
	{
	recur[a]=cserir(a);
	cout<<"["<<a<<"]="<<recur[a]<<endl;	
	}
}

int Serie::cserir(int n)
{
	if(n==0)
	{
   return -3;
 	}
 	else
	{
  	return -11 + cserir (n-1);
	}	
}

void Serie::cserie (int n)
{
	for (int a=0; a<n; a++)
	{
	s=s-11;
	serie[a]=s;
	cout<<"["<<a<<"]="<<serie[a]<<endl;	
	}
	
}

void Serie::liberar()
{
	delete [] serie;
	delete [] recur;
}



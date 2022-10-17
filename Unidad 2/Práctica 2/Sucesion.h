# include <cstdlib>
# include <iostream>
# include <new>

using namespace std;

class Sucesion
{
	private:
		int n, nt, res;
		int *sF;
		
	public:
		Sucesion(int num) {n=num; nt=1; sF=new int [num];}
		void SFI(int n);
		int SFR(int n);
		void visualizar(int n);
		void liberar();
};
void Sucesion::visualizar(int n)
{
	for (int O=1; O<=n; O++)
	{
	cout<<"SF["<<O-1<<"]="<<SFR(O)<<endl;
	}
	
}
int Sucesion::SFR(int n)
{
  if((n==1 || n==2))
	{
   return 1;
 	}
 	else
	{
  	return SFR(n-1) +SFR(n-2);
	}	
}

void Sucesion::SFI(int n)
{
	sF[0]=1;
	sF[1]=1;
	for (int O=1; O<n; O++)
	{
	sF[O+1]=sF[O-1]+ sF[O];	
	}
		for (int O=0; O<n; O++)
		{
			if(nt==10)
			{
				nt=0;
			}
			else 
			{	
			cout<<"SF["<<O<<"]="<<sF[O]<<endl;
			nt+= 1;
			}
		}
}
void Sucesion::liberar()
{
	delete [] sF;
}

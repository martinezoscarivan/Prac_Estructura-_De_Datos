# include <cstdlib>
# include <iostream>
# include <new>

using namespace std;
class Memoria
{
	private:
	int *numeros;
	int ns, num, bn; 
	
	public:
		Memoria(int ne) {num=0; bn=0; ns=ne; numeros=new int [ne]; }
	void setNumeros(int ns);
	void buscaN(int num);
	void visualizar();
	void Liberar();
	
};
void Memoria::setNumeros(int ns)
{
	cout<<"Escribe los " << ns << " Numeros: "<<endl;
	for (int OT=0; OT<ns; OT++)
	{
		cin>>numeros[OT];
	}
}

void Memoria::visualizar()
{
	cout<<" NUMEROS SELECCIONADOS "<<endl;
	for (int OT=0; OT<ns; OT++)
	{
		cout<< OT+1 << "=" << numeros [OT] <<endl;
	}
}

void Memoria::buscaN(int num)
{	
for(int OT=0; OT<ns; OT++)
	{
	if(num==numeros[OT])
	{
   	bn= 1;
	cout<<"El NUMERO A BUSCAR ES: "<< num <<" SE ENCUENTRA EN LA POSICION: "<<" ["<<OT+1<<"] "<<" DEL ARREGLO. "<<endl; 
	break;
	}
	else
	bn=0;
	}
	if (bn==0)
	{
    cout<<"EL NUMERO SOLICITADO NO SE ENCUENTRA EN EL ARREGLO"<<endl;
	}
}
void Memoria::Liberar()
{
	delete []numeros;
}

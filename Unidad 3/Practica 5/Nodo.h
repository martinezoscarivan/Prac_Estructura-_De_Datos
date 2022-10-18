//archivo cabecera Nodo.h
class Nodo
{
private:
    int dato;
    Nodo* enlace;
public:
    Nodo(int t)
    {
        dato=t;
        enlace=0;
    }
    
    Nodo(int p, Nodo* n)
    {
        dato=p;
        enlace=n;
    }
    
    int DatoNodo() const
    {
        return dato;
    }
    
    Nodo* enlaceNodo() const
    {
        return enlace;
    }
    
	void ponerEnlace(Nodo* sgte)
    {
        enlace=sgte;
    }
};


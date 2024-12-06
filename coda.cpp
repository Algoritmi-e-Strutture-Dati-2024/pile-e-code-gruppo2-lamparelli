#include <iostream>

                            // Definizione della classe Lista come template
template <typename T>
class Pila 
{
private:                  //ListaPunatori come base
ListaPuntatori<T> lista;
public:                  
void push(T elem)
{                       //Inserisco un elemento nella posizione di testa
lista.inslista(elem, 1);
}

T pop()
{
if(lista.listavuota())
{
    return lista.lung==0;
}
else
{
                        //Lettura del valore in testa chee viene poi cancellato
T valore=lista.leggilista(1);
lista.canclista(1);
return valore;
}
}

T top()
{
if(lista.listavuota())
{
return lista.lung==0;
}
else
{
return lista.leggilista(1);
}

bool isEmpty() const
{
return lista.lung==0;
}

int size() const
{
return lista.lunghezza();
}
}
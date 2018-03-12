#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;

#ifndef Lista_H
#define Lista_H

template <class Tipo>
class Lista
{  
typedef Nodo<Tipo>* Apuntador;
private:
        Nodo<Tipo>* primero;             
public:
    Lista();
    Nodo<Tipo>* ObtPrimero();
    void AsigPrimero(Nodo<Tipo>* p);
    bool Vacia();
    bool Llena();
    bool InsComienzo(Tipo valor);
    bool EliComienzo(Tipo &valor);
    bool InsDerecho(Apuntador p,Tipo valor);
    bool EliDerecho(Apuntador p,Tipo &valor);
    bool InsFinal(Tipo valor); //Hecho
    bool InsOrdenado(Tipo valor);  //Hecho No probado
    ~Lista();
         	     

};


#endif

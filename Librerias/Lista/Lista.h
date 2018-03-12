#ifndef Lista_H
#define Lista_H
#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;
template <class Tipo>
class Lista
{  
typedef Nodo<Tipo>* Apuntador;
private:
        Nodo<Tipo>* primero;             
public:
    Lista();
    Nodo<Tipo>* ObtPrimero();
    Nodo<Tipo>* BuscarElemento(Tipo valor); //hice yo
    void AsigPrimero(Nodo<Tipo>* p);
    bool Vacia();
    int Total(); // me
    bool Llena();
    bool InsComienzo(Tipo valor);
    bool EliComienzo(Tipo &valor);
    bool InsDerecho(Apuntador p,Tipo valor);
    bool EliDerecho(Apuntador p,Tipo &valor);
    bool InsFinal(Tipo valor); //Hecho
    bool InsOrdenado(Tipo valor);  //Hecho No probado
    ~Lista();
         	     

};


#include "Lista.cpp"
#endif

#ifndef Nodo_H
#define Nodo_H

template <class Tipo>
class Nodo  {

   private:
       Tipo info;
       Nodo<Tipo>* der;   
   public:
       void AsigInfo(Tipo in);
       Tipo ObtInfo();
       Tipo ObtInfo(Nodo<Tipo>* p);
       void AsigDer(Nodo<Tipo>* p);
       Nodo<Tipo>* ObtDer();   
       };

#include "Nodo.cpp"
#endif


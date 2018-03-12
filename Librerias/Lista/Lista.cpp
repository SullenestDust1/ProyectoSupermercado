#include "Lista.h"

template <class Tipo>
Nodo<Tipo>* Lista<Tipo>::ObtPrimero(){
  return primero;          
};

template <class Tipo>
void Lista<Tipo>::AsigPrimero(Nodo<Tipo>* p){
     primero=p;
};

template <class Tipo>
Lista<Tipo>::Lista(){
     primero=NULL;
};

template <class Tipo>
bool Lista<Tipo>::Vacia(){
  return primero == NULL;
};

template <class Tipo>
bool Lista<Tipo>::Llena(){
  Nodo<Tipo> *p;
  p=new Nodo<Tipo>;
  if (p==NULL)
     return true;
  else
    { 
      delete p;
      return false;       
    }   
};
template <class Tipo>
Nodo<Tipo>* Lista<Tipo>::BuscarElemento(Tipo valor){
    Nodo<Tipo>* ap = this->primero;
    while(ap !=NULL) {  //preguntas si no esta apuntando a null osea que si hay nodos
        if (ap->ObtInfo() == valor){
            return ap;
        }
        ap=ap->ObtDer();
    }
    return ap;
};

template <class Tipo>
Lista<Tipo>::~Lista(){
 Nodo<Tipo> *p;
  while (!Vacia())
   {
        p=primero->ObtDer();
        delete primero;
        primero=p;     
   };

};

template <class Tipo>
bool Lista<Tipo>::InsComienzo(Tipo Valor){
  Apuntador nuevo;
  if (!Llena()) 
     {
      nuevo=new Nodo<Tipo>;
      nuevo->AsigInfo(Valor);
      nuevo->AsigDer(primero);
      primero=nuevo;
      return true;
     }
  else
      return false;    
};

template <class Tipo>
bool Lista<Tipo>::EliComienzo(Tipo &valor){
  Apuntador viejo;
  if (!Vacia()) 
     {
      viejo=primero;          
      valor=viejo->ObtInfo();
      primero=primero->ObtDer();
      delete viejo;
      return true;
     }
  else
      return false;    
};

template <class Tipo>
bool Lista<Tipo>::InsDerecho(Apuntador p,Tipo valor){
  Apuntador nuevo;
  if (!Llena())
      if (Vacia()) 
         {
            InsComienzo(valor);
            p = ObtPrimero();
         }
      else if (p==NULL)
         return false;
      else
         {          
               nuevo=new Nodo<Tipo>;
               nuevo->AsigInfo(valor);
               nuevo->AsigDer(p->ObtDer());
               p->AsigDer(nuevo);
               return true;
         }
  else
      return false;    
};
template <class Tipo>
bool Lista<Tipo>::InsFinal(Tipo valor){
    if(!Llena()) {
        if (Vacia()) {
            InsComienzo(valor);
            return true;
        } else {
            Apuntador ap,ap2;
            ap = ObtPrimero();
            while (ap2 != NULL) {
                ap = ap->ObtDer();
                ap2 = ap->ObtDer();
            }
            if(InsDerecho(ap,valor))
                return true;
            else
                return false;
        }
    }
}
template <class Tipo>
bool Lista<Tipo>::InsOrdenado(Tipo valor){
    if(!Llena()){
        if(Vacia()){
            InsComienzo(valor);
            return true;
        }else{
            Apuntador ap,ap2;
            Tipo val2;
            ap=ObtPrimero();
            val2 = ap->ObtInfo();
            if(valor < val2){
                InsComienzo(valor);
                return true;
            }

            while(ap != NULL){
                ap2 = ap;
                ap = ap->ObtDer();
                val2 = ap->ObtInfo();
                if(val2 < valor){
                    InsDerecho(ap2,valor);
                    return true;
                }
                ap=ap->ObtDer();
            }
            if(ap == NULL){
                InsFinal(valor);
                return true;
            }else
                return false;
        }
    }else
        return false;
}
template <class Tipo>
int Lista<Tipo>::Total(){
    int total=0;
    Nodo<Tipo>* ap = this->primero;
    while(ap!=NULL) {  //preguntas si no esta apuntando a null osea que si hay nodos
        ap=ap->ObtDer();
        total++;
    }
    return total;
};
template <class Tipo>
bool Lista<Tipo>::EliDerecho(Apuntador p,Tipo &valor) {
  Apuntador viejo;  
     if (p==NULL)
         return false;
     else
        if (p->ObtDer()==NULL)
           return false;
        else   
             {                
                   viejo=p->ObtDer();          
                   valor=viejo->ObtInfo();
                   p->AsigDer(viejo->ObtDer());
                   delete viejo;
                   return true;
             };
};

     

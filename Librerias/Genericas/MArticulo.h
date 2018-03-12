// MArticulo.h

#ifndef MARTICULO_H
#define MARTICULO_H
#include <string>
using namespace std;
class MArticulo  
{
   protected:
      string codigo,desc;
      double pvp,costo;
      int tipo;
   public: 
      MArticulo();
      MArticulo(string,string,double,double,int);
      void SetCodigo(string);
      void SetDesc(string);
      void SetPvp(double);
      void SetCosto(double);
      void SetTipo(int);
      string GetCodigo();
      string GetDesc();
      double GetPvp();
      double GetCosto();
      int GetTipo();
};
#endif

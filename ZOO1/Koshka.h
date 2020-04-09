#ifndef _Koshka_h_
#define _Koshka_h_
#include "Mlekopitaushie.h"

class Koshka :public Mlekopitaushie
{
protected:
  int ushi;
public:
  Koshka();
  void Setushi(int a);
  int Getushi();

};

#endif

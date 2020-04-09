#ifndef _Mlekopitaushie_h_
#define _Mlekopitaushie_h_
#include "Animals.h"

class Mlekopitaushie :public Animals
{
protected:
  int nogi;
  bool have_milk;
public:
  Mlekopitaushie();
  void Setnogi(int a);
  int Getnogi();
  int Gethave_milk();
};

#endif

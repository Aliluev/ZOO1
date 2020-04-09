#ifndef _Bird_h_
#define _Bird_h_
#include "Animals.h"

class Bird : public Animals
{
protected:
  bool Kluv;
  int nogi;
public:
  Bird();
  void Setkluv(int a);
  int Getkluv();
  void Setnogi(int b);
  int Getnogi();
  //Bird() { color = 's'; wool = false; eyes = true; Kluv = 0; nogi = 2; };
  // int SILA();
};


#endif

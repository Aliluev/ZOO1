#ifndef _Fish_h_
#define _Fish_h_
#include "Animals.h"

class Fish :public Animals
{
protected:
  bool plavnik;
  bool scales;
public:
  Fish();
  void Setplavnik(int a);
  int Getplavnik();
  int Getscales();
};

#endif
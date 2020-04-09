#ifndef _Karas_h_
#define _Karas_h_
#include "Fish.h"

class Karas :public Fish
{
protected:
  bool predator;
  int vozrast;
public:
  Karas();
  void Setvozrast(int a);
  int Getvozrast();
  int Getpredator();
};

#endif


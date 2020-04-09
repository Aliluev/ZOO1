#ifndef _ChildDuck_h_
#define _ChildDuck_h_
#include "Duck.h"

class ChildDuck :public Duck
{ 
protected:
  int Rost;
public:
  ChildDuck();
  int GetRost();
};


#endif
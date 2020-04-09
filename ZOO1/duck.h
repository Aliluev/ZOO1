#ifndef _duck_h_
#define _duck_h_
#include "Bird.h"

class Duck : public Bird
{
protected:
  bool Long_neck;
public:
  Duck();
  const char* Golos();
  void Setlong_neck(int b);
  int Getlong_neck();
};

#endif
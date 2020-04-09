#include "duck.h"

Duck::Duck():Bird()
{
  color='w';
  Long_neck = true;
  Kluv=true;
  nogi=2;
  wool = false;
}
const char* Duck::Golos()
{
  return("Kria, Kria");
}
void Duck::Setlong_neck(int b)
{
  Long_neck= b;
}
int Duck::Getlong_neck()
{
  return Long_neck;
}

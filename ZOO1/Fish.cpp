#include"Fish.h"

Fish::Fish() :Animals()
{
  plavnik = 0;
scales = true;
}
void Fish::Setplavnik(int a)
{
  plavnik = a;
}
int Fish::Getplavnik()
{
  return plavnik;
}


int Fish::Getscales()
{
  return scales;
}
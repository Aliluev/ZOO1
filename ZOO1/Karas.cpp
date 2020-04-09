#include"Karas.h"

Karas::Karas() :Fish()
{
  predator = false;
  vozrast = 0;
  plavnik=true;
  color='S';
  eyes=true;
  wool=false;
}
void Karas::Setvozrast(int a)
{
  vozrast = a;
}
int Karas::Getvozrast()
{
  return vozrast;
}
int Karas::Getpredator()
{
  return predator;
}
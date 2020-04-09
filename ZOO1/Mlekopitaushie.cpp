#include"Mlekopitaushie.h"

Mlekopitaushie::Mlekopitaushie() :Animals()
{
  have_milk = "true";
  nogi = 0;
  wool = 0;
  eyes = 0;
}
void Mlekopitaushie::Setnogi(int a)
{
  nogi = a;
}
int Mlekopitaushie::Getnogi()
{
  return nogi;
}
int Mlekopitaushie::Gethave_milk()
{
  return have_milk;
}


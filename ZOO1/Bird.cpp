#include"Bird.h"
#include"stdlib.h"

Bird::Bird() :Animals()
{
  color = 'c';
wool = false;
eyes = true;
Kluv = 0;
nogi = 0;

}
void Bird::Setkluv(int a)
{
  Kluv = a;
}
int Bird::Getkluv()
{
  return Kluv;
}
void Bird::Setnogi(int b)
{
  nogi = b;
}
int Bird::Getnogi()
{
  return nogi;
}
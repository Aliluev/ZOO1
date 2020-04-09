#include "Animals.h"
Animals::Animals()
{
  color = 'e';
  wool = 0;
  eyes = 0;
}
char Animals::getcolor()
{
  return color;
}
void Animals::setcolor(int a)
{
  color = a;
}
int Animals::getwool()
{
  return wool;
}
void Animals::setwool(int b)
{
  wool = b;
}
int Animals::geteyes()
{
  return eyes;
}
void Animals::seteyes(int c)
{
  eyes = c;
}


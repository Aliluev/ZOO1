#include"ChildDuck.h"

ChildDuck::ChildDuck() : Duck()
{
  Rost = 11;
}
int ChildDuck::GetRost()
{
  return Rost;
}
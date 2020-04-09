#ifndef _Animals_h_
#define _Animals_h_

class Animals
{
protected:
  char color;
  bool wool;
  bool eyes;
public:
  char getcolor();
  void setcolor(int a);
  int getwool();
  void setwool(int b);
  int geteyes();
  void seteyes(int c);
  Animals();

};
#endif



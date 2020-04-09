#ifndef _ChildKaras_h_
#define _ChildKaras_h_
#include "Karas.h"

class ChildKaras :public Karas
{protected:
  int dlina;
public:
  ChildKaras();
  int GetDlina();
};

#endif

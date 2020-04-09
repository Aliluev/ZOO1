#include <iostream>
using namespace std;
#include "Animals.h"
#include "Bird.h"
#include "duck.h"
#include "ChildDuck.h"
#include"Fish.h"
#include"Karas.h"
#include"ChildKaras.h"
#include"Mlekopitaushie.h"
#include"Koshka.h"

int main()
{
  Animals LEF;
  LEF.setcolor('r');
  LEF.seteyes(true);
  LEF.setwool(false);
  cout << "Animal" << "\n";
  cout << "Color Animal" << " " << LEF.getcolor() << "\n";
  cout << "Had it eyes?" << " " << LEF.geteyes() << "\n";
  cout << "Had it wool?" << " " << LEF.getwool() << "\n"<<"\n";
  Bird R;
  R.seteyes(true);
  R.Setnogi(2);
  R.Setkluv(true);
  cout << "Bird"<<"\n";
  cout << "Wool?" << " " << R.getwool() << "\n";
  cout << "Nogi?" << " " << R.Getnogi() << "\n";
  cout << "Kluv?" << " " << R.Getkluv() << "\n"<<"\n";
  Duck KR;
  //KR.setcolor('w');
  //KR.Setlong_neck(true);
  //KR.Setkluv(true);
  //KR.Setnogi(2);
  //KR.setwool(false);
  cout << "Duck Alexander"<<"\n";
  cout << "Color Duck" << " " << KR.getcolor() << "\n";
  cout << "Wool?" << " " << KR.getwool() << "\n";
  cout << "Nogi?" << " " << KR.Getnogi() << "\n";
  cout << "Kluv?" << " " << KR.Getkluv() << "\n";
  cout << "Golos" <<" "<< KR.Golos()<<"\n"<<"\n";
  ChildDuck Ivan;
  cout << "ChildDuck Ivan(father Alexandr)" << "\n";
  cout << "Color ChildDuck " << " " << Ivan.getcolor() << "\n";
  cout << "Wool?" << " " << Ivan.getwool() << "\n";
  cout << "Nogi?" << " " << Ivan.Getnogi() << "\n";
  cout << "Kluv?" << " " << Ivan.Getkluv() << "\n";
  cout << "Golos" << " " << Ivan.Golos() << "\n";
  cout << "Rost" << " " << Ivan.GetRost() << "\n"<<"\n";
  Fish Ruba;
  Ruba.Setplavnik(true);
  Ruba.setcolor('S');
  Ruba.seteyes(true);
  Ruba.setwool(false);
  cout << "Fish" << "\n";
  cout << "Scales?" << " " << Ruba.Getscales() << "\n";
  cout << "Plavnik?" << " " << Ruba.Getplavnik() << "\n";
  cout << "Color Animal" << " " << Ruba.getcolor() << "\n";
  cout << "Had it eyes?" << " " << Ruba.geteyes() << "\n";
  cout << "Had it wool?" << " " << Ruba.getwool() << "\n" << "\n";
  Karas Pasha;
  Pasha.Setvozrast(7);
 // Pasha.Setplavnik(true);
 // Pasha.setcolor('S');
 // Pasha.seteyes(true);
 // Pasha.setwool(false);
  cout << "Karas Pasha" << "\n";
  cout << "Scales?" << " " << Pasha.Getscales() << "\n";
  cout << "Plavnik?" << " " << Pasha.Getplavnik() << "\n";
  cout << "Color Animal" << " " << Pasha.getcolor() << "\n";
  cout << "Had it eyes?" << " " << Pasha.geteyes() << "\n";
  cout << "Had it wool?" << " " << Pasha.getwool() << "\n";
  cout << "predator?" << " " << Pasha.Getpredator() << "\n";
  cout << "vozrast" << " " << Pasha.Getvozrast() << "\n"<<"\n";
  ChildKaras Nikita;
  Nikita.Setvozrast(18);
  cout << "Child Karas Nikita(father Pasha)" << "\n";
  cout << "Scales?" << " " << Nikita.Getscales() << "\n";
  cout << "Plavnik?" << " " << Nikita.Getplavnik() << "\n";
  cout << "Color Animal" << " " << Nikita.getcolor() << "\n";
  cout << "Had it eyes?" << " " << Nikita.geteyes() << "\n";
  cout << "Had it wool?" << " " << Nikita.getwool() << "\n";
  cout << "predator?" << " " << Nikita.Getpredator() << "\n";
  cout << "vozrast" << " " << Nikita.Getvozrast() << "\n";
  cout << "dlina?" << " " << Nikita.GetDlina() << "\n" << "\n";
 
  Mlekopitaushie Fedy;
  Fedy.setcolor('r');
  Fedy.seteyes(true);
  Fedy.setwool(true);
  Fedy.Setnogi(4);
  cout << "Mlekopitaushie Fedy" << "\n";
  cout << "Color" << " " << LEF.getcolor() << "\n";
  cout << "Had it eyes?" << " " << LEF.geteyes() << "\n";
  cout << "Had it wool?" << " " << LEF.getwool() << "\n";
  cout << "Nogi kol" << " " << Fedy.Getnogi() << "\n";
  cout << "have it milk?" << " " << Fedy.Gethave_milk() << "\n" << "\n";

  Koshka Mur;
  Mur.setcolor('r');
  Mur.seteyes(true);
  Mur.setwool(true);
  Mur.Setnogi(4);
  Mur.Setushi(2);
  cout << "Mlekopitaushie Mur" << "\n";
  cout << "Color" << " " << LEF.getcolor() << "\n";
  cout << "Had it eyes?" << " " << LEF.geteyes() << "\n";
  cout << "Had it wool?" << " " << LEF.getwool() << "\n";
  cout << "Nogi kol" << " " << Fedy.Getnogi() << "\n";
  cout << "have it milk?" << " " << Fedy.Gethave_milk() << "\n";
  cout << "Ushi" << " " << Mur.Getushi() << "\n";

  return 0;
}
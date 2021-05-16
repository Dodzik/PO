#pragma once
#include "File.h"
#include <vector>
#include <iostream>
using namespace std;
class Dir final: public Object {//final class reprezentujaca folder, nie mozna po niej dziedziczyc ze wzgledu na slowo kluczowe final
  public:
  Dir(string n): Object(n) {}//konstruktor delegowany , ustawia name na n
  ~Dir();//destruktor niszczacy cały folder razem z zawartoscia

  void operator += (  Object *f );//dodajemy element do folderu, destruktor zajmie sie zwolnieniem pamieci
  void operator -=(string n);

  ostream& print (ostream & out, int s=0 )const;//funkcja wypisujaca zawartosc folderu i jego nazwe do out
  Dir* getDir (string n) const;//funkcja zwraca pointer na folder o nazwie n

  File *get (string n);//funkcja zwraca pointer na plik o nazwie n
  void copy(Object *dummy);

  private:
  vector< Object * > vec;

};
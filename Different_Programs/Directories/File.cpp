#include "File.h"
using namespace std;

ostream &File::print (std::ostream &out,int s )const {
  for(int i=0; i<s; i++) out << " ";
  out << name<<"("<<size<<")" << "\n";
  return out;
}

ostream &operator << (ostream &o, const Object &f) {
  return f.print(o);
}

File *File::get(std::string n) {
  if(name == n) return this;
  else return nullptr;
}

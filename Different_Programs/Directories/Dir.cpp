#include "Dir.h"

void Dir::operator += ( Object *f) {
  vec.push_back( f );
}



ostream &Dir::print(std::ostream &out, int s)const {
  for(int i=0; i < s; i++) out << " ";
  out << name <<" (dir)"<< "\n";
  for(auto i : vec) {
    i->print( out, s+2);
  }
  return out;
}

Dir* Dir::getDir(std::string n)const {
  for (auto i:vec) {
     Dir * another = dynamic_cast <Dir*> (i); 
      if(n == i->getName()) {
        return another;
      }
   
    if(another) {
      return  another -> getDir(n);
    }   

  }

  return nullptr;

}

File *Dir::get(string n) {
  for(auto i : vec) {
    if( i->getName() == n) return dynamic_cast<File*>(i) ;
    File *another =dynamic_cast<File*>( i->get(n));
    if( another ) return another;
  } 
 return nullptr; 
}

Dir::~Dir() {
  cout<<"Destruktor Dir: " << name <<endl;

  for(auto i : vec) {
   if(i) delete i;
  }
}


void Dir::copy(Object * dummy){
  File *another= dynamic_cast<File *>(dummy);
  if(another) *this += new File(another->getName(),another->getsize());
  Dir *another1=dynamic_cast<Dir *>(dummy);
  if (another1) {
    Dir * temp= new Dir(another1->name);
    for(auto i : another1->vec) {
    
		temp->copy(i);

	 
    }
    *this += temp;
  }
}

void Dir::operator-=(std::string n) {

  for(auto i=vec.begin();i<vec.end();i++) {
    if((*i)->getName()==n) {
		delete *i;
      vec.erase(i);
    }

  }
}


#include "Dir.h"

Dir::Dir(std::string n):Entity(n){}

void Dir::operator +=(Entity* dummy){
	tree.push_back(dummy);
}

Dir* Dir::findDir(std::string n){

	for (auto a : tree){
		Dir* dummy;
		if(dummy = dynamic_cast<Dir*>(a)){
				if (dummy->getName() == n){
					return dummy;
				}
				Dir* res = dummy->findDir(n);
				if(res != nullptr) {
					return res;
				}
		}
	}
	return nullptr;
}

void Dir::print(std::ostream& os,int tabs)const{
	
	Entity::print(os,tabs);
	os<< " (DIR)\n";
	for (Entity* a: tree){
		a->print(os,tabs+1);
	}
}

void Dir::add(Entity* dummy){
	*this +=dummy;
}


Entity* Dir::get(std::string n){
	for(Entity* a : tree){
		if(a->getName() == n) {
			return a;
		}
		Dir* dummy;
		if(dummy = dynamic_cast<Dir*>(a)){
			Entity* res = dummy->get(n);
			if(res!= nullptr){
				return res;
			}
		}
	}
	return nullptr;
}

Dir::~Dir(){
	std::cout<<"Deleting Dir: "<<getName()<<"\n";

	for(auto a: tree){
		std::cout<<"About to delete "<<a->getName()<<"\n";
		delete a; 
	}
	tree.clear();
}
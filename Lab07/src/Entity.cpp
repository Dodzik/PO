#include "Entity.h"




Entity::Entity (std::string n) : name(n){}


void Entity::print(std::ostream& os , int tabs)const{
	for (int i=0;i<tabs;i++){
		os<<"\t";
	}
	os<<name;
}


std::ostream& operator<<(std::ostream& os, const Entity& entity){
	entity.print(os);
	return os;
}

std::string Entity::getName(){
	return name;
}

Entity::~Entity(){}
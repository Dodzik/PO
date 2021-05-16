#include "Primitive.h"

Primitive::Primitive(float war):val(war){
	// val = war;  //wymug listy inicjalizacyjnej jest w pochodnych klasach
}
Primitive::Primitive(){
	val = 0;
}
void Primitive::prt()const{
	std::cout<<val;
}


void Primitive::Set(float war){
	val = war;
}

float Primitive::Get()const{
	return val;
}


void Primitive::PrintWithValue()const{
	prt();
	std::cout<<" = "<<Get()<<"\n";
}
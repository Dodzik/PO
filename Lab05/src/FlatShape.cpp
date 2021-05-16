#include "FlatShape.h"

FlatShape::FlatShape(std::string chain): nam(chain){
	std::cout<<"Jestem nowa figura "<<nam<<"\n";
}

FlatShape& FlatShape::dodajW(Vertex dummy){
	ver.push_back(dummy);
	return *this;
}


FlatShape& FlatShape::operator+=(Vertex dummy){
	ver.push_back(dummy);
	return *this;
}

std::string FlatShape::nazwa()const{
	return nam;
}

bool FlatShape::operator ==(FlatShape dummy)const{
	if(this == &dummy){
		return true;
	}
	if(ver.size() != dummy.ver.size()){
		return false;
	}

	return true;

}

std::ostream& operator <<(std::ostream& os,const FlatShape& dummy){
	os<<"Figura "<<dummy.nazwa()<<": \n";
	for(unsigned i =0; i<dummy.ver.size();i++){
		os<<dummy.ver[i];
	}
	os<<"\n";
	return os;

}
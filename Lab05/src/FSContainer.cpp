#include "FSContainer.h"


FSContainer::FSContainer(){

}

void FSContainer::operator +=(FlatShape* dummy){
	cont.push_back(dummy);

}

std::ostream& operator <<(std::ostream& os,const FSContainer dummy){
	os<<"W kontenerze znajduja sie:\n";
	for(unsigned i =0;i<dummy.cont.size();i++){
		os<<*dummy.cont[i];
	}
	os<<"\n";
	return os;
}
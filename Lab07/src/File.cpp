#include "File.h"


File::File(std::string n): Entity(n){

}


void File::print(std::ostream& os,int tabs)const{
	Entity::print(os,tabs);
	os<<" (FILE)\n";
}
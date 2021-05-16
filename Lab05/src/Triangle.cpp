#include "Triangle.h"

Triangle::Triangle(std::string chain): FlatShape(chain){
	std::cout<<"Mowiac scisle, jestem trojkatem.\n";
}


double Triangle::pole(){
	return ver[0].len(ver[1]) * ver[1].len(ver[2]) /2;
}
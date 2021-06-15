#include "Variable.h"



ArrayOfVariables::ArrayOfVariables(int size): _size(size) {}

void ArrayOfVariables::Print() const{
	for(auto var : _var)
	{
		var->Print();
	}
}



ArrayOfVariables::~ArrayOfVariables()
{
	for(auto var : _var)
	{
		delete var;
	}
}


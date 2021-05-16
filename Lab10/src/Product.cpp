#include "Product.h"


Product::Product(std::string prod,std::vector<float> num):_name(prod),_num(num){

}
//Produkt 1:    1.5     2  -3.2
void Product::print()const{
	std::cout<<_name<<":";
	std::for_each(_num.begin(),_num.end(), [](float num){std::cout<<std::setw(6)<<num;});
	std::cout<<"\n";
}

std::vector<float> Product::getNum()const{
	return _num;
}
#include "Table.h"



void Table::operator +=(Product prod){
	_vec.push_back(prod);
	if (minRow==0 ||minRow > prod.getNum().size()){
		minRow = prod.getNum().size();
	}
}


void Table::print()const{
	for_each(_vec.begin(),_vec.end(), [] (const Product& prod){
		prod.print();
	});
	std::cout<<"\n";
}

bool cmp(const Product& o1, const Product & o2,int ind){
	return o1.getNum()[ind] < o2.getNum()[ind];
}

const Table& Table::sort(unsigned ind){
	if(minRow-1<ind){
		std::cout<<"Indeks "<<ind<<" nieprawidlowy! \n";
		return *this;
	}
	else{
		auto compare = std::bind(cmp, std::placeholders::_1 ,std::placeholders::_2,ind);
		std::sort(_vec.begin(),_vec.end(),compare);
		return *this;
	}
}

Table& Table::sortBy(std::function<bool(const Product& o1, const Product& o2)>cmp){
	std::sort(_vec.begin(),_vec.end(),cmp);
	return *this;
}

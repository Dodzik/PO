#include "../include/Meadow.h"



void Meadow::add(std::unique_ptr<Animal> ani){
	_vec.push_back(std::move(ani));
}

void Meadow::print(std::string str)const{
	std::cout<<"=== "<<str<<" ===\n";
	for(auto &ani : _vec){
		ani->print();
		std::cout<<"\n";\
	}
}

void Meadow::countNames() {
	std::map<std::string , int> map;
	for (auto &ani : _vec){
		map[ani->name()]+=1;
	}
	for (auto n : map){
		std::cout<<n.first<<": " <<n.second<<"\n";
	}
}


std::vector<Sheep*> Meadow::getSheepHerd(){
	std::vector<Sheep*> herded;
	for (auto &ani : _vec){
		auto dummy = dynamic_cast<Sheep*>(ani.get());
		if(dummy){
			herded.push_back(dummy);
		}
	}
	return herded;

}
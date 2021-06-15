#include "../include/Animals.h"

/*
- Owca Bernadeta nieostrzyzona
- Krowa Mucka
- Krowa Krasula
- Kon Rafal
- Owca Beata nieostrzyzona
- Krowa Mucka
- Owca Beata nieostrzyzona
*/

void Sheep::print()const {
	std::cout<<"- Owca "<< name();
	if(_Sheared){
		std::cout<<" ostrzyzona";
	}
	else{
		std::cout<<" nieostrzyzona";
	}

}

void Horse::print()const{
	std::cout<<"- Kon "<<name();
}


void Cow::print()const{
	std::cout<<"- Krowa "<<name();
}

/*====== Koniec wypasu ====== 
- Owca Bernadeta ostrzyzona wraca do zagrody
- Krowa Mucka wraca do obory
- Krowa Krasula wraca do obory
- Kon Rafal wraca do stajni
- Owca Beata ostrzyzona wraca do zagrody
- Krowa Mucka wraca do obory
- Owca Beata ostrzyzona wraca do zagrody
- Owca Beata nieostrzyzona wraca do zagrody
*/
Horse::~Horse(){
	print();
	std::cout<<" wraca do stajni\n";
}

Cow::~Cow(){
	print();
	std::cout<<" wraca do obory\n";

}

Sheep::~Sheep(){
	print();
	std::cout<<" wraca do zagrody\n";
}


void Sheep::shear(){
	 _Sheared = true;
}
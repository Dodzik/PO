#pragma once
#include "FlatShape.h"

class FSContainer{
	public:
		//konstruktor bezargumentowy
		FSContainer();
		//przeładowanie += dodające podaną figure do aktualnego kontenera
		void operator +=(FlatShape* dummy);
	//vector przechowujący adresy figur
	std::vector<FlatShape*> cont;
};

//funckja wypisujaca zawartość kontenera
std::ostream& operator <<(std::ostream& os,const FSContainer dummy);
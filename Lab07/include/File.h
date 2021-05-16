#pragma once

#include "Entity.h"

//klasa pochodna File dziedziczy po entity
class File: public Entity{
	public:
	//Konstruktor klasy file
		File(std::string n);
	//funckja która pozwala wyświetlać dany plik tabs określa wielkość wcięcia
		void print(std::ostream& os,int tabs=0)const;

	
};
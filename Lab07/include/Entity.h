#pragma once

#include <string>
#include <iostream>
#include <sstream>

//główna klasa która rezprezentuje obiekt pozostałe klasy dziedziczą po niej
class Entity{
	public:
	//konstruktor klasy Entity ustawiający n jako pole nazwa
		Entity (std::string n);
	//funkcja wypisująca wirtualna której używają pozostałe klasy zmienna tabs pozwala przedstawic układ graficzny przyjemny dla oka
		virtual void print(std::ostream& os , int tabs=0)const;
		//funkcja zwracająca nazwe danego bytu
		std::string getName();
		//destrkutor klasy Entity
		virtual ~Entity();

	protected:
	//pole nazwa
	std::string name;
};
//funckja drukująca na ostream 
std::ostream& operator<<(std::ostream& os, const Entity& entity);
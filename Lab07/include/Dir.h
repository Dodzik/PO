#pragma once
#include "Entity.h"
#include <vector>

//klasa pochodna Dir final zapobiega dziedziczeniu po klasie Dir
class Dir final: public Entity{
	public:
	//Konstruktor klasy Dir
		Dir(std::string n);
	//przeładowanie operatora które dodaje dane byt do vectora bytów w folderze
		void operator +=(Entity* dummy);
	//Funckja znajduje i zwraca element o podanej nazwie
		Dir* findDir(std::string n);
	//funckja pozwalająca wypisac na ostream folder oraz zawartosc folderu tabs określa wielkość wcięcia
		void print(std::ostream& os,int tabs=0)const;
	//funckja add robi dokołądni to co przeładowanie +=
		void add(Entity* dummy);
	//funckja zwracająca element o podanej nazwie jeśli znajduje się w folderze
		Entity* get(std::string n);
	//Głośny destruktor klasy Dir usuwa również elementy w środku folderów 
		~Dir();
	private:
	//zbiór elementów w środku folderu
		std::vector<Entity*> tree;
};
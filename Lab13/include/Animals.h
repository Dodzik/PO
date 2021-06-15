#pragma once
#include "Animal.h"
#include <iostream>
/*
meadow.add(std::make_unique<Sheep>("Bernadeta"));
  meadow.add(std::make_unique<Cow>("Mucka"));
  meadow.add(std::make_unique<Cow>("Krasula"));
  meadow.add(std::make_unique<Horse>("Rafal"));
  meadow.add(std::make_unique<Sheep>("Beata"));
  meadow.add(std::make_unique<Cow>("Mucka"));
  meadow.add(std::make_unique<Sheep>(littleSheep));
*/

class Sheep : public Animal {
	public:
		Sheep (std::string name ): Animal(name){}
		void print()const;
		~Sheep();
		void shear();
	private:
		bool _Sheared = false;
};

class Cow : public Animal {
	public:
		Cow (std::string name): Animal(name){}
		void print()const;
		~Cow();
	private:
};

class Horse : public Animal{
	public:
		Horse (std::string name): Animal(name){}
		void print()const;
		~Horse();

	private:

};
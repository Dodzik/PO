#pragma once
#include "Animal.h"
#include "Animals.h"
#include <vector>
#include <memory>
#include <algorithm>
#include <map>

class Meadow {
	public:
		void add(std::unique_ptr<Animal> ani);

		void print(std::string str)const;
		
		void countNames();

		std::vector<Sheep*> getSheepHerd();
	private:
		std::vector<std::unique_ptr<Animal>> _vec;
};
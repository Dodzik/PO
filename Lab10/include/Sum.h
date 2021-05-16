#pragma once
#include "Product.h"

class Sum{
	public:
	//konstruktor klasy Suma
		Sum(float sum);
	//funckja zwaracjąca przechowywaną sume 
		float value()const;
	//funkcja dodająca podany element do sumy
		void operator()(float num);

	private:
	//zmienna przechowująca sume
		float _sum;
};
//funkcja licząca ogólna sume wyrazów dla danego produktu
Sum sumData(const Product& data);
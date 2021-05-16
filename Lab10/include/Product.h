#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
//klasa product
class Product{
	public:
	//konstruktor klasy product
		Product(std::string prod,std::vector<float> num);
	//funkcja pozwalająca wypisać klase Produkt
		void print()const ;
	//funkcja zwracająca przechowywane vector przez Produkt
		std::vector<float> getNum()const;
	private:
	//nazwa produktu
		std::string _name;
	//vector przechowujący liczby
		std::vector<float> _num;
};
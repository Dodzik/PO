#pragma once

#include "Product.h"
#include <functional>

class Table{

	public:
	//difultowy konstruktor bezargumentowy klasy Table
		Table() = default;

	//Przeciążenie operatora += pozwalające dodać dany element do vectora
		void operator +=(Product prod);

		
	//publicznie dostępna zmienna określająca długość najkrutszego wiersza
		unsigned minRow=0;
	//funkcja wypisująca wszystkie produkty znajdujące się w klasie Table
		void print()const;
	//funkcja pozwalająca sortować produkty po danej kolumnie
		const Table& sort(unsigned ind);
	//funkcja pozwalająca sortować produkty po zadanej funkcji porównującej
		Table& sortBy(std::function<bool(const Product& o1, const Product& o2)>cmp);
	private:
	//vector przechowujący wszystkie Produkty w klasie Table
		std::vector<Product> _vec;
	

};
//funkcja pomocnicza sortująca po podanej kolumnie

bool cmp(const Product& o1, const Product & o2,int ind);
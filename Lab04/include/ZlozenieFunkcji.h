#pragma once
#include "Funkcje.h"
#include <vector>

class ZlozenieFunkcji{

	public:

	//funckja dodająca dany parametr fun do vectora funckji funs
		void insert(std::function<double(double)> fun);

	//funckja obliczająca wartość złożenia wszystkich funkcji z funs dla wartości x
		double wynik(double x);

		//przeładowanie operatora [] zwraca wartość dla pewnej podanej wartości ind+1 złożeń funkcji
		double operator[](int ind);

	private:

	//vector funs przechowujący kolejno funkjce podane do złożenia
	std::vector<std::function<double(double)>> funs = std::vector<std::function<double(double)>>();
	
	//vector values przechowujący wartości po kolejnych i-tych złożeniach funkcji
	std::vector<double> values=std::vector<double> ();
};
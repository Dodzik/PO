#pragma once
#include "FlatShape.h"

//klasa Triangle dziedziczy po klasie FlatShape
class Triangle: public FlatShape{
	public:
		//konstruktor trójkąta o podanej nazwie
		Triangle(std::string chain);

		//funkcja zwracająca pole danego trójkąta
		//dla ułatwienia działa tylko gdy trójkąt jest prostokątny
		double pole();
};
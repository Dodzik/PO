#pragma once
#include <iostream>

//klasa macierzysta
class Primitive{
	public:
		//konstruktor jedno argumentowy val = war
		Primitive(float war);
		//konstruktor bezargumentowy val = 0
		Primitive();
		//funkcja zmieniająca wartość val na war
		void Set(float war);
		//funkcja zwracająca val
		virtual float Get()const;
		//funkcja pozwalająca zadane równanie i wynik który kryje się pod zmienna val
		virtual void PrintWithValue()const;
		//funkcja która jest nadpisywana przez pochodne klasy reprezentuje działanie
		virtual void prt()const;
	private:
		//zmienna do przechowywania wyniku
		float val;
};
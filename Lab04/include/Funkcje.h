#pragma once
#include <cmath>
#include <functional>

class Sinus{
	public:
		/*konstruktor obiektu sinus z parametrami x=a i y=b*/
		Sinus (double a, double b);


		/*przeładowanie operatora () zwracające f(a)= = sin(x*a + y) gdzie 
		x i y to parametry obiektu */
		double operator ()(double a)const;

	private:
		//param x
		double x;
		//param y
		double y;

};

class PierwiastekKwadratowy{
	public:

	// przeładowanie operatora () zwracające sqrt(a)
	double operator ()(double a)const;

};

class Liniowa{
	
	public:

		//konstruktor obiektu Liniowa z parametrami x=a i y=b
		Liniowa (double a, double b);

		/*przeładowanie operatora() zwracającego f(a)= = 
		x*a + y gdzie x i y to parametry obiektu*/
		double operator ()(double a)const;

		
	private:
		//param x
		double x;
		//param y
		double y;
};
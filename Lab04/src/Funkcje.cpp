#include "../include/Funkcje.h"
#include <cmath>


Sinus::Sinus(double a,double b): x(a),y(b){}

double Sinus::operator ()(double a)const{
	return sin(x*a +y);
}

double PierwiastekKwadratowy::operator ()(double a)const{

	return sqrt(a);
}

Liniowa::Liniowa(double a,double b): x(a),y(b){}


double Liniowa::operator ()(double a)const{
	return x * a + y;
}
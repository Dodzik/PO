#pragma once

#include <iostream>
#include <cmath>

//klasa FlatPoint
class FlatPoint{
	public:
		//Konstryktor klasy FlatPoint oblicza dodatkowo odległość od środka i ustawiwa 	na zmienną _disc
		FlatPoint(int x,int y);
		/*
		Przełądowanie operatora pozwalające określić kolejność FlatPointów w secie
		*/
		bool operator<(const FlatPoint& other)const;

		//funkcja wypisująca informacje o FlatPoint
		void Print()const;

		//gettery do zmiennych FlatPointu
		int getX()const;

		int getY()const;

		float getDisc()const;

		//funkcja statyczna wypisujaca zmianna _y
		static void FunctionPrintY(const FlatPoint& point);

		//funckja statyczna printująca informacje o FlatPoint
		static void PrintPoint(const FlatPoint& point);

	private:
		//zmienna x
		int _x;
		//zmienna y
		int _y;
		//zmienna przechowująca odległość od punkty (0, 0)
		float _disc;


};
//funktor pozwalający sortować FlatPointy rosnąco po zmiennej x
class OrderAscX{
	public:
		bool operator()(const FlatPoint& a,const FlatPoint& b)const;
};
//funktor pozwalający sortować FlatPointy malejąco po zmiennej y
class OrderDescY{
	public:
		bool operator()(const FlatPoint& a,const FlatPoint& b)const;
};


//funkcja maxdistanceasc zwracająca prawde gdy najewiększa współżędna punktu a jest mniejsza od najwiekszej współżędnej punktu b
bool MaxDistanceAsc (const FlatPoint& a, const FlatPoint& b);

//funkcja wypisujaca zmianna _x z FlatPoint
void FunctionPrintX(const FlatPoint& a);

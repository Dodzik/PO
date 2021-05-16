#pragma once
#include "Vertex.h"
#include <string>
#include <iostream>
#include <vector>
class FlatShape{
	public:
		//konstruktor FlatShape ustawiający chain do pola nam
		FlatShape(std::string chain);

		//funkcja dodająca podany punkt Vertex do vectora Vertexów 
		FlatShape& dodajW(Vertex dummy);

		//przeładowanie += dodające podany punkt Vertex do vectora Vertexów 
		FlatShape& operator+=(Vertex dummy);

		//funkcja zwracająca nazwe obiektu
		std::string nazwa()const;

		//funkcja porównująca ze sobą 2 obiekty
		// porównanie na podstawie liczby punktów należących do figury
		bool operator ==(FlatShape dummy)const;

		//vector przechowujący wsazystkie punkty figury
		std::vector <Vertex> ver;
	private:
		//pole przechowujące nazwe figury
		std::string nam;

};
//funckja wypisująca Obiekt typu FlatShape
std::ostream& operator <<(std::ostream& os,const FlatShape& dummy);
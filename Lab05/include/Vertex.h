#pragma once
#include <ostream>
#include <math.h>
class Vertex{
	public:
		//konstruktor punktu Vertex który ma odpowiednio współżędne (a i b) 
		Vertex(int a,int b);
		//funkcja zwracająca współżędną x
		int getx()const;
		//funkcja zwracająca współżędną y
		int gety()const;
		//funckja zwracająca odległość miedzy dwoma punktami
		double len(Vertex dummy)const;

	private:
		//współżędna x
		int x;
		//współżędna y
		int y;
};

//funkcja wypisująca współżędne danego punktu
std::ostream& operator <<(std::ostream& os,const Vertex& dummy);
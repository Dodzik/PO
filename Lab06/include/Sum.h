#pragma once
#include "Primitive.h"
//dziedziczy po klasie Primitive
class Sum : public Primitive{
	public:
		// konstruktor klasy która reprezentuje dane działanie
		Sum(Primitive& a,Primitive& b);
		//nadpisanie funkcji wypisującej działanie
		void prt()const override;
		//nadpisanie funkcji get która zwraca wynik działania
		float Get()const override;

	private:
		//reprezentuje działanie po lewej
		Primitive& pra;
		//reprezentuje działanie po prawej
		Primitive& prb;
};

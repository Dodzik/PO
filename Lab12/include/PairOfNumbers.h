#pragma once

#include <iostream>

template<typename T1,typename T2>
class PairOfNumbers{

	public:
	//konstruktor
		PairOfNumbers(T1& num1,T2& num2): first(num1),second(num2){}


		//funkcja zamieniająca typy i wartość przechowywanych elementów w obiekcie
		PairOfNumbers<T2,T1> Swapped(){
			return PairOfNumbers<T2,T1>(second,first);
		}
		
		//Print method: 22.2 11
		//funkcja wyświetlająca informacje o parze
		void Print() const{
			std::cout<<"Print method: "<<first<<" "<<second<<"\n";
		}
		//funkcja dodająca daną liczbe do obu przechowywanych liczb
		void Add(int num){
			first +=num;
			second+= num;
		}
		//funkcja mnożąca daną liczbe przez przchowywane elementy
		void Scale(int num){
			first *=num;
			second *= num;
		}

// 		===== OBJECTS INFO =====
// 		This is NON-const pair of numbers
// 		This is const pair of numbers

		//funkcje wypisujące czy dany obiekt jest const
		void Info(){
			std::cout<<"This is NON-const pair of numbers\n";
		}
		void Info() const{
			std::cout<<"This is const pair of numbers\n";
		}
		//pubiczne liczby do których można się bezpośrednio odwoływać	
		T1& first;
		T2& second;
};
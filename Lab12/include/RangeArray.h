#pragma once
#include "PairOfNumbers.h"
template <typename T>
class RangeArray{

	public:
		//konstruktor
		RangeArray(const PairOfNumbers <int, T>& pa){
			_size = pa.second - pa.first;
			_arr = new T[_size];
		}
		//konstruktor pozwalający zatrzymac zmiany RangeArray w środku funkcji poza funkcja RangeArray sie nie zmieni
		RangeArray( RangeArray& other):_size(other.Size() ), _arr(new T[ other.Size() ]) {}

		//funkcja zwracająca size
		int Size(){
			return _size;
		}

		//operator pozwalający indeksować tablice od końca używając ujemnych indeksów
		T& operator [](int ind){
			if(ind<0){
				return _arr[ind+_size];
			}
			return _arr[ind];
		}

		//funkcja zwracająca wartość z danego indeksy jak wyzej pozwala używac ujemnych indeksów
		T At(int ind){
			if(ind<0){
				return _arr[ind+_size];
			}
			return _arr[ind];
		}
		//destruktor
		~RangeArray(){
			delete[] _arr;
		}

	private:
	//zmiena przechowująca size
		int _size;
	//zmiena przechowująca tablice
		T* _arr;
};
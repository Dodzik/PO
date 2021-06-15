#pragma once
#include <iostream>
#include <vector>



//klasa bazowa
class  Variable{
	public:
		//konstruktor
		Variable(std::string name):_name(name){}
		//virtualna funkcja wypisująca
		virtual void Print() const = 0;
		//getter name
		std::string getName()const{
			return _name;
		}
		//virtualny destruktor
		virtual ~Variable(){}

	protected:
		std::string _name;
};

//klasa z templatka która może przechowywac różne typy dziedziczy po klasie bazowej
template<typename T>
class Type : public Variable{
	public:
		//konstruktor
		Type(std::string name, T val);
		//funkcja wypisująca zoverridowana
		virtual void Print() const override;
		//getter i setter
		void SetValue(T val);
		T getVal()const;
		//destruktor
		~Type(){}

	private:
	//zmienna przechowująca dowolny typ
	T _val;
};


template<typename T>
T Type<T>::getVal()const{
	return _val;
}

template<typename T>
void Type<T>::SetValue(T val)
{
	_val = val;
}
//distance: 15 (forma wypisywania)
template<typename T>
void Type<T>::Print()  const {
	std::cout<<_name<<": "<<_val<<"\n";
}


template<typename T>
Type<T>::Type(std::string name ,T val):Variable(name),_val(val){}


//klasa która przechowuje elementy o różnych typoach jest ograniczona rozmiarem size
class ArrayOfVariables{
	public: 
		//konstruktor
		ArrayOfVariables(int size);

		//funkcja która jednocześnie przypisuje Type do wartości i dodaje dana wartość do kontenera
		template<typename T>
		Type<T>* CreateAndAdd(std::string name, T val);
		//funkcja wypisująca
		void Print() const;
		//destruktor
		~ArrayOfVariables();
	private:
	//liczba ograniczająca wielkość tablicy
	int _size;
	//vector przechowujący rózne typy
	std::vector<Variable*> _var;
};


template<typename T>
Type<T>* ArrayOfVariables::CreateAndAdd(std::string name, T val){
	Type<T>* var = new Type<T>(name,val);
	_var.push_back(var);
	return var;
}


//konwersja wymagana przez main aby używać templatek
using VariableChar = Type<char>;
using VariableBool = Type<bool>;
using VariableDouble = Type<double>;
using VariableInt = Type<int>;
using VariableFloat =Type<float>;

//klasa podobna do Type tyle że przechowuje dodatkowo jednostkę dlatego dziedziczy poo Type
template<typename T>
class VariableWithUnits : public Type<T>{
	public:
		//konstruktor
		VariableWithUnits(std::string name, T val , std::string unit):Type<T>(name,val), _unit(unit){}
		//funkcja wypisująca zoverridowana
		virtual void Print() const override;

	private:
	//string przechowujący jednostkę
		std::string _unit;
};
//speed: 333 [m/s]  (format wypisywania)
template<typename T>
void VariableWithUnits<T>::Print()const {
	std::cout<<this->getName()<<": "<<this->getVal()<<" ["<<_unit<<"]\n";
}
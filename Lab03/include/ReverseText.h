#pragma once
#include <string>


class ReverseText {
	friend std::ostream& operator <<(std::ostream& os, const ReverseText& dummy);
	public:
	//destruktor ReverseText 
	~ReverseText();
	
	//kostruktor bezargumentowy ReverseText
	ReverseText();


	/*chain - > stri
	 konstruktor argumentem typu string*/
	ReverseText(std::string chain);

	//
	//funkcja dodająca dany napis na koniec obiektu ReverseText
	void operator -=(std::string chain);


	//funkcja zwracająca ilośc wyrazów w obiekcie ReverseText
	int size();

	//operator zwalniająca pamiec jednego obiektu i przypsuje jego nazwie nowy obiekt
	void operator = (ReverseText && dummy);

	//funkcja zwracająca rekurenycyjnie wyrazy danego obiektu wraz z obiektami które sa przednim
	unsigned fragments()const;

	//konstruktor kopiujący
	ReverseText (const ReverseText& other);

	//konstruktor przenoszący
	ReverseText(ReverseText&& other);

	//operator przenoszący obiekt na konec listy
	void operator -=(ReverseText && dummy); 

	//funkcja zwracająca obiekt o danym indeksie
	const ReverseText& fragment(int ind)const;

	//zwraca stringa przechowywanego przez dany obiekt
	 std::string str()const;

	private:
	//string przechowujący ciąg znaków
	std::string stri="\0";
	//int który liczy ile obiektów jest w liscie
	int len =0;
	//wskazuje na obiekt ktory jest przednim
	ReverseText* prev=nullptr;

	void operator -=(ReverseText* dummy);
};

std::ostream& operator <<(std::ostream& os, const ReverseText& dummy);
	
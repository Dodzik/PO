#pragma once

#include <string>
#include <sstream>


/*
Dziedziczenie klas
	-GameObj jest bazą  wszyskie klasy są elementami gry
	-Character dzidziczy tylko po obiekcie ponieważ są nimi postacie
	-Hurting są obrażeniami wiec dziedziczą tylko po gameobj
	-Player jest postacią wiec dziedziczy po character
	-Bomb zadaje obrażenia wiec dzidziczy po Hurting
	-Boss zadaje obrażenia i jest postacią wiec dzidziczy po Hurting i Character

*/

class GameObj{
	public:
		//construcctor
		GameObj(std::string ID);
		//funkcja zwracająca id
		std::string id()const;
		//virtualna funkcja pozwalająca wyświetlać informacje o wszystkich elemetach
		virtual void printInfo(std::ostream& os)const =0;

		//destruktor default

		virtual ~GameObj() = default;

	protected:
	//zmienna przechowująca Id
		std::string _ID;

};


//funkcja pozwalająca drukowac informacje na wyjście
std::ostream& operator <<(std::ostream& os, const GameObj& obj);


class HP{
	public:
	//constructor klasy HP
		HP(int hp);
		//getter and setter
		void setHP(int hp);
		int getHP()const;

	private:
	//zmienna przechowująca HP
		int _HP;
};

class Character:public virtual GameObj{
	public:
	//constructor klasy character
		Character(HP hp,std::string nam,std::string id);
		//funkcja pozwalająca wypisac informacje o obiekcie Character
		virtual void printInfo(std::ostream& os)const override;
		//Funkcja zwracająca hp postaci 
		std::string hp()const;
	protected:
		HP _HP;
		std::string name;
};


class Hurting: public virtual GameObj{
	public:
	//constructor klasy hurting
		Hurting(HP damage,std::string id);
		//funkcja pozwalająca wypisac informacje o obiekcie Hurting
		virtual void printInfo(std::ostream& os)const override;
		//funkcja zwracająca obrażżenia danego elementu
		std::string hp()const;
	private:
		HP dmg;
};


class Player: public Character{

	public:
	//constructor klasy Player
		Player(HP hp, std::string nam, std::string id);
//funkcja pozwalająca wypisac informacje o obiekcie Player
		virtual void printInfo(std::ostream& os)const override;


};

class Bomb: public Hurting{
	public:
	//constructor klasy Bomb
		Bomb(HP hp, std::string id);

};

class Boss: public Character,public Hurting{

	public:
	//constructor klasy Boss
		Boss(HP hp, std::string nam, HP dmg, std::string id);
		//funkcja pozwalająca wypisac informacje o obiekcie Boss
		virtual void printInfo(std::ostream& os)const override;
};

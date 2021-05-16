#pragma once 
#include <iostream>
using namespace std;


class Object {
  public:
  Object(string n):name(n){}
  virtual ostream &print(ostream &out,int s=0 ) const = 0;
  string getName()const{return name;}//zwracamy nazwe pliku
  virtual Object *get(string n) = 0;
  virtual ~Object(){};
  // virtual Object* copy(Object *dummy) = 0;
  protected:
string name;


};




class File: public Object {//klasa bazowa dla wszystkich typow elementow (Dir, Link itp.)

  public:
  ostream &print(ostream &out,int s=0 ) const;//funkcja wypisująca nazwe do out z odpowiednim justowaniem
 
  File ( string n , int mem=0):Object(n),size(mem){}//konstruktor ustawiajacy nazwe pliku na n
  File *get(string n); //funkcja zwracajaca wskaznik na obiekt jesli jego nazwa to n 
	int getsize(){
		return size;
	};
	//File* copy(Object *dummy);
  ~File() {
    cout<<"---Destruktor File: "<<name<<endl;
  }
  protected:
	int size;

};

ostream &operator<<(ostream &o, const Object &f);//operator wypisywania dla File i klas pochodnych
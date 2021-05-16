#include "GameObj.h"


GameObj::GameObj(std::string ID): _ID(ID){

}


std::string GameObj::id()const{
	return _ID;
}


std::ostream& operator <<(std::ostream& os,const  GameObj& obj){
	obj.printInfo(os);
	return os;
}

/////////////////////////////////////////////////////////////////////


Character::Character(HP hp,std::string nam,std::string id):_HP(hp),name(nam),GameObj(id){}


std::string Character::hp()const{
	return "[" +std::to_string(_HP.getHP()) + " HP]"; 
}

void Character::printInfo(std::ostream& os)const{
	os<<name<<" , ma: "<<hp()<<"";

}




///////////////////////////////////////////////////////////////////
HP::HP(int hp):_HP(hp){}

void HP::setHP(int hp){
	_HP = hp;
}

int HP::getHP()const{
	return _HP;
}
////////////////////////////////////////////////////////////////////

Hurting::Hurting(HP damage,std::string id): GameObj(id),dmg(damage){
}

std::string Hurting::hp()const{
	return "[" + std::to_string(dmg.getHP()) + " HP]";
}

void Hurting::printInfo(std::ostream& os)const {
	os<<"Jego uderzenie odbiera: "<<hp();
}

///////////////////////////////////////////////////////////////////

Player::Player(HP hp, std::string nam, std::string id):Character(hp,nam,id),GameObj(id){
}

void Player::printInfo(std::ostream& os)const{
	os<<"Player "<<static_cast<Character>(*this);
	
}

//////////////////////////////////////////////////////////

Bomb::Bomb(HP hp, std::string id):GameObj(id),Hurting(hp,id){

}

///////////////////////////////////////////////////////////////////

Boss::Boss(HP hp, std::string nam, HP dmg, std::string id):GameObj(id),Character(hp,nam,id),Hurting(dmg,id){
}
void Boss::printInfo(std::ostream& os)const{
	os<<"Bad guy: "<<static_cast<Character>(*this)<<"\n";
	os<<static_cast<Hurting>(*this);
}
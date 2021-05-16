#include "FlatPoint.h"

FlatPoint::FlatPoint(int x,int y):_x(x),_y(y),_disc(sqrt(x*x+y*y)){}



bool FlatPoint::operator<(const FlatPoint& other)const{
	if(_disc < other._disc){
		return true;
	}
	return false;
}


void FlatPoint::Print()const{
	std::cout<<"Point coordinates ("<<_x<<", "<<_y<<") distance from origin: "<<_disc<<"\n";
}


int FlatPoint::getX()const{
	return _x;
}

int FlatPoint::getY()const{
	return _y;
}

float FlatPoint::getDisc()const{
	return _disc;
}

void FlatPoint::FunctionPrintY(const FlatPoint& point){
	std::cout<< "Function print y=" << point.getY() <<"\n";
}

void FlatPoint::PrintPoint(const FlatPoint& point){
	std::cout<< "Point coordinates (" << point.getX() <<", "<<point.getY()<<") distance from origin: "<<point.getDisc()<<"\n";
}



bool OrderAscX::operator()(const FlatPoint& a,const FlatPoint& b)const{
	if( a.getX() < b.getX() ){
		return true;
	}
	return false;
}

bool OrderDescY::operator()(const FlatPoint& a,const FlatPoint& b)const{
	if( a.getY() > b.getY() ){
		return true;
	}
	return false;
}



 bool MaxDistanceAsc (const FlatPoint& a, const FlatPoint& b){
	// int biga=0;
	// int bigb=0;
	// if(a.getX()>a.getY()){
	// 	biga=a.getX();
	// }
	// else {
	// 	biga = a.getY();
	// }
	
	// if(b.getX()>b.getY()){
	// 	bigb=b.getX();
	// }
	// else {
	// 	biga = b.getY();
	// }

	// if(biga<bigb){
	// 	 return true;
	// }
	// return false;
	/*
	zakomentowana część w sekcji ===== POINTS max(x, y) =====
	wyświetla tylko
		Point coordinates (0, 0) distance from origin: 0
		Point coordinates (3, 2) distance from origin: 3.60555
		nie dokońca mam pomysł dlaczego
	*/
	if(a.getX()>a.getY()){
		if( a.getX() < b.getY() || a.getX() < b.getY() ){
			return true;
		}
	}
	else{
		if( a.getY() < b.getY() || a.getY() < b.getY() ){
			return true;
		}
	}
	return false;
	
 }

void  FunctionPrintX(const FlatPoint& a){
	std::cout<<"Function print x="<<a.getX()<<"\n";
}
#include "Vertex.h"


Vertex::Vertex(int a,int b): x(a),y(b){

}
int Vertex::getx()const{
	return x;
}
int Vertex::gety()const{
	return y;
}

std::ostream& operator <<(std::ostream& os,const Vertex& dummy){
	os<<" <"<<dummy.getx()<<" , " << dummy.gety()<<"> ";
	return os;
}

double Vertex::len(Vertex dummy)const{
	return sqrt((x - dummy.x) * (x-dummy.x) + (y - dummy.y) * (y - dummy.y));

}
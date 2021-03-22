#include "ReverseText.h"
#include <utility>

ReverseText::ReverseText(std::string chain){
	stri = chain;
	len=chain.length();
	prev=nullptr;
}

ReverseText::ReverseText(){
	stri="";
	len=0;
	prev=nullptr;
}


void ReverseText::operator -=(std::string chain){
	if(prev==nullptr){
		ReverseText *dummy=new ReverseText(chain);
	this->prev=dummy;
	}
	else{
		*(this->prev)-=chain;
	}
	
	this->len+=chain.length();
}

int ReverseText::size(){
	return len;
}


unsigned ReverseText::fragments()const{
		if(prev==nullptr){
			return 1;
		}
		
		else return 1 + prev->fragments();
}


ReverseText::ReverseText (const ReverseText& other){
	if (this ==&other) return;
	len= other.len;
	stri=other.stri;

}

ReverseText::ReverseText(ReverseText&& other):stri(std::exchange(other.stri,"")),len(std::exchange(other.len,0)),prev(std::exchange(other.prev,nullptr)){}


void ReverseText::operator -=(ReverseText && dummy){
	ReverseText* it = new ReverseText(std::move(dummy));
	*this-=it;


	
}
void ReverseText::operator -=(ReverseText* dummy){
	if(prev==nullptr){
	this->prev=dummy;
	}
	else{
		*(this->prev)-=dummy;
	}
	
	this->len+=dummy->size();


}

void ReverseText::operator =(ReverseText && dummy){
	
	stri=std::exchange(dummy.stri,"");
	len=std::exchange(dummy.len,0);
	prev=std::exchange(dummy.prev,nullptr);
}



const ReverseText& ReverseText::fragment(int ind)const{

	if (ind==0) return *this;
	else return prev->fragment(ind-1);

}


 std::string ReverseText::str()const{
	return stri;

}
ReverseText::~ReverseText(){
	
		if( stri!=""){ 
		stri="";
		len=0;
		
		if(prev!=nullptr) delete prev;
	}
}

std::ostream& operator <<(std::ostream& os, const ReverseText& dummy){
	if(dummy.stri=="\0"){
		return os;
	}
	else if(dummy.prev==nullptr){
		return os<<dummy.stri;
	}
	else return os<<*dummy.prev<<dummy.stri;
}


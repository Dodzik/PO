#include "Product.h"

Product::Product(Primitive& a,Primitive& b):pra(a),prb(b){
	// pra = a;  //takie przypisanie powoduje błąd wymug listy 							inicjalizacyjnej
	// prb = b;

}
float Product::Get()const{
	return pra.Get() * prb.Get();
}

void Product::prt()const {
	std::cout<<"(";
	pra.prt();
	std::cout<<"*";
	prb.prt();
	std::cout<<")";
	/* std::cout<<"("<<pra.Get()<<"*"<<prb.Get()<<")";
	w zakomentowanym układzie funkcja wyswietla w sekcji PRODUCT:
	jedynie aktualne zadanie gdzie pra.Get() jest wynikiem wszystkich działań znajdującyhc się po lewej stronie
	Nie powoduje to zmian w pozostałych sekcjach ponieważ działanie mnożenia jest w pojedyńczych nawiasach*/
}

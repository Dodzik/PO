#include "Sum.h"

Sum::Sum(Primitive& a,Primitive& b):pra(a),prb(b){
	// pra = a;  //takie przypisanie powoduje błąd
	// prb = b;

}
float Sum::Get()const{
	return pra.Get() + prb.Get();
}

void Sum::prt()const{
	std::cout<<"(";
	pra.prt();
	std::cout<<"+";
	prb.prt();
	std::cout<<")";

	/* std::cout<<"("<<pra.Get()<<"/"<<prb.Get()<<")";
	w zakomentowanym układzie funkcja wyswietla w sekcji SUM:
	jedynie aktualne zadanie gdzie pra.Get() jest wynikiem wszystkich działań znajdującyhc się po lewej stronie
	Nie powoduje to zmian w pozostałych sekcjach ponieważ działanie dodawania jest w pojedyńczych nawiasach*/
}

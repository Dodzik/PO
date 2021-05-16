#include "Ratio.h"

Ratio::Ratio(Primitive& a,Primitive& b):pra(a),prb(b){
	// pra = a;  //takie przypisanie powoduje błąd
	// prb = b;

}
float Ratio::Get()const{
	return pra.Get() / prb.Get();
}

void Ratio::prt()const {
	std::cout<<"(";
	pra.prt();
	std::cout<<"/";
	prb.prt();
	std::cout<<")";
	/* std::cout<<"("<<pra.Get()<<"/"<<prb.Get()<<")";
	w zakomentowanym układzie funkcja wyswietla w sekcji RATIO:
	jedynie aktualne zadanie gdzie pra.Get() jest wynikiem wszystkich działań znajdującyhc się po lewej stronie
	Nie powoduje to zmian w pozostałych sekcjach ponieważ działanie dzielenia jest w pojedyńczych nawiasach*/
}

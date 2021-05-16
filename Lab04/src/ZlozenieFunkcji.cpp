#include "../include/ZlozenieFunkcji.h"\

void ZlozenieFunkcji::insert(std::function<double(double)> fun){
	funs.push_back(fun);
}

double ZlozenieFunkcji::wynik(double x){
	values.clear(); //ważne aby czyścić vector w innym razie wyświetlimy na końcu 						poprzednie wyniki
	values.push_back(funs[0](x));
	for(unsigned i=1; i<funs.size();i++){
		values.push_back(funs[i](values[values.size()-1]));
	}

	return values[values.size()-1];
}

double ZlozenieFunkcji::operator[](int ind){
	return values[ind];
}
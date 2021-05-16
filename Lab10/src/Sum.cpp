#include "Sum.h"

Sum sumData(const Product& data){
	float sum = 0;
	const std::vector<float>& num = data.getNum();
	
	for(auto a:num){
		sum+=a;
	}
	return Sum(sum);

}

Sum::Sum(float sum):_sum(sum){

}


float Sum::value()const{
	return _sum;
}


void Sum::operator()(float num){
	_sum+=num;
}
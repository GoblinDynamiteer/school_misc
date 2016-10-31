#include "funk.h"

_Bool checkDiv(int i){
	return (1.0/i)>MIN;
}


double divAdd(double sum, int i){
	return sum += 1.0 / i;
}

double divSub(double sum, int i){
	return sum -= 1.0 / i;
}
//
//  math.cpp
//  Task1
//
//  Created by Степан Языков on 24.02.2023.
//

#include "math.hpp"

int power(int x, int s){
	if (s == 1){
		return x;
	} else {
		return x * power(x, s - 1);
	}
}

int summation(int x, int y){
	return x + y;
}

int subtract(int x, int y){
	return x - y;
}

int multiply(int x, int y){
	return x * y;
}

double division(int x, int y){
	if (x == 0 || y == 0){
		return 0;
	}
	
	return x / y;
}

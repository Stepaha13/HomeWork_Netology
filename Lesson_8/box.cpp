//
//  box.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "box.hpp"

bool box::verification(){
	if (sidesCount == 4 && (A + B + C + D == 360) && (a == c && a == b && a == d) &&
		(A == 90 && B == 90 && C == 90 && D == 90))
	{
		return true;
	} else {
		return false;
	}
}

box::box(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_):
	quadrangle(a_, b_, c_, d_, A_, B_, C_, D_, "Квадрат"){
		
		verification();
		printCreated();
	};

//
//  rhomb.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "rhomb.hpp"

bool rhomb::verification(){
	if (sidesCount == 4 && (a == c && a == b && a == d) && (A == C && B == D))
	{
		return true;
	} else {
		return false;
	}
}

rhomb::rhomb(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_):
	quadrangle(a_, b_, c_, d_, A_, B_, C_, D_, "Ромб"){
	
		verification();
		printCreated();
};

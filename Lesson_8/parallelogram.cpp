//
//  parallelogram.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "parallelogram.hpp"

bool parallelogram::verification(){
	if (sidesCount == 4 && (a == c && b == d) && (A == C && B == D))
	{
		return true;
	} else {
		return false;
	}
}

parallelogram::parallelogram(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_):
	quadrangle(a_, b_, c_, d_, A_, B_, C_, D_, "Параллелограмм"){
		
		verification();
		printCreated();
	};

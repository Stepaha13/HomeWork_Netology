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

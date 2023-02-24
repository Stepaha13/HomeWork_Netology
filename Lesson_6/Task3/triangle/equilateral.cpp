//
//  equilateral.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "equilateral.hpp"

bool equilateral::verification(){
	if (sidesCount == 3 && (A + B + C == 180) && (a == c && a == b) &&
		(A == 60 && C == 60 && B == 60))
	{
		return true;
	} else {
		return false;
	}
}

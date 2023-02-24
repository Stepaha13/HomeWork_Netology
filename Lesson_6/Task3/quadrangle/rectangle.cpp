//
//  rectangle.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "rectangle.hpp"

bool rectangle::verification(){
	if (sidesCount == 4 && (A + B + C + D == 360) && (a == c && b == d) &&
		(A == 90 && B == 90 && C == 90 && D == 90))
	{
		return true;
	} else {
		return false;
	}
}

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

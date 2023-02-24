//
//  isosceles.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "isosceles.hpp"

bool isosceles::verification(){
	if (sidesCount == 3 && (A + B + C == 180) && a == c && A == C)  {
		return true;
	} else {
		return false;
	}
}

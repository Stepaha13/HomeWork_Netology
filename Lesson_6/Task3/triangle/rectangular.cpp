//
//  rectangular.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "rectangular.hpp"

bool rectangular::verification(){
	if (sidesCount == 3 && (A + B + C == 180) && C == 90)  {
		return true;
	} else {
		return false;
	}
}

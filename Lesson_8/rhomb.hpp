//
//  rhomb.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef rhomb_hpp
#define rhomb_hpp

#include <stdio.h>
#include "quadrangle.hpp"

class rhomb:public quadrangle{ //ромб
private:
	bool verification() override;
public:
	rhomb(int acbd, int AC, int BD):
		quadrangle(acbd, acbd, acbd, acbd, AC, BD, AC, BD, "Ромб"){};
	
	rhomb(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);
};
#endif /* rhomb_hpp */

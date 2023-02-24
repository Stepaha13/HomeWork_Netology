//
//  box.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef box_hpp
#define box_hpp

#include <stdio.h>
#include "quadrangle.hpp"

class box:public quadrangle{ //квадрат
private:
	bool verification() override;
	
public:
	box(int acbd):
		quadrangle(acbd, acbd, acbd, acbd, 90, 90, 90, 90, "Квадрат"){};
	
	box(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_):
		quadrangle(a_, b_, c_, d_, A_, B_, C_, D_, "Квадрат"){};

};

#endif /* box_hpp */

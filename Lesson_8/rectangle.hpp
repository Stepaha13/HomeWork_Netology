//
//  rectangle.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef rectangle_hpp
#define rectangle_hpp

#include <stdio.h>
#include "quadrangle.hpp"

class rectangle:public quadrangle{ //прямоугольник
private:
	bool verification() override;
	
public:
	rectangle(int ac, int bd):
		quadrangle(ac, bd, ac, bd, 90, 90, 90, 90, "Прямоугольник"){};
	
	rectangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);
};

#endif /* rectangle_hpp */

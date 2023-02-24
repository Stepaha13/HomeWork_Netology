//
//  rectangular.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef rectangular_hpp
#define rectangular_hpp

#include <stdio.h>
#include "triangle.hpp"

class rectangular:public triangle{ //прямоугольный треугольник
private:
	bool verification() override;
	
public:
	rectangular(int a_, int b_, int c_, int A_, int B_):
		triangle(a_, b_, c_, A_, B_, 90, "Прямоугольный треугольник"){};
	
	rectangular(int a_, int b_, int c_, int A_, int B_, int C_): // task 3
		triangle(a_, b_, c_, A_, B_, C_, "Прямоугольный треугольник"){};
	
};

#endif /* rectangular_hpp */

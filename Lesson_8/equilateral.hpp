//
//  equilateral.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef equilateral_hpp
#define equilateral_hpp

#include <stdio.h>
#include "triangle.hpp"

class equilateral:public triangle{ //равносторонний треугольник
private:
	bool verification() override;
	
public:
	equilateral(int abc):
	triangle(abc, abc, abc, 60, 60, 60, "Равносторонний треугольник"){};
	
	equilateral(int a_, int b_, int c_, int A_, int B_, int C_);
	
};

#endif /* equilateral_hpp */

//
//  isosceles.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef isosceles_hpp
#define isosceles_hpp

#include <stdio.h>
#include "triangle.hpp"

class isosceles:public triangle{ //равнобедренный треугольник
private:
	bool verification() override;
	
public:
	isosceles(int ac, int b_, int AC, int B_):
		triangle(ac, b_, ac, AC, B_, AC, "Равнобедренный треугольник"){};
	
	isosceles(int a_, int b_, int c_, int A_, int B_, int C_);

};

#endif /* isosceles_hpp */

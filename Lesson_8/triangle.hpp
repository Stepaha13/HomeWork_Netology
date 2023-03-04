//
//  triangle.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef triangle_hpp
#define triangle_hpp

#include <stdio.h>
#include "figure.hpp"
#include "errorСonstructor.hpp"

class triangle:public figure{
private:
	
protected:
	int a; int A;
	int b; int B;
	int c; int C;
	
	virtual bool verification() override;
	void printCreated();
	
public:
	triangle():figure(3, "Треугольник"){};
	triangle(int a_, int b_, int c_, int A_, int B_, int C_);
	triangle(int a_, int b_, int c_, int A_, int B_, int C_, std::string nameFigure_);
	
	std::string print_info();
	
	void printInfoTask3() override;
};

#endif /* triangle_hpp */

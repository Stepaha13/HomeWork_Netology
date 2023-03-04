//
//  quadrangle.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef quadrangle_hpp
#define quadrangle_hpp

#include <stdio.h>
#include "figure.hpp"
#include "errorСonstructor.hpp"

class quadrangle:public figure{
protected:
	int a; int A;
	int b; int B;
	int c; int C;
	int d; int D;
	
	virtual bool verification() override;
	void printCreated();
	
public:
	quadrangle():figure(4, "Четырехугольник"){}
	quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);
	quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_, std::string nameFigure_);
	
	std::string print_info();
	
	void printInfoTask3() override;
};

#endif /* quadrangle_hpp */

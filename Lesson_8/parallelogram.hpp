//
//  parallelogram.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef parallelogram_hpp
#define parallelogram_hpp

#include <stdio.h>
#include "quadrangle.hpp"

class parallelogram:public quadrangle{ //параллелограмм
private:
	bool verification() override;
	
public:
	parallelogram(int ac, int bd, int AC, int BD):
		quadrangle(ac, bd, ac, bd, AC, BD, AC, BD, "Параллелограмм"){};
	
	parallelogram(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);

};

#endif /* parallelogram_hpp */

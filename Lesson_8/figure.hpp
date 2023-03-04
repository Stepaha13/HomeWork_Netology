//
//  figure.hpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef figure_hpp
#define figure_hpp

#include <stdio.h>
#include <iostream>

class figure{
private:
	
protected:
	int sidesCount;
	std::string nameFigure;
	virtual bool verification();
	
public:
	figure();
	figure(int sidesCount_, std::string nameFigure_);
	
	std::string get_sidesCount();
	
	virtual void printInfoTask3();
};

#endif /* figure_hpp */

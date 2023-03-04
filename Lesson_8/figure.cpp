//
//  figure.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "figure.hpp"
#include "errorСonstructor.hpp"

bool figure::verification(){
	if (sidesCount == 0) {
		return true;
	} else {
		return false;
	}
}

figure::figure(){
	sidesCount = 0;
	   nameFigure = "Фигура";
   };

figure::figure(int sidesCount_, std::string nameFigure_){
	sidesCount = sidesCount_;
	   nameFigure = nameFigure_;
   };

std::string figure::get_sidesCount(){
	return nameFigure + ": " + std::to_string(sidesCount);
};

void figure::printInfoTask3(){
	std::cout << nameFigure << std::endl;
	std::string verif = verification() ? "Правильная" : "Неправильная";
	std::cout << verif << std::endl;
	std::cout << "Количество сторон: " << sidesCount << "\n" << std::endl;
}

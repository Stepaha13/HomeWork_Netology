//
//  triangle.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "triangle.hpp"

bool triangle::verification(){
	if (sidesCount == 3 && (A + B + C == 180))  {
		   return true;
	   } else {
		   return false;
	   }
   }

triangle::triangle(int a_, int b_, int c_, int A_, int B_, int C_){
	
	a = a_; A = A_;
	   b = b_; B = B_;
	   c = c_; C = C_;
	   
	   sidesCount = 3;
	   nameFigure = "Треугольник";
}

triangle::triangle(int a_, int b_, int c_, int A_, int B_, int C_, std::string nameFigure_){
	
	a = a_; A = A_;
	   b = b_; B = B_;
	   c = c_; C = C_;
	   
	   sidesCount = 3;
	   nameFigure = nameFigure_;
}

std::string triangle::print_info(){
	return 	nameFigure + ":\n" +
			   "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) +
			   " c=" + std::to_string(c) + "\n" +
			   "Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) +
			   " C=" + std::to_string(C);
}

void triangle::printInfoTask3(){
	std::cout << nameFigure << std::endl;
	std::string verif = verification() ? "Правильная" : "Неправильная";
	std::cout << verif << std::endl;
	std::cout << "Количество сторон: " << sidesCount << std::endl;
	std::cout << "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) +
					" c=" + std::to_string(c) + "\n" +
					"Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) +
					" C=" + std::to_string(C) + "\n" << std::endl;
}

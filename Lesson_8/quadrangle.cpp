//
//  quadrangle.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "quadrangle.hpp"

bool quadrangle::verification(){
	if (sidesCount == 4 && (A + B + C + D == 360))  {
		return true;
	} else {
		throw verificationException("Ошибка создания "+ nameFigure +". Причина: сумма углов не равна 360");
	}
}

quadrangle::quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_){
	
	a = a_; A = A_;
	b = b_; B = B_;
	c = c_; C = C_;
	d = d_; D = D_;
	
	sidesCount = 4;
	nameFigure = "Четырехугольник";
	verification();
	printCreated();
}

quadrangle::quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_, std::string nameFigure_){
	
	a = a_; A = A_;
	   b = b_; B = B_;
	   c = c_; C = C_;
	   d = d_; D = D_;
	   
	   sidesCount = 4;
	   nameFigure = nameFigure_;
	verification();
}

void quadrangle::printCreated(){
	std::cout << nameFigure << " (Стороны ";
	std::cout << a << ", " << b << ", " << c << ", " << d << "; ";
	std::cout << "углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n\n";
}

std::string quadrangle::print_info(){
	
	return 	nameFigure + ":\n" +
			"Стороны: a=" + std::to_string(a) +
			" b=" + std::to_string(b) +
			" c=" + std::to_string(c) +
			" d=" + std::to_string(d) + "\n" +
			"Углы: A=" + std::to_string(A) +
			" B=" + std::to_string(B) +
			" C=" + std::to_string(C) +
			" D=" + std::to_string(D);
}

void quadrangle::printInfoTask3(){
	std::cout << nameFigure << std::endl;
	std::string verif = verification() ? "Правильная" : "Неправильная";
	
	std::cout << verif << std::endl;
	std::cout << "Количество сторон: " << sidesCount << std::endl;
	std::cout << "Стороны: a=" + std::to_string(a) +
				" b=" + std::to_string(b) +
				" c=" + std::to_string(c) +
				" d=" + std::to_string(d) + "\n" +
				"Углы: A=" + std::to_string(A) +
				" B=" + std::to_string(B) +
				" C=" + std::to_string(C) +
				" D=" + std::to_string(D) + "\n" << std::endl;
}

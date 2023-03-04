//
//  isosceles.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "isosceles.hpp"

bool isosceles::verification(){
	if (sidesCount == 3 && (A + B + C == 180) && a == c && A == C) {
		return true;
	} else {
		throw verificationException("Ошибка создания "+ nameFigure +". Причина: стороны a и c не равны или углы A и C не равны");
	}
}

isosceles::isosceles(int a_, int b_, int c_, int A_, int B_, int C_):triangle(a_, b_, c_, A_, B_, C_, "Равнобедренный треугольник"){
	verification();
	printCreated();
};

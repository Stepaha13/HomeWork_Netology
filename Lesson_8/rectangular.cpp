//
//  rectangular.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include "rectangular.hpp"

bool rectangular::verification(){
	if (sidesCount == 3 && (A + B + C == 180) && C == 90)  {
		return true;
	} else {
		throw verificationException("Ошибка создания "+ nameFigure +". Причина: угол C не равен 90");
	}
}

rectangular::rectangular(int a_, int b_, int c_, int A_, int B_, int C_): // task 3
	triangle(a_, b_, c_, A_, B_, C_, "Прямоугольный треугольник"){
		verification();
		printCreated();
	};

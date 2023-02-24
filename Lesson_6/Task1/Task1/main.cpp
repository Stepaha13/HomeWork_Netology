//
//  main.cpp
//  Task1
//
//  Created by Степан Языков on 24.02.2023.
//

#include <iostream>
#include "math.hpp"

int main(int argc, const char * argv[]) {
	int x = 0;
	int y = 0;
	int com = 0;
	std::cout << "Введите первое число: ";
	std::cin >> x;
	
	std::cout << "Введите второе число: ";
	std::cin >> y;
	
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> com;
	
	switch (com) {
		case 1:
			std::cout << "сумма " << x << " и " << y << " = " << summation(x, y) << std::endl;
			break;
		case 2:
			std::cout << "из " << x << " вычесть " << y << " = " << subtract(x, y) << std::endl;
			break;
		case 3:
			std::cout << x << "умножить на " << y << " = " << multiply(x, y) << std::endl;
			break;
		case 4:
			std::cout << x << " разделить на " << y << " = " << division(x, y) << std::endl;
			break;
		case 5:
			std::cout << x << " в степени " << y << " = " << power(x, y) << std::endl;
			break;
		default:
			std::cout << "Неизвестная команда. До свидания!" << std::endl;
			break;
	}
			
	return 0;
}

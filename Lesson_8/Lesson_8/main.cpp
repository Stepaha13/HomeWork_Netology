//
//  main.cpp
//  Lesson_8
//
//  Created by Степан Языков on 25.02.2023.
//

#include <iostream>
#include "Header.h"

class lengthException : public std::exception{
public:
	const char* what() const noexcept override { return "Вы ввели слово запретной длины! До свидания";}
};

int function(std::string str, int forbidden_length);

void task1();
void task2();
int main(int argc, const char * argv[]) {
	
	int cycleIndex = 0;
			
					do {
						std::cout << "Ведите номер задания для проверки. Для выхода введите - 0" << std::endl;
						std::cin >> cycleIndex;
						
						switch (cycleIndex) {
							case 1:
								std::cout << "Задача 1. Простое исключение" << std::endl;
								task1();
								break;
								
							case 2:
								std::cout << "Задача 2. Исключения в конструкторах" << std::endl;
								task2();
								break;
								
							default:
								std::cout << "Неправильный номер задания" << std::endl;
								break;
						}
						
					} while (cycleIndex != 0);
	
	return 0;
}

void task1(){
	
	std::string str = "";
	int forbidden_length = 0;
	int res;
	
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	
	std::cout << "Введите слово: ";
	std::cin >> str;
	
	try {
		res = function(str, forbidden_length);
		std::cout << "Длина слова """ << str << """ равна " << res << std::endl;
		
	} catch (const lengthException& ex) {
		std::cout << ex.what() << std::endl;
		
	} catch (...) {std::cout << "Неизвестная ошибка!" << std::endl;}
	
}

void task2(){
	
	try {
		triangle tr {10, 20, 30, 50, 60, 70};
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		rectangular rec1 {10, 20, 30, 45, 45, 90};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		rectangular rec2 {10, 20, 30, 45, 44, 91};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		isosceles iso1 {10, 20, 10, 50, 60, 150};
				
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		isosceles iso2 {10, 20, 30, 50, 60, 70};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		equilateral eqo {30, 30, 30, 61, 62, 60};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		quadrangle qua {10, 20, 30, 40, 50, 60, 70, 80};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		rectangle rectan {10, 20, 10, 20, 90, 90, 90, 90};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		box b {20, 20, 20, 20, 90, 90, 90, 90};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		parallelogram par {20, 30, 20, 30, 30, 40, 30, 40};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
	
	try {
		rhomb rh {30, 30, 30, 30, 30, 40, 30, 40};
		
	} catch (verificationException &ex) {
		std::cout << ex.what() << "\n\n";
	}
}

int function(std::string str, int forbidden_length){
	
	if ( str.length() == forbidden_length){
		throw lengthException();
	}
	
	return static_cast<int>(str.length());
}

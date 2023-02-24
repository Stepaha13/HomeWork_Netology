//
//  main.cpp
//  Lesson_7
//
//  Created by Степан Языков on 24.02.2023.
//

#include <iostream>

#define MODE 1

#define SUB(a, b) ((a) - (b))


#if MODE == 1
int add(int a, int b);
#endif

void task1();
void task2();

int main(int argc, const char * argv[]) {
	
	int cycleIndex = 0;
		
				do {
					std::cout << "Ведите номер задания для проверки. Для выхода введите - 0" << std::endl;
					std::cin >> cycleIndex;
					
					switch (cycleIndex) {
						case 1:
							std::cout << "Задача 1. Препроцессорные директивы" << std::endl;
							task1();
							break;
							
						case 2:
							std::cout << "Задача 2. Фигуры. Стороны и углы" << std::endl;
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
	
#ifndef MODE
	std::cout << "Необходимо определить MODE" << std::endl;
	return;
#endif
	
#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	int a, b, res = 0;
	
	std::cout << "Работаю в боевом режиме" << std::endl;
	
	std::cout << "Введите число 1: ";
	std::cin >> a;
	
	
	std::cout << "Введите число 2: ";
	std::cin >> b;
	
	res = add(a, b);
	std::cout << "Результат сложения: " << res << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
	
}

void task2(){
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}

int add(int a, int b){
	return a + b;
}

//
//  counter.cpp
//  Task2
//
//  Created by Степан Языков on 24.02.2023.
//

#include "counter.hpp"

Counter::Counter(){
	i = 1;
}

Counter::Counter(int i_){
	i = i_;
}

void Counter::increment(){
	i++;
}

void Counter::decrement(){
	i--;
}

void Counter::print(){
	std::cout << i << std::endl;
}

void workTask2(Counter* counter){
	char str;
	bool ex = false;
	
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> str;
		
		switch (str) {
			case '+':
				counter->increment();
				break;
			case '-':
				counter->decrement();
				break;
			case '=':
				counter->print();
				break;
			case 'x':
				std::cout << "До свидания!" << std::endl;
				ex = true;
				break;
			
			default:
				std::cout << "Неизвестная команда. До свидания!" << std::endl;
				ex = true;
				break;
		}
		
	} while (!ex);
}

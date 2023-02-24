//
//  main.cpp
//  Task2
//
//  Created by Степан Языков on 24.02.2023.
//

#include "counter.hpp"

int main(int argc, const char * argv[]) {
	
	int i = 0;
		std::string str = "";
		
		std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
		std::cin >> str;
		
		if (str == "yes"){
			std::cout << "Введите начальное значение счётчика: ";
			std::cin >> i;
			Counter counter{i};
			workTask2(&counter);
		} else {
			Counter counter;
			workTask2(&counter);
		}
	
	return 0;
}

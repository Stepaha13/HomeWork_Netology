//
//  main.cpp
//  task1
//
//  Created by Степан Языков on 12.02.2023.
//

#include <iostream>

class Calculator {
	double num1;
	double num2;
	
public:
	bool set_num1(double num1);
	bool set_num2(double num2);
	double add();
	double multiply();
	double subtract_1_2();
	double subtract_2_1();
	double divide_1_2();
	double divide_2_1();
	void demonstrationWork();
};

class Counter {
	int i;
	
public:
	Counter();
	Counter(int i_);
	void increment();
	void decrement();
	void print();
	
};

void Task_1();
void setNum(Calculator* calc, std::string strNum);
void task_2();
void workTask2(Counter counter);

int main(int argc, const char * argv[]) {
	
	int cycleIndex = 0;
	
	do {
		std::cout << "Ведите номер задания для проверки. Для выхода введите - 0" << std::endl;
		std::cin >> cycleIndex;
		
		switch (cycleIndex) {
			case 1:
				Task_1();
				break;
				
			case 2:
				task_2();
				break;
				
			default:
				std::cout << "Неправильный номер задания" << std::endl;
				break;
		}
		
	} while (cycleIndex != 0);
	
	return 0;
}

void Task_1(){
	
	Calculator calc;
	
	setNum(&calc, "num1");
	
	setNum(&calc, "num2");
	
	calc.demonstrationWork();
	
	setNum(&calc, "num1");
	
	setNum(&calc, "num2");
	
	calc.demonstrationWork();
	
}

void setNum(Calculator* calc, std::string strNum){
	double num = 0;
	bool installNum = false;
	
	do {
		std::cout << "Введите " + strNum + ": " << std::endl;
		std::cin >> num;
		
		if (strNum == "num1"){
			installNum = calc->set_num1(num);
		} else {
			installNum = calc->set_num2(num);
		}
		
		if (!installNum) {
			std::cout << "Неверный ввод!" << std::endl;
		}
	} while (installNum == false);
}

double Calculator::add(){
	return this->num1 + this->num2;
}

double Calculator::multiply(){
	return this->num1 * this->num2;
}

double Calculator::subtract_1_2(){
	return this->num1 - this->num2;
}

double Calculator::subtract_2_1(){
	return this->num2 - this->num1;
}

double Calculator::divide_1_2(){
	return this->num1 / this->num2;
}

double Calculator::divide_2_1(){
	return this->num2 / this->num1;
}

void Calculator::demonstrationWork(){
	std::cout << "num1 + num2 = " << this->add() << std::endl;
	std::cout << "num1 * num2 = " << this->multiply() << std::endl;
	std::cout << "num1 - num2 = " << this->subtract_1_2() << std::endl;
	std::cout << "num2 - num1 = " << this->subtract_2_1() << std::endl;
	std::cout << "num1 / num2 = " << this->divide_1_2() << std::endl;
	std::cout << "num2 / num1 = " << this->divide_2_1() << std::endl;
}

bool Calculator::set_num1(double num1){
	
	if (num1 != 0){
		this->num1 = num1;
		return true;
	} else {
		return false;
	}
}

bool Calculator::set_num2(double num2){
	
	if (num2 != 0){
		this->num2 = num2;
		return true;
	} else {
		return false;
	}
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

void task_2(){
	
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
}

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

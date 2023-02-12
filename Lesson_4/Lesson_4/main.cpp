//
//  main.cpp
//  Lesson_4
//
//  Created by Степан Языков on 12.02.2023.
//

#include <iostream>
#include <fstream>

class address{
	std::string sity;
	std::string street;
	int houseNumber;
	int apartmentNumber;
	
public:
	address(){sity = ""; street = ""; houseNumber = 0; apartmentNumber = 0;};
	address(std::string sity_, std::string street_, int houseNumber_, int apartmentNumber_);
	std::string get_sity();
	std::string out();
};

void task1();
void task2();
void sort(address *arr_addresses, int size);

int main(int argc, const char * argv[]) {

	int cycleIndex = 0;
		
		do {
			std::cout << "Ведите номер задания для проверки. Для выхода введите - 0" << std::endl;
			std::cin >> cycleIndex;
			
			switch (cycleIndex) {
				case 1:
					std::cout << "Задача 1. Адреса" << std::endl;
					task1();
					break;
					
				case 2:
					std::cout << "Задача 2. Сортируем адреса" << std::endl;
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
	std::ifstream inFile ("/Users/yazykovstepan/C++/HomeWork/Lesson_4/Lesson_4/in.txt");
	std::ofstream outFile ("/Users/yazykovstepan/C++/HomeWork/Lesson_4/Lesson_4/out.txt");
	
	outFile.clear();
	
	std::string sity, street = "";
	int house, apartment = 0;
	int count_address = 0;
	bool res = false;
	
	inFile >> count_address;
	
	address *arr_addresses = new address[count_address];
	
	for (int i = 0; i < count_address; i++) {
		inFile >> sity;
		inFile >> street;
		inFile >> house;
		inFile >> apartment;
		
		arr_addresses[i] = address {sity, street, house, apartment};
	}
	
	outFile << count_address;
	outFile << "\n";
	
	for (int i = 0; i < count_address; i++) {
		outFile << arr_addresses[i].out();
		bool res = true;
	}
	
	if (res){
		std::cout << "Файл out.txt заполнен." << std::endl;
	}
	
	inFile.close();
	outFile.close();
}

void task2(){
	std::ifstream inFile ("/Users/yazykovstepan/C++/HomeWork/Lesson_4/Lesson_4/in.txt");
	std::ofstream outFile ("/Users/yazykovstepan/C++/HomeWork/Lesson_4/Lesson_4/out.txt");
	
	outFile.clear();
	
	std::string sity, street = "";
	int house, apartment = 0;
	int count_address = 0;
	bool res = false;
	
	inFile >> count_address;
	
	address *arr_addresses = new address[count_address];
	
	for (int i = 0; i < count_address; i++) {
		inFile >> sity;
		inFile >> street;
		inFile >> house;
		inFile >> apartment;
		
		arr_addresses[i] = address {sity, street, house, apartment};
	}
	
	sort(arr_addresses, count_address);
	
	outFile << count_address;
	outFile << "\n";
	
	for (int i = 0; i < count_address; i++) {
		outFile << arr_addresses[i].out();
		bool res = true;
	}
	
	if (res){
		std::cout << "Файл out.txt заполнен." << std::endl;
	}
	
	inFile.close();
	outFile.close();
}

address::address(std::string sity_, std::string street_, int houseNumber_, int apartmentNumber_){
	sity = sity_;
	street = street_;
	houseNumber = houseNumber_;
	apartmentNumber = apartmentNumber_;
}

std::string address::get_sity(){
	return sity;
}

std::string address::out(){
	return sity + ", " + street + ", " +
	std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber) + "\n";
	
}

void sort(address *arr_addresses, int size){
	bool swap = false;
	do {
		swap = false;
		for (int i = 1; i < size - 1; i++) {
			std::string str1 = arr_addresses[i].get_sity();
			std::string str2 = arr_addresses[i - 1].get_sity();
			
			if (str1.compare(str2) < 0) {
				address buffer = arr_addresses[i - 1];
				arr_addresses[i - 1] = arr_addresses[i];
				arr_addresses[i] = buffer;
				bool swap = true;
			}
		}
	} while (swap);
}

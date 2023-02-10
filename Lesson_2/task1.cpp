#include <iostream>

enum month {
    january = 1,    
    february = 2,
    march = 3,      
    april = 4,
    may = 5,        
    june = 6,
    july = 7,       
    august = 8,
    september = 9,  
    october = 10,
    november = 11,   
    december = 12
};

int main (int argc, char** argv) {
    int num = 0;
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> num;
        
        if (num !=0) {
            switch (static_cast<int>(num)){
                case month::february: std::cout << "Февраль" << std::endl; break;
                case month::january: std::cout << "Январь" << std::endl; break;
                case month::march: std::cout << "Март" << std::endl; break;
                case month::april: std::cout << "Апрель" << std::endl; break;
                case month::may: std::cout << "Май" << std::endl; break;
                case month::june: std::cout << "Июнь" << std::endl; break;
                case month::july: std::cout << "Июль" << std::endl; break;
                case month::august: std::cout << "Август" << std::endl; break;
                case month::september: std::cout << "Сентябрь" << std::endl; break;
                case month::october: std::cout << "Октябрь" << std::endl; break;
                case month::november: std::cout << "Ноябрь" << std::endl; break;
                case month::december: std::cout << "Декабрь" << std::endl; break;
                default: std::cout << "Неправильный номер!";
            }
        }
        
    } while (num != 0);

    std::cout << "До свидания!" << std::endl;
    return 0;
}
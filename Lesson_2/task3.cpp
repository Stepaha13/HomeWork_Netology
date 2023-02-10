#include <iostream>

struct address {
    std::string sity;
    std::string street;
    int houseNumber;
    int apartmentТumber;
    int index;
};

void printAddress(address* address) {
    std::cout << "Город: " << address->sity << std::endl;
    std::cout << "Улица: " << address->street << std::endl; 
    std::cout << "Номер дома: " << address->houseNumber << std::endl;
    std::cout << "Номер квартиры: " << address->apartmentТumber << std::endl;
    std::cout << "индекс: " << address->index << std::endl;
    std::cout << std::endl;
}

int main(int argc, char **argv) {

    address address_1 = {"Москва", "Арбат", 12, 8, 123456};
    address address_2 = {"Ижевск", "Пушкина", 59, 143, 953769};

    printAddress(&address_1);
    printAddress(&address_2);
    return 0;
}
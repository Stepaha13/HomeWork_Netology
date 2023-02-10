#include <iostream>

struct personalBankAccount {
    int accountNumber;
    std::string personName;
    double amountMoney;
};

void changingAccountaAmount(personalBankAccount* bankAccount, int changingAmount){
    bankAccount->amountMoney = changingAmount;

}

void printBankAccount(personalBankAccount* bankAccount) {
    std::cout << "Ваш счет: ";
    std::cout << bankAccount->personName << ", ";
    std::cout << bankAccount->accountNumber << ", ";
    std::cout << bankAccount->amountMoney;
}

int main(int argc, char **argv) {

    personalBankAccount bankAccount;

    std::cout << "Введите номер счёта: ";
    std::cin >> bankAccount.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin >> bankAccount.personName;

    std::cout << "Введите баланс: ";
    std::cin >> bankAccount.amountMoney;

    int changeAmount = 0;
    std::cout << "Введите новый баланс: ";
    std::cin >> changeAmount;

    changingAccountaAmount(&bankAccount, changeAmount);

    printBankAccount(&bankAccount);

    return 0;
}
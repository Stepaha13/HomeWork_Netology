//
//  main.cpp
//  Lesson_9
//
//  Created by Степан Языков on 05.03.2023.
//

#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(){};
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	
	void post_numenator(){
		std::cout << "Введите числитель дроби: ";
		std::cin >> numerator_;
	}
	void post_denominator(){
		std::cout << "Введите знаменатель дроби: ";
		std::cin >> denominator_;
	}
	double wt(){return  numerator_ / denominator_;}
	//task1 -->
	bool operator== (Fraction &f) {return this->wt() == f.wt();}
	bool operator<=	(Fraction &f) {return this->wt() <= f.wt();}
	bool operator< 	(Fraction &f) {return this->wt() <  f.wt();}
	bool operator>=	(Fraction &f) {return this->wt() >= f.wt();}
	bool operator> 	(Fraction &f) {return this->wt() >  f.wt();}
	//auto operator<=>(const Fraction&) const = default;
	//task1<--
	
	//task2 -->
	friend std::ostream& operator<<(std::ostream &left, Fraction rigth);
	Fraction operator+ (Fraction &f){
		
		int den, num = 0;
		
		if (this->denominator_ == f.denominator_){
			num = this->numerator_ + f.numerator_;
			den = this->denominator_;
		} else {
			den = this->denominator_ * f.denominator_;
			num = (this->numerator_ * f.denominator_) + (f.numerator_ * this->denominator_);
		}
				
		return Fraction(num, den);

	}
	Fraction operator- (Fraction &f){
		int den, num = 0;
		
		if (this->denominator_ == f.denominator_){
			num = this->numerator_ - f.numerator_;
			den = this->denominator_;
		} else {
			den = this->denominator_ * f.denominator_;
			num = (this->numerator_ * f.denominator_) - (f.numerator_ * this->denominator_);
		}
				
		return Fraction(num, den);
	}
	Fraction operator- (){
		this->numerator_ = -this->numerator_;
		return *this;
	}
	Fraction operator* (Fraction &f){
		int den, num = 0;
		
		num = this->numerator_ * f.numerator_;
		den = this->denominator_ * f.denominator_;
		
		int comDiv = common_divisor(num, den);
		
		num /= comDiv;
		den /= comDiv;
		
		return Fraction(num, den);
	}
	Fraction operator/ (Fraction &f){
		int den, num = 0;
		
		num = this->numerator_ * f.denominator_;
		den = this->denominator_ * f.numerator_;
		
		int comDiv = common_divisor(num, den);
		
		num /= comDiv;
		den /= comDiv;
		
		return Fraction(num, den);
	}
	Fraction operator++ (){
		this->numerator_ = this->numerator_ + this->denominator_;
		return *this;
	}
	Fraction operator++ (int){
		Fraction f = *this;
		++(*this);
		return f;
	}
	Fraction operator-- (){
		this->numerator_ = this->numerator_ - this->denominator_;
		return *this;
	}
	Fraction operator-- (int){
		Fraction f = *this;
		--(*this);
		return f;
	}
	
	int common_divisor(int a, int b) {
		
		if (a == b) {
			return a;
		}
		if (a > b) {
			int tmp = a;
			a = b;
			b = tmp;
		}
		return common_divisor(a, b - a);
	}
	//task2<--
};

std::ostream& operator<<(std::ostream &left, Fraction right){
	
	left << right.numerator_ << "/" << right.denominator_;
	return left;
	
}

void task1();
void task2();
int main(int argc, const char * argv[]) {
	int cycleIndex = 0;
				
						do {
							std::cout << "Ведите номер задания для проверки. Для выхода введите - 0" << std::endl;
							std::cin >> cycleIndex;
							
							switch (cycleIndex) {
								case 1:
									std::cout << "Задача 1. Сравнения в дробях" << std::endl;
									task1();
									break;
									
								case 2:
									std::cout << "Задача 2. Остальные операции с дробями" << std::endl;
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
	
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << std::boolalpha << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << std::boolalpha <<"f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
}

void task2(){
	Fraction f1;
	f1.post_numenator();
	f1.post_denominator();
	
	Fraction f2;
	f2.post_numenator();
	f2.post_denominator();
	
	std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << std::endl;
	std::cout << f1 << " - " << f2 << " = " << (f1 - f2) << std::endl;
	std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << std::endl;
	std::cout << f1 << " / " << f2 << " = " << (f1 / f2) << std::endl;
	std::cout << "++" << f1 << " * " << f2 << " = " << (++f1 * f2) << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;
	std::cout << f1 << "-- * " << f2 << " = " << (f1-- * f2) << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;
}

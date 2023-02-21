//
//  main.cpp
//  Tasks
//
//  Created by Степан Языков on 14.02.2023.
//

#include <iostream>

class figure{
private:
	
protected:
	int sidesCount;
	std::string nameFigure;
	virtual bool verification(){
		if (sidesCount == 0) {
			return true;
		} else {
			return false;
		}
	}
	
public:
	figure(){
		sidesCount = 0;
		nameFigure = "Фигура";
	};
	figure(int sidesCount_, std::string nameFigure_){
		sidesCount = sidesCount_;
		nameFigure = nameFigure_;
	};
	
	std::string get_sidesCount(){
		return nameFigure + ": " + std::to_string(sidesCount);
	};
	
	virtual void printInfoTask3(){
		std::cout << nameFigure << std::endl;
		std::string verif = verification() ? "Правильная" : "Неправильная";
		std::cout << verif << std::endl;
		std::cout << "Количество сторон: " << sidesCount << "\n" << std::endl;
	}
};

// Область Теругольники -->
class triangle:public figure{
private:
	
protected:
	int a; int A;
	int b; int B;
	int c; int C;
	
	virtual bool verification() override {
		if (sidesCount == 3 && (A + B + C == 180))  {
			return true;
		} else {
			return false;
		}
	}
	
public:
	triangle():figure(3, "Треугольник"){};
	triangle(int a_, int b_, int c_, int A_, int B_, int C_){
	
		a = a_; A = A_;
		b = b_; B = B_;
		c = c_; C = C_;
		
		sidesCount = 3;
		nameFigure = "Треугольник";
	}
	triangle(int a_, int b_, int c_, int A_, int B_, int C_, std::string nameFigure_){
		
		a = a_; A = A_;
		b = b_; B = B_;
		c = c_; C = C_;
		
		sidesCount = 3;
		nameFigure = nameFigure_;
	}
	
	std::string print_info(){
		return 	nameFigure + ":\n" +
				"Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) +
				" c=" + std::to_string(c) + "\n" +
				"Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) +
				" C=" + std::to_string(C);
	}
	
	void printInfoTask3() override {
		std::cout << nameFigure << std::endl;
		std::string verif = verification() ? "Правильная" : "Неправильная";
		std::cout << verif << std::endl;
		std::cout << "Количество сторон: " << sidesCount << std::endl;
		std::cout << "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) +
						" c=" + std::to_string(c) + "\n" +
						"Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) +
						" C=" + std::to_string(C) + "\n" << std::endl;
	}
};

class rectangular:public triangle{ //прямоугольный треугольник
private:
	bool verification() override {
		if (sidesCount == 3 && (A + B + C == 180) && C == 90)  {
			return true;
		} else {
			return false;
		}
	}
	
public:
	rectangular(int a_, int b_, int c_, int A_, int B_):
		triangle(a_, b_, c_, A_, B_, 90, "Прямоугольный треугольник"){};
	
	rectangular(int a_, int b_, int c_, int A_, int B_, int C_): // task 3
		triangle(a_, b_, c_, A_, B_, C_, "Прямоугольный треугольник"){};
	
};

class isosceles:public triangle{ //равнобедренный треугольник
private:
	bool verification() override {
		if (sidesCount == 3 && (A + B + C == 180) && a == c && A == C)  {
			return true;
		} else {
			return false;
		}
	}
public:
	isosceles(int ac, int b_, int AC, int B_):
		triangle(ac, b_, ac, AC, B_, AC, "Равнобедренный треугольник"){};
	
	isosceles(int a_, int b_, int c_, int A_, int B_, int C_):
		triangle(a_, b_, c_, A_, B_, C_, "Равнобедренный треугольник"){};

};

class equilateral:public triangle{ //равносторонний треугольник
private:
	bool verification() override {
		if (sidesCount == 3 && (A + B + C == 180) && (a == c && a == b) &&
			(A == 60 && C == 60 && B == 60))
		{
			return true;
		} else {
			return false;
		}
	}
public:
	equilateral(int abc):
		triangle(abc, abc, abc, 60, 60, 60, "Равносторонний треугольник"){};
	equilateral(int a_, int b_, int c_, int A_, int B_, int C_):
		triangle(a_, b_, c_, A_, B_, C_, "Равносторонний треугольник"){};
};
// <-- Конец области

// Область четырехугольнки -->
class quadrangle:public figure{
protected:
	int a; int A;
	int b; int B;
	int c; int C;
	int d; int D;
	
	virtual bool verification() override {
		if (sidesCount == 4 && (A + B + C + D == 360))  {
			return true;
		} else {
			return false;
		}
	}
	
public:
	quadrangle():figure(4, "Четырехугольник"){}
	quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_){
		
		a = a_; A = A_;
		b = b_; B = B_;
		c = c_; C = C_;
		d = d_; D = D_;
		
		sidesCount = 4;
		nameFigure = "Четырехугольник";
	}
	quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_, std::string nameFigure_){
		
		a = a_; A = A_;
		b = b_; B = B_;
		c = c_; C = C_;
		d = d_; D = D_;
		
		sidesCount = 4;
		nameFigure = nameFigure_;
	}
	
	std::string print_info(){
		
		return 	nameFigure + ":\n" +
				"Стороны: a=" + std::to_string(a) +
				" b=" + std::to_string(b) +
				" c=" + std::to_string(c) +
				" d=" + std::to_string(d) + "\n" +
				"Углы: A=" + std::to_string(A) +
				" B=" + std::to_string(B) +
				" C=" + std::to_string(C) +
				" D=" + std::to_string(D);
	}
	
	void printInfoTask3() override {
		std::cout << nameFigure << std::endl;
		std::string verif = verification() ? "Правильная" : "Неправильная";
		
		std::cout << verif << std::endl;
		std::cout << "Количество сторон: " << sidesCount << std::endl;
		std::cout << "Стороны: a=" + std::to_string(a) +
					" b=" + std::to_string(b) +
					" c=" + std::to_string(c) +
					" d=" + std::to_string(d) + "\n" +
					"Углы: A=" + std::to_string(A) +
					" B=" + std::to_string(B) +
					" C=" + std::to_string(C) +
					" D=" + std::to_string(D) + "\n" << std::endl;
	}
};

class rectangle:public quadrangle{ //прямоугольник
private:
	bool verification() override {
		if (sidesCount == 4 && (A + B + C + D == 360) && (a == c && b == d) &&
			(A == 90 && B == 90 && C == 90 && D == 90))
		{
			return true;
		} else {
			return false;
		}
	}
	
public:
	rectangle(int ac, int bd):
		quadrangle(ac, bd, ac, bd, 90, 90, 90, 90, "Прямоугольник"){};
	
	rectangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_):
		quadrangle(a_, b_, c_, d_, A_, B_, C_, D_, "Прямоугольник"){};
};

class box:public quadrangle{ //квадрат
private:
	bool verification() override {
		if (sidesCount == 4 && (A + B + C + D == 360) && (a == c && a == b && a == d) &&
			(A == 90 && B == 90 && C == 90 && D == 90))
		{
			return true;
		} else {
			return false;
		}
	}
	
public:
	box(int acbd):
		quadrangle(acbd, acbd, acbd, acbd, 90, 90, 90, 90, "Квадрат"){};
	
	box(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_):
		quadrangle(a_, b_, c_, d_, A_, B_, C_, D_, "Квадрат"){};

};

class parallelogram:public quadrangle{ //параллелограмм
private:
	bool verification() override {
		if (sidesCount == 4 && (a == c && b == d) && (A == C && B == D))
		{
			return true;
		} else {
			return false;
		}
	}
public:
	parallelogram(int ac, int bd, int AC, int BD):
		quadrangle(ac, bd, ac, bd, AC, BD, AC, BD, "Параллелограмм"){};
	
	parallelogram(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_):
		quadrangle(a_, b_, c_, d_, A_, B_, C_, D_, "Параллелограмм"){};

};

class rhomb:public quadrangle{ //ромб
private:
	bool verification() override {
		if (sidesCount == 4 && (a == c && a == b && a == d) && (A == C && B == D))
		{
			return true;
		} else {
			return false;
		}
	}
public:
	rhomb(int acbd, int AC, int BD):
		quadrangle(acbd, acbd, acbd, acbd, AC, BD, AC, BD, "Ромб"){};
	
	rhomb(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_):
		quadrangle(a_, b_, c_, d_, A_, B_, C_, D_, "Ромб"){};
};
// <-- Конец области

void task1();
void task2();
void task3();
int main(int argc, const char * argv[]) {
	
	int cycleIndex = 0;
	
			do {
				std::cout << "Ведите номер задания для проверки. Для выхода введите - 0" << std::endl;
				std::cin >> cycleIndex;
				
				switch (cycleIndex) {
					case 1:
						std::cout << "Задача 1. Фигуры. Количество сторон" << std::endl;
						task1();
						break;
						
					case 2:
						std::cout << "Задача 2. Фигуры. Стороны и углы" << std::endl;
						task2();
						break;
						
					case 3:
						std::cout << "Задача 3. Фигуры. Методы" << std::endl;
						task3();
						break;
						
					default:
						std::cout << "Неправильный номер задания" << std::endl;
						break;
				}
				
			} while (cycleIndex != 0);
	
	return 0;
}

void task1(){
	std::cout << "Количество сторон:" << std::endl;
	
	figure fig;
	std::cout << fig.get_sidesCount() << std::endl;
	
	triangle tr;
	std::cout << tr.get_sidesCount() << std::endl;
	
	quadrangle qua;
	std::cout << qua.get_sidesCount() <<std::endl;
}

void task2(){
	triangle tr {10, 20, 30, 50, 60, 70};
	std::cout << tr.print_info() << "\n" << std::endl;
	
	rectangular rec {10, 20, 30, 50, 60};
	triangle *tr_rec = &rec;
	std::cout << tr_rec->print_info() << "\n" << std::endl;
	
	isosceles iso {10, 20, 50, 60};
	triangle *tr_iso = &iso;
	std::cout << tr_iso->print_info() << "\n" << std::endl;
	
	equilateral equ {30};
	triangle *tr_equ = &equ;
	std::cout << tr_equ->print_info() << "\n" << std::endl;
	
	quadrangle qua {10, 20, 30, 40, 50, 60, 70, 80};
	std::cout << qua.print_info() << "\n" << std::endl;
	
	rectangle rectan {10, 20};
	quadrangle *qua_rectan = &rectan;
	std::cout << qua_rectan->print_info() << "\n" << std::endl;
	
	box b {20};
	quadrangle *qua_b = &b;
	std::cout << qua_b->print_info() << "\n" << std::endl;
	
	parallelogram par {20, 30, 30, 40};
	quadrangle *qua_par = &par;
	std::cout << qua_par->print_info() << "\n" << std::endl;
	
	rhomb rh {30, 30, 40};
	quadrangle *qua_rh = &rh;
	std::cout << qua_rh->print_info() << "\n" << std::endl;

}

void task3(){
	
	figure fig;
	fig.printInfoTask3();
	
	triangle tr {10, 20, 30, 50, 60, 70};
	figure *fig_tr = &tr;
	fig_tr->printInfoTask3();
	
	rectangular rec1 {10, 20, 30, 50, 60};
	figure *fig_rec1 = &rec1;
	fig_rec1->printInfoTask3();
	
	rectangular rec2 {10, 20, 30, 30, 60};
	figure *fig_rec2 = &rec2;
	fig_rec2->printInfoTask3();
	
	isosceles iso1 {10, 20, 10, 50, 60, 50};
	figure *fig_iso1 = &iso1;
	fig_iso1->printInfoTask3();
	
	isosceles iso2 {10, 20, 30, 50, 60, 70};
	figure *fig_iso2 = &iso2;
	fig_iso2->printInfoTask3();
	
	equilateral eqo {30, 30, 30, 60, 60, 60};
	figure *fig_eqo = &eqo;
	fig_eqo->printInfoTask3();
	
	quadrangle qua {10, 20, 30, 40, 50, 60, 70, 80};
	figure *fig_qua = &qua;
	fig_qua->printInfoTask3();
	
	rectangle rectan {10, 20, 10, 20, 90, 90, 90, 90};
	figure *fig_rectan = &rectan;
	fig_rectan->printInfoTask3();
	
	box b {20, 20, 20, 20, 90, 90, 90, 90};
	figure *fig_b = &b;
	fig_b->printInfoTask3();
	
	parallelogram par {20, 30, 20, 30, 30, 40, 30, 40};
	figure *fig_par = &par;
	fig_par->printInfoTask3();
	
	rhomb rh {30, 30, 30, 30, 30, 40, 30, 40};
	figure *fig_rh = &rh;
	fig_rh->printInfoTask3();
	
}

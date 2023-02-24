//
//  main.cpp
//  Task3
//
//  Created by Степан Языков on 24.02.2023.
//

#include <iostream>
#include "Header.h"

int main(int argc, const char * argv[]) {
	
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
	
	return 0;
}

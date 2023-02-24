//
//  counter.hpp
//  Task2
//
//  Created by Степан Языков on 24.02.2023.
//

#ifndef counter_hpp
#define counter_hpp

#include <stdio.h>
#include <iostream>

class Counter {
	int i;
	
public:
	Counter();
	Counter(int i_);
	void increment();
	void decrement();
	void print();
	
};

void workTask2(Counter* counter);

#endif /* counter_hpp */

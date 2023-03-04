//
//  errorСonstructor.hpp
//  Lesson_8
//
//  Created by Степан Языков on 25.02.2023.
//

#ifndef error_onstructor_hpp
#define error_onstructor_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class verificationException : public std::domain_error{
	
public:
	verificationException(const std::string &msg) : std::domain_error(msg){};
};

#endif /* error_onstructor_hpp */

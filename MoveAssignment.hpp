#pragma once
#include <iostream>
#include <string>

class MoveAssignment {
public:
	MoveAssignment& operator=(const MoveAssignment& anotherObject){
		if(this != &anotherObject){
			std::cout << "Do something in Move Assignment\n";
		}
		return *this;
	}

	std::string getName() const {
		return "Move Assignment Declared Class";
	}
};

#pragma once
#include <string>

class CopyAssignment {
public:
	CopyAssignment& operator=(const CopyAssignment& anotherObject){
		if(this != &anotherObject){
			std::cout << "Do something in Copy Assignment\n";
		}
		return *this;
	}

	std::string getName() const {
		return "Copy Assignment Declared Class";
	}
};

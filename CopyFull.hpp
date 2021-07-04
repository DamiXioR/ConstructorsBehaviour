#pragma once
#include <iostream>
#include <string>

class CopyFull {
public:
	CopyFull(const CopyFull& anotherObject) {
		std::cout << "Do something in Copy Full Constructor\n";
	}

	CopyFull& operator=(const CopyFull& anotherObject) {
		if(this != &anotherObject){
			std::cout << "Do something in Copy Full Assignment\n";
		}
		return *this;
	}

	std::string getName() const {
		return "Copy Full Declared Class";
	}

	friend CopyFull* createCF();

private:
	CopyFull(){
		std::cout << "Do something in Private \"Default\" Constructor in Copy Full Class\n";
	}
};


inline CopyFull* createCF(){
	CopyFull* objectCreatedWithPrivateCtor = new CopyFull();
	return objectCreatedWithPrivateCtor;
}

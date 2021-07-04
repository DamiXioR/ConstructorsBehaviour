#pragma once
#include <iostream>
#include <string>

class CopyFull {
public:
	CopyFull(const CopyFull& anotherObject) {
		std::cout << "Do something in Copy Constructor\n";
	}

	CopyFull& operator=(const CopyFull& anotherObject) {
		if(this != &anotherObject){
			std::cout << "Do something in Copy Assignment\n";
		}
		return *this;
	}

	std::string getName() const {
		return "Copy Constructor Declared Class";
	}

	friend CopyFull* createCF();

private:
	CopyFull(){
		std::cout << "Do something in Private \"Default\" Constructor in Copy Constructor Class\n";
	}
};


inline CopyFull* createCF(){
	CopyFull* objectCreatedWithPrivateCtor = new CopyFull();
	return objectCreatedWithPrivateCtor;
}

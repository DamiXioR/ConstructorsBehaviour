#pragma once
#include <iostream>
#include <string>

class CopyConstructor {
public:
	CopyConstructor(const CopyConstructor& anotherObject) {
		std::cout << "Do something in Copy Constructor\n";
	}

	std::string getName() const {
		return "Copy Constructor Declared Class";
	}

	friend CopyConstructor* createCC();

private:
	CopyConstructor(){
		std::cout << "Do something in Private \"Default\" Constructor in Copy Constructor Class\n";
	}
};


inline CopyConstructor* createCC(){
	CopyConstructor* objectCreatedWithPrivateCtor = new CopyConstructor();
	return objectCreatedWithPrivateCtor;
}

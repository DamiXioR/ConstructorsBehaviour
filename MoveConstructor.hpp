#pragma once
#include <iostream>
#include <string>
#include <utility>

class MoveConstructor {
public:
	MoveConstructor(const MoveConstructor& anotherObject) {
		std::cout << "Do something in Move Constructor\n";
	}

	std::string getName() const {
		return "Move Constructor Declared Class";
	}

	friend MoveConstructor* createMC();

private:
	MoveConstructor(){
		std::cout << "Do something in Private \"Default\" Constructor in Move Constructor Class\n";
	}
};

inline MoveConstructor* createMC(){
	MoveConstructor* objectCreatedWithPrivateCtor = new MoveConstructor();
	return std::move(objectCreatedWithPrivateCtor);
}

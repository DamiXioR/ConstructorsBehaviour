#pragma once
#include <iostream>
#include <string>

class MoveFull {
public:
	MoveFull(const MoveFull&& anotherObject) {
		std::cout << "Do something in Move Constructor\n";
	}

	MoveFull& operator=(const MoveFull&& anotherObject) {
		if(this != &anotherObject){
			std::cout << "Do something in Move Assignment\n";
		}
		return *this;
	}

	std::string getName() const {
		return "Move Full Declared Class";
	}

	friend MoveFull* createMF();

private:
	MoveFull(){
		std::cout << "Do something in Private \"Default\" Constructor in Move Full Class\n";
	}
};


inline MoveFull* createMF(){
	MoveFull* objectCreatedWithPrivateCtor = new MoveFull();
	return objectCreatedWithPrivateCtor;
}

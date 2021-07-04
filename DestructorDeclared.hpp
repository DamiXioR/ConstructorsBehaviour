#pragma once
#include <string>

class DestructorDeclared {
public:
	~DestructorDeclared() = default;
	std::string getName() const {
		return "Destructor Declared Class";
	}
};

#pragma once
#include <string>

class DefaultDeclared {
public:
	DefaultDeclared() = default;

	std::string getName() const {
		return "Default Constructor Declared Class";
	}
};

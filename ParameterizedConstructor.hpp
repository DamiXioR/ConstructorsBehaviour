#pragma once
#include <string>

class ParameterizedConstructor {
public:
	ParameterizedConstructor(const int parameter) : parameter_(parameter){
	}

	std::string getName() const {
		return "Parameterized Constructor Declared Class";
	}

private:
	const int parameter_;
};

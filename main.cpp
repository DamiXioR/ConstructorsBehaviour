#include <iostream>
#include <utility>
#include <type_traits>

#include "NothingDeclared.hpp"
#include "ParameterizedConstructor.hpp"

template <class T>
void check(T& object) {
	
	if(std::is_default_constructible<T>::value){
		std::cout << object.getName() << " is default constructible\n";
	} else {
		std::cout << object.getName() << " is not default constructible\n";
	}


	if(std::is_copy_constructible<T>::value){
		std::cout << object.getName() << " is copy constructible\n";
	} else {
		std::cout << object.getName() << " is not copy constructible\n";
	}	

	if(std::is_copy_assignable<T>::value){
		std::cout << object.getName() << " is copy assignable\n";
	} else {
		std::cout << object.getName() << " is not copy assignable\n";
	}	


	if(std::is_move_constructible<T>::value){
		std::cout << object.getName() << " is move constructible\n";
	} else {
		std::cout << object.getName() << " is not move constructible\n";
	}	

	if(std::is_move_assignable<T>::value){
		std::cout << object.getName() << " is move assignable\n";
	} else {
		std::cout << object.getName() << " is not move assignable\n";
	}	

}
	
int main(){
	//NOTHING DECLARED BY PROGRAMMER
	
	NothingDeclared nD;
	check(nD);

	//PARAMETRIZED CONSTRUCTOR DECLARED
	const int parameter = 1;
	ParameterizedConstructor pcD(parameter);
	check(pcD);

	return 0;
}


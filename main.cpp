#include <iostream>
#include <utility>
#include <type_traits>

#include "NothingDeclared.hpp"
#include "ParameterizedConstructor.hpp"
#include "DefaultDeclared.hpp"
#include "DestructorDeclared.hpp"
#include "CopyConstructor.hpp"
#include "CopyAssignment.hpp"
#include "MoveConstructor.hpp"
#include "MoveAssignment.hpp"
#include "CopyFull.hpp"
#include "MoveFull.hpp"


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
	std::cout << "NOTHING DECLARED BY PROGRAMMER\n\n";
	
	NothingDeclared nD;
	check(nD);

	std::cout << "\n\nPARAMETRIZED CONSTRUCTOR DECLARED BY PROGRAMMER\n\n";
	const int parameter = 1;
	ParameterizedConstructor pcD(parameter);
	check(pcD);

	std::cout << "\n\nDEFAULT CONSTRUCTOR DECLARED BY PROGRAMMER\n\n";
	DefaultDeclared dD;
	check(dD);

	std::cout << "\n\nDESTRUCTOR DECLARED BY PROGRAMMER\n\n";
	DestructorDeclared dDestructor;
	check(dDestructor);
	
	std::cout << "\n\nCOPY CONSTRUCTOR DECLARED BY PROGRAMMER\n\n";
	CopyConstructor* tempCC = createCC();
	CopyConstructor cC(*tempCC);
	check(cC);
	std::cout << "When trying to use move constructor, it's using copy constructor: ";
	CopyConstructor cC2 (std::move(*tempCC));
	delete tempCC;
	
	std::cout << "\n\nCOPY ASSIGNMENT DECLARED BY PROGRAMMER\n\n";
	CopyAssignment cA;
	CopyAssignment cA2;
	check(cA);
	std::cout << "When trying to use move assignment operator, it's using copy assignment operator: ";
	cA = std::move(cA2);

	std::cout << "\n\nMOVE CONSTRUCTOR DECLARED BY PROGRAMMER\n\n";
	MoveConstructor* tempMC = createMC();
	MoveConstructor mC (std::move(*tempMC));
	check(mC);
	std::cout << "When trying to use copy constructor, it's using move constructor: ";
	MoveConstructor mC2(mC);
	
	std::cout << "\n\nMOVE ASSIGNMENT DECLARED BY PROGRAMMER\n\n";
	MoveAssignment mA;
	MoveAssignment mA2;
	check(mA);
	std::cout << "When trying to use copy assignment operator, it's using move assignment operator: ";
	mA = mA2;
	
	std::cout << "\n\nCOPY FULL DECLARED BY PROGRAMMER\n\n";
	CopyFull* tempCF = createCF();
	CopyFull cF(*tempCF);
	check(cF);

	std::cout << "When trying to use move constructor, it's using copy constructor: ";
	CopyFull cF2 (std::move(*tempCF));
	
	std::cout << "When trying to use move assignment operator, it's using copy assignment operator: ";
	cF = std::move(cF2);

	std::cout << "\n\nMOVE FULL DECLARED BY PROGRAMMER\n\n";
	MoveFull* tempMF = createMF();
	MoveFull mF (std::move(*tempMF));
	check(mF);
	
	/* USING DELETED COPY CONSTRUCTOR OR COPY ASSIGN OPERATOR
	MoveFull* tempMF2 = createMF();
	MoveFull mF2 (std::move(*tempMF2));
	mF2 = mF;
	MoveFull mF3 (mF2);
	*/

	std::cout << "\n\nCONCLUSIONS in README.md file\n\n";

	return 0;
}


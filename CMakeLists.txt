cmake_minimum_required(VERSION 3.18)
project(ConstructorBehaviour CXX)


set(SRC
	NothingDeclared.cpp
	ParameterizedConstructor.cpp
	DefaultDeclared.cpp
	DestructorDeclared.cpp
	CopyConstructor.cpp
	CopyAssignment.cpp
	MoveConstructor.cpp
	MoveAssignment.cpp
	CopyFull.cpp
	MoveFull.cpp
)

add_executable(${PROJECT_NAME} main.cpp ${SRC})

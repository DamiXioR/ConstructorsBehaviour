cmake_minimum_required(VERSION 3.18)
project(ConstructorBehaviour VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


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

cmake_minimum_required(VERSION 3.18)
project(ConstructorBehaviour CXX)


set(SRC
	NothingDeclared.cpp
	ParameterizedConstructor.cpp
	DefaultDeclared.cpp
	DestructorDeclared.cpp
)

add_executable(${PROJECT_NAME} main.cpp ${SRC})

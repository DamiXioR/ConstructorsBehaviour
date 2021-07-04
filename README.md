# Constructors Behaviour
programmer declares vs. compiler declares

NOTHING DECLARED BY PROGRAMMER

Nothing Declared Class is default constructible
Nothing Declared Class is copy constructible
Nothing Declared Class is copy assignable
Nothing Declared Class is move constructible
Nothing Declared Class is move assignable


PARAMETRIZED CONSTRUCTOR DECLARED BY PROGRAMMER

Parameterized Constructor Declared Class is not default constructible
Parameterized Constructor Declared Class is copy constructible
Parameterized Constructor Declared Class is not copy assignable
Parameterized Constructor Declared Class is move constructible
Parameterized Constructor Declared Class is not move assignable


DEFAULT CONSTRUCTOR DECLARED BY PROGRAMMER

Default Constructor Declared Class is default constructible
Default Constructor Declared Class is copy constructible
Default Constructor Declared Class is copy assignable
Default Constructor Declared Class is move constructible
Default Constructor Declared Class is move assignable


DESTRUCTOR DECLARED BY PROGRAMMER

Destructor Declared Class is default constructible
Destructor Declared Class is copy constructible
Destructor Declared Class is copy assignable
Destructor Declared Class is move constructible
Destructor Declared Class is move assignable


COPY CONSTRUCTOR DECLARED BY PROGRAMMER

Do something in Private "Default" Constructor in Copy Constructor Class
Do something in Copy Constructor
Copy Constructor Declared Class is not default constructible
Copy Constructor Declared Class is copy constructible
Copy Constructor Declared Class is copy assignable
Copy Constructor Declared Class is move constructible
Copy Constructor Declared Class is move assignable
When trying to use std::move, it's using copy ctor operator: Do something in Copy Constructor


COPY ASSIGNMENT DECLARED BY PROGRAMMER

Copy Assignment Declared Class is default constructible
Copy Assignment Declared Class is copy constructible
Copy Assignment Declared Class is copy assignable
Copy Assignment Declared Class is move constructible
Copy Assignment Declared Class is move assignable
When trying to use std::move, it's using copy assignment operator: Do something in Copy Assignment


MOVE CONSTRUCTOR DECLARED BY PROGRAMMER

Do something in Private "Default" Constructor in Move Constructor Class
Do something in Move Constructor
Move Constructor Declared Class is not default constructible
Move Constructor Declared Class is copy constructible
Move Constructor Declared Class is copy assignable
Move Constructor Declared Class is move constructible
Move Constructor Declared Class is move assignable
When trying to use copy constructor, it's using move constructor: Do something in Move Constructor


MOVE ASSIGNMENT DECLARED BY PROGRAMMER

Move Assignment Declared Class is default constructible
Move Assignment Declared Class is copy constructible
Move Assignment Declared Class is copy assignable
Move Assignment Declared Class is move constructible
Move Assignment Declared Class is move assignable
When trying to use copy assignment, it's using move assignment: Do something in Move Assignment


COPY FULL DECLARED BY PROGRAMMER

Do something in Private "Default" Constructor in Copy Full Class
Do something in Copy Full Constructor
Copy Full Declared Class is not default constructible
Copy Full Declared Class is copy constructible
Copy Full Declared Class is copy assignable
Copy Full Declared Class is move constructible
Copy Full Declared Class is move assignable
When trying to use std::move, it's using copy ctor operator: Do something in Copy Full Constructor
When trying to use std::move, it's using copy assignment operator: Do something in Copy Full Assignment


MOVE FULL DECLARED BY PROGRAMMER

Do something in Private "Default" Constructor in Move Full Class
Do something in Move Constructor
Move Full Declared Class is not default constructible
Move Full Declared Class is not copy constructible
Move Full Declared Class is not copy assignable
Move Full Declared Class is move constructible
Move Full Declared Class is move assignable


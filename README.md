# CONSTRUCTORS BEHAVIOUR

Programmer declares vs. Compiler behaviour  


### NOTHING DECLARED BY PROGRAMMER

Nothing Declared Class is default constructible,  
Nothing Declared Class is copy constructible,  
Nothing Declared Class is copy assignable,  
Nothing Declared Class is move constructible,  
Nothing Declared Class is move assignable  


### PARAMETRIZED CONSTRUCTOR DECLARED BY PROGRAMMER

Parameterized Constructor Declared Class is not default constructible,  
Parameterized Constructor Declared Class is copy constructible,  
Parameterized Constructor Declared Class is not copy assignable,  
Parameterized Constructor Declared Class is move constructible,  
Parameterized Constructor Declared Class is not move assignable  


### DEFAULT CONSTRUCTOR DECLARED BY PROGRAMMER

Default Constructor Declared Class is default constructible,  
Default Constructor Declared Class is copy constructible,  
Default Constructor Declared Class is copy assignable,  
Default Constructor Declared Class is move constructible,  
Default Constructor Declared Class is move assignable  


### DESTRUCTOR DECLARED BY PROGRAMMER

Destructor Declared Class is default constructible,  
Destructor Declared Class is copy constructible,  
Destructor Declared Class is copy assignable,  
Destructor Declared Class is move constructible,  
Destructor Declared Class is move assignable  


### COPY CONSTRUCTOR DECLARED BY PROGRAMMER

Copy Constructor Declared Class is not default constructible,  
Copy Constructor Declared Class is copy constructible,  
Copy Constructor Declared Class is copy assignable,  
Copy Constructor Declared Class is move constructible,  
Copy Constructor Declared Class is move assignable,  

**[!]When trying to use move constructor, it's using copy constructor**  


### COPY ASSIGNMENT DECLARED BY PROGRAMMER

Copy Assignment Declared Class is default constructible,  
Copy Assignment Declared Class is copy constructible,  
Copy Assignment Declared Class is copy assignable,  
Copy Assignment Declared Class is move constructible,  
Copy Assignment Declared Class is move assignable,  

**[!]When trying to use move assignment operator, it's using copy assignment operator**   


### MOVE CONSTRUCTOR DECLARED BY PROGRAMMER

Move Constructor Declared Class is not default constructible,  
Move Constructor Declared Class is copy constructible,  
Move Constructor Declared Class is copy assignable,  
Move Constructor Declared Class is move constructible,  
Move Constructor Declared Class is move assignable,  

**[!]When trying to use copy constructor, it's using move constructor**  


### MOVE ASSIGNMENT DECLARED BY PROGRAMMER

Move Assignment Declared Class is default constructible  
Move Assignment Declared Class is copy constructible  
Move Assignment Declared Class is copy assignable  
Move Assignment Declared Class is move constructible  
Move Assignment Declared Class is move assignable  

**[!]When trying to use copy assignment, it's using move assignment operator**  


### COPY FULL DECLARED BY PROGRAMMER

Copy Full Declared Class is not default constructible,  
Copy Full Declared Class is copy constructible,  
Copy Full Declared Class is copy assignable,  
Copy Full Declared Class is move constructible,  
Copy Full Declared Class is move assignable,  

**[!]When trying to use move constructor, it's using copy constructor**   
**[!]When trying to use move assignment operator, it's using copy assignment operator**  


### MOVE FULL DECLARED BY PROGRAMMER

Move Full Declared Class is not default constructible,  
Move Full Declared Class is not copy constructible,  
Move Full Declared Class is not copy assignable,  
Move Full Declared Class is move constructible,  
Move Full Declared Class is move assignable  

**[!]When trying to use copy constructor, we get compiler error: copy constructor deleted**   
**[!]When trying to use copy assignment operator, we get compiler error: copy assignment operator deleted**  

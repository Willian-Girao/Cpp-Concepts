# C++ Interview Questions

[Guru99](https://career.guru99.com/top-24-c-interview-questions/) | 24 Concepts | 14 "New"

1. **Class Members** - Class's own data and functions, called **member variables** and **member functions**.

2. **Member Functions** - function that <mark>has its definition or its prototype within the class definition</mark> like any other variable. 

3. **Namespace** - In each scope, a name can only represent one entity, which means that there cannot be two variables with the same name within the same scope (logical division of the code which is designed to stop the naming conflict).

   1. ***Namespace std*** is the default namespace standard used in C++, cout, cin and other things are defined in it (one way to call them is by using std::cout and std::cin).
   2. Namespaces allow us to group named entities that otherwise would have *global scope* into narrower scopes, giving them *namespace scope*. This allows organizing the elements of programs into different logical scopes referred to by names.

4. **How Are Functions Classified** - *Library Functions* (built-in functions) and *User-defined Functions* (function_name(arguments) -> function signature) - plus combinations of: with/without arguments and with/without return.

5. **Types of Operators** - Are basically functions that take arguments and produces a new value - Unary, Binary, Ternary.

   1. Unary (++, --)
   2. Arithmetic (*, /)
   3. Relational (<, !=)
   4. Logical (&&, ||)
   5. Bitwise (&, <<, >>)
   6. Assignment (=, *=)
   7. Ternary (? :)

6. **Reference** - Alias, that is, another name for an already existing variable. <mark>Reference is different from pointers</mark>:

   1. <mark>You cannot have NULL references</mark>. You must always be able to assume that a reference is connected to a legitimate piece of storage.
   2. <mark>References cannot be changed to refer to another object once initialized</mark>. Pointers can be pointed to another object at any time.
   3. <mark>A reference must be initialized when it is created</mark>. Pointers can be initialized at any time.
   4. When a function returns a reference, it returns an implicit pointer to its return value. This way, a function can be used on the left side of an assignment statement.

   - [References as Parameters](https://www.tutorialspoint.com/cplusplus/passing_parameters_by_references.htm)
   - [Reference as Return Value](https://www.tutorialspoint.com/cplusplus/returning_values_by_reference.htm)

7. **Polymorphism** - C++ polymorphism means that <mark>a call to a member function will cause a different function to be executed depending on the type of object that invokes the function</mark>. Usually, polymorphism occurs when there is a hierarchy of classes and they are related by inheritance: when a base class implements a function (usually a pure virtual function) and its derived classes have their own (different) implementation of the same function.

   1. ***Static Linkage*** - Function call is fixed before the program is executed - is set during the compilation of the program.
      - <mark>Prevents polymorphism, that's why *virtual* must be used to create</mark> ***virtual functions*** and let the compiler knows we want the selection of the function to be called at any given point in the program (runtime) to be based on the kind of object for which it is called.

8. **Data Abstraction** - Refers to providing only essential information about the data to the outside world, hiding the background details or implementation (e.g. access specifiers for classes members).

   1. ***public*** - can be accessed from anywhere in the program.
   2. ***private*** - can be accessed only from within the class. They are not allowed to be accessed from any part of code outside the class.

9. **Encapsulation** - In normal terms it is defined as wrapping up of data and information under a single unit. <mark>In Object Oriented Programming, encapsulation is defined as binding together the data and the functions that manipulates them</mark>.

10. **Types of Member Functions** - 

    1. ***Simple*** - default type (when no type is specified).
    2. ***Static*** - accessed through the class's objects (can only use static variables in it).
    3. ***Const*** - function isn't allowed to change the values of data members.
    4. ***Inline*** - defined within the body of the class (used to increase speed of processing) and if defined outside the class boundary then they must be prefixed by *inline* keyword.
    5. ***Friend*** - function can be accessed outside the class where it was declared. Can access all the data members of the class including private data members.

11. **Multithreading** - execution of programs concurrently. C++ does not contain any built-in support for multithreaded applications. Instead, it relies entirely upon the O.S. to provide this feature.

    1. ***Process-based*** - handles the concurrent execution of programs.
    2. ***Thread-based*** - deals with the concurrent execution of pieces of the same program.

12. **Upcasting** - Upcasting is using the super class's reference or pointer to refer to a sub class's object.

    2. In ***Downcasting*** we convert Super class's reference or pointer into a derived class's reference or pointer.

13. **Preprocessor** - Are the directives, which give instructions to the compiler to preprocess the information before actual compilation starts. All preprocessor directives begin with #, and only white-space characters may appear before a preprocessor directive on a line. <mark>Preprocessor directives are not C++ statements, so they do not end in a semicolon</mark>.

14. **Copy Constructor** - A copy constructor is a member function which initializes an object using another object of the same class.

    1. ```cpp
       class Point { 
       private: 
           int x, y; 
       public: 
           Point(int x1, int y1) { x = x1; y = y1; } 
         
           // Copy constructor 
           Point(const Point &p2) {x = p2.x; y = p2.y; } 
         
           int getX() {  return x; } 
           int getY() {  return y; } }; 
       int main() { 
           Point p1(10, 15); // Normal constructor is called here 
           Point p2 = p1; // Copy constructor is called here 
           cout << "p1.x = "<<p1.getX()<<", p1.y = "<<p1.getY();//p1.x = 10, p1.y = 15
           cout << "\np2.x = "<<p2.getX()<<", p2.y = "<<p2.getY();//p2.x = 10, p2.y = 15 
           return 0; }
       ```

    2. If we don’t define our own copy constructor, the C++ compiler creates a default copy constructor for each class which does a member-wise copy between objects. The compiler created copy constructor works fine in general. <mark>We need to define our own copy constructor only if an object has pointers or any runtime allocation of the resource like file handle, a network connection, etc</mark>.

- "*A C++ program can be made easier to read and maintain by using references rather than pointers.*"

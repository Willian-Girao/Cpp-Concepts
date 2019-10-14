# C++ Interview Questions

1. **Class Members** - Class's own data and functions, called **member variables** and **member functions**.

2. **Member Functions** - function that <mark>has its definition or its prototype within the class definition</mark> like any other variable. 

3. **[Namespace](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/namespace.cpp)** - In each scope, a name can only represent one entity, which means that there cannot be two variables with the same name within the same scope (logical division of the code which is designed to stop the naming conflict).

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

6. **[Reference](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/reference.cpp)** - Alias, that is, another name for an already existing variable. <mark>Reference is different from pointers</mark>:

   1. <mark>You cannot have NULL references</mark>. You must always be able to assume that a reference is connected to a legitimate piece of storage.
   2. <mark>References cannot be changed to refer to another object once initialized</mark>. Pointers can be pointed to another object at any time.
   3. <mark>A reference must be initialized when it is created</mark>. Pointers can be initialized at any time.
   4. When a function returns a reference, it returns an implicit pointer to its return value. This way, a function can be used on the left side of an assignment statement.

7. **Polymorphism** - C++ polymorphism means that <mark>a call to a member function will cause a different function to be executed depending on the type of object that invokes the function</mark>. Usually, polymorphism occurs when there is a hierarchy of classes and they are related by inheritance: when a base class implements a function (usually a pure virtual function) and its derived classes have their own (different) implementation of the same function. There are two types:

   1. **[Compile-time Polymorphism (static binding)](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/compiletime_polymorphism.cpp)** - achieved when the object method is invoked at the compile time. This can be achieved by ***function overloading***, ***operator overloading*** or by the usage of ***class template***. 
   2. **[Run-time Polymorphism (dynamic binding)](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/runtime_polymorphism.cpp)** - The runtime polymorphism is achieved when the object method is invoked at the runtime (when the compiler selects an appropriate member function when the program is running). To achieve this, **C++** supports a mechanism known as *[Virtual Function](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/runtime_polymorphism.cpp)* (***[Function Overriding](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/runtime_polymorphism.cpp)***).
      * Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
      * They are mainly used to achieve *Runtime polymorphism*.
      * Functions are declared with a **virtual** keyword in base class.
      * The resolving of function call is done at Run-time.

   - ***Static Linkage*** - function call is fixed before the program is executed - is set during the compilation of the program. <mark>Prevents polymorphism, that's why *virtual* must be used to create</mark> ***[virtual functions](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/runtime_polymorphism.cpp)*** and let the compiler knows we want the selection of the function to be called at any given point in the program (runtime) to be based on the kind of object for which it is called.

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

11. **[Multithreading](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/multithreading.cpp)** - execution of programs concurrently. C++ does not contain any built-in support for multithreaded applications. Instead, it relies entirely upon the O.S. to provide this feature.

    1. ***Process-based*** - handles the concurrent execution of programs.

    2. ***[Thread-based](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/multithreading.cpp)*** - deals with the concurrent execution of pieces of the same program.

    3. Multithreading support was introduced in C+11. Prior to C++11, we had to use [POSIX threads or p threads library in C](https://www.geeksforgeeks.org/multithreading-c-2/). While this library did the job the lack of any standard language provided feature-set caused serious portability issues. C++ 11 did away with all that and gave us **std::thread**. The thread classes and related functions are defined in the **thread** header file. 

    4. **std::thread** is the thread class that represents a single thread in C++. To start a thread we simply need to create a new thread object and pass the executing code to be called (i.e, a callable object) into the constructor of the object. Once the object is created a new thread is launched which will execute the code specified in callable.  A callable can be either of the three:

       - Function pointer

       - Function object

       - Lambda expression

12. **[Upcasting](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/upcasting.cpp)** - Upcasting is using the super class's reference or pointer to refer to a sub class's object.

    2. In ***Downcasting*** we convert Super class's reference or pointer into a derived class's reference or pointer.

13. **[Preprocessor](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/preprocessor.cpp)** - Are the directives, which give instructions to the compiler to preprocess the information before actual compilation starts. A ***#*** indicates a preprocessor directive and this <mark>directives are not C++ statements</mark> (so they do not end in a semicolon).

    1. ![](C:\Users\willi\OneDrive\Área de Trabalho\C++ Content Mds\cppCompilingFlow.png)
    2. The source code written is processed by the processors and an expanded source code file is generated. This file is then compiled by the compiler and an object code file is generated (***.obj***). Finally, the linker links this object code file to the object code of the library functions to generate the final executable. There are 4 main types:
       1. ***Macros (#define)*** - piece of code to which a name is given. When compiler encounters this name, it replaces it with the actual piece of code.
          - ***Macros with arguments*** - works similarly as functions.
       2. ***File Inclusion*** - Tells the compiler to include a file in the source program.
          - ***Header File or Standard Files (#include<file_name>)*** - files containing definitions of pre-defined functions (e.g. **printf()**).
          - ***User Defined Files (#include"file_name")*** - headers defined by the user (created usually when the program gets too large).
       3. ***Conditional Compilation (#ifdef macro_name ... #endif)*** - utilized to compile specific portions of the program, or to skip compilation, based on some conditions.
       4. ***#undef Directive*** - undefines an existing macro.
       5. ***#pragma Directive*** - Compiler-specific directives. Used to turn on or off some features.
       6. ***#pragma warn Directive*** - used to hide the warning messages which are displayed during compilation.
          - ***#pragma warn -rvl*** -  for warnings raised when functions (which is supposed to return a value) does not return a value.
          - ***#pragma warn -par*** -  warnings which are raised when a function does not uses the parameters passed to it. 
          - ***#pragma warn -rch*** -  warnings which are raised when a code is unreachable. For example: any code written after the *return* statement in a function is unreachable. 

14. **[Copy Constructor](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/copyconstructor.cpp)** - A copy constructor is a <mark>member function which initializes an object using another object of the same class</mark>.

    2. If we don’t define our own copy constructor, the C++ compiler creates a default copy constructor for each class which does a member-wise copy between objects. The compiler created copy constructor works fine in general. <mark>We need to define our own copy constructor only if an object has pointers or any runtime allocation of the resource like file handle, a network connection, etc</mark>.

15. What is **[Virtual Function](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/runtime_polymorphism.cpp)**?

    - A member function which is declared within a base class and is re-defined (overridden) by a derived class. <mark>When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function</mark>.

16. What is **[Overloading](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/compiletime_polymorphism.cpp)**?

    - **[Function Overloading](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/compiletime_polymorphism.cpp)** - Two or more <mark>functions can have the same name but different parameters. They can be overloaded by change in number of arguments or change in type of arguments</mark> (in the case of templates - this can be considered as an example of polymorphism feature in C++). The overloaded functions are invoked by matching the type and number of arguments (***overload resolution***) and this is done at the compile time so the compiler selects the appropriate function at the compile time. <mark>The return type does not play any role</mark>.
    - **[Operator Overloading](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/compiletime_polymorphism.cpp)** - We can make operators to work for user defined classes. This means C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. The operator overloading is also known as ***static binding***.

17. What is **Binding**?

    - In the context of compiled languages, <mark>binding is the link between a function call and the function definition</mark>. When a function is called in C++, the <mark>program control binds to the memory address where that function is defined</mark>.
    - **Dynamic (late) Binding** - Happens at the runtime. Function calls are not resolved until runtime.
    - **Static (early) Binding** - Happens at the compile-time. Function calls are linked during the compile-time.

18. What is **Virtual Inheritance**?

    - This a C++ <mark>technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes</mark>. Without virtual inheritance, if two classes `B` and `C` inherit from a class `A`, and a class `D` inherits from both `B` and `C`, then `D` will contain two copies of `A`'s member variables: one via `B`, and one via `C`. <mark>Instead, if classes `B` and `C` inherit virtually from class `A`, then objects of class `D` will contain only one set of the member variables from class `A`</mark>.

19. What is a **[Template](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/template.cpp)**?

    - The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.

20. What is the difference between **function overloading** and **operator overloading**?

    - **Function overloading** - Function overloading is defined as we can have more than one version of the same function. The versions of a function will have different signature means that they have a different set of parameters.
    - **Operator overloading** - Operator overloading is defined as the standard operator can be redefined so that it has a different meaning <mark>when applied to the instances of a class</mark>.

21. What is a **[Virtual Destructor](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/virtual_destructor.cpp)**?

    - A virtual destructor in C++ is <mark>used in the base class so that the derived class object can also be destroyed</mark>. A virtual destructor is declared by using the ~ tilde operator and then virtual keyword before the constructor.
    - Deleting a derived class object using a pointer to a base class that has a non-virtual destructor results in undefined behavior. To correct this situation, the base class should be defined with a virtual destructor. 
    - Making base class destructor virtual guarantees that the object of derived class is destructed properly (i.e. both base class and derived class destructors are called). 

22. What are the various **OOPs** concepts in C++?

    <img src="C:\Users\willi\OneDrive\Área de Trabalho\C++ Content Mds\cpp-interview-questions2.png" style="zoom:67%;" />

23. What is the difference between **struct and class**?

    | Structures                                                   |                                                        class |
    | :----------------------------------------------------------- | -----------------------------------------------------------: |
    | A structure is a user-defined data type which contains variables of dissimilar data types. | The class is a user-defined data type which contains member variables and member functions. |
    | <mark>The variables of a structure are stored in the ***stack memory***</mark>. | <mark>The variables of a class are stored in the ***heap memory***</mark>. |
    | We cannot initialize the variables directly.                 |             We can initialize the member variables directly. |
    | If access specifier is not specified, then by default the access specifier of the variable is "public". | If access specifier is not specified, then by default the access specifier of a variable is "private". |
    | The instance of a structure is a "structure variable".       |                        The instance of a class is an object. |
    | **Declaration of a structure:**`struct structure_name {    // body of structure; } ; ` | **Declaration of class:**`class class_name {    // body of class; }  ` |
    | A structure is declared by using a struct keyword.           |              The class is declared by using a class keyword. |
    | The structure does not support inheritance.                  |               The class supports the concept of inheritance. |
    | The type of a structure is a value type.                     |        <mark>The type of a class is a reference type</mark>. |

24. ***[Lambda Expressions](https://github.com/Willian-Girao/Cpp-Concepts/blob/master/codes/lmabda_expression.cpp)*** -  a convenient way of <mark>defining an anonymous function object (a *closure*) right at the location where it is invoked or passed as an argument to a function</mark>. Typically lambdas are used to encapsulate a few lines of code that are passed to algorithms or asynchronous methods.  By using lambdas, you can <mark>write code that's less cumbersome and less prone to errors than the code for an equivalent function object</mark>.

    -  When you write code, you probably use function pointers and function objects to solve problems and perform calculations. Function pointers and function objects each have advantages and disadvantages—for example, function pointers have minimal syntactic overhead but do not retain state within a scope, and function objects can maintain state but require the syntactic overhead of a class definition.
    -  ![](C:\Users\willi\OneDrive\Área de Trabalho\C++ Content Mds\lambdaexpsyntax.png)
       1. *capture clause* (Also known as the *lambda-introducer* in the C++ specification.)
       2. *parameter list* Optional. (Also known as the *lambda declarator*)
       3. *mutable specification* Optional.
       4. *exception-specification* Optional.
       5. *trailing-return-type* Optional.
       6. *lambda body*.

25. ***Dynamic vs. Static Memory Allocation*** -

    - ***Dynamic*** -  refers to performing memory allocation manually by programmer. Dynamically allocated memory is allocated on **Heap** and non-static and local variables get memory allocated on **Stack**.  The operators **new** and **delete** perform the task of allocating and freeing the memory.
    - ***Static*** - memory allocation done during compile-time (e.g. variables declaration).
    - <mark>**Static** memory allocation can only be done on stack</mark> whereas <mark>**dynamic** memory allocation can be done on both stack and heap</mark>.

26. ***Stack vs. Heap Memory***

    - ***Stack*** -  allocation on contiguous blocks of memory. Called *stack* because the allocation happens in function call stack. The size of memory to be allocated is known to compiler and whenever a function is called, its variables get memory allocated on the stack. And whenever the function call is over, the memory for the variables is deallocated. 
    - ***Heap*** -  allocated during execution of instructions written by programmers. It is called *heap* because it is a pile of memory space available to programmers to allocated and de-allocate. If a programmer does not handle this memory well, memory leak can happen in the program.
    - Key differences:
      1. In a stack, the allocation and deallocation is automatically done by compiler instructions whereas, in heap, it needs to be done by the programmer manually.
      2. <mark>Handling of Heap frame is costlier than handling of stack frame</mark>.
      3. Memory shortage problem is more likely to happen in stack whereas the <mark>main issue in heap memory is fragmentation</mark>.
      4. Stack frame access is easier than the heap frame as the stack have small region of memory and is cache friendly; heap frames are dispersed throughout the memory so it causes more cache misses.
      5. <mark>Stack is not flexible, the memory size allotted cannot be changed</mark> whereas a heap is flexible, and the allotted memory can be altered.
      6. <mark>Accessing time of heap takes is more than a stack</mark>.

27. ***Dynamic/Static Linking***

    - When a C++ program is compiled, the compiler generates object code. After generating the object code, the compiler also invokes linker. One of the main tasks for linker is to make code of library functions (e.g. printf(), scanf(), sqrt()) available to your program. A linker can accomplish this task in two ways, by copying the code of library function to your object code, or by making some arrangements so that the complete code of library functions is not copied, but made available at run-time. 
    - ***Compile-time (Static) Linking*** - is the result of the linker making copy of all used library functions to the executable file. Static Linking creates larger binary files, and need more space on disk and main memory. Examples of static libraries (libraries which are statically linked) are, ***.a\*** files in Linux and ***.lib\*** files in Windows.
    - ***Run-time (Dynamic) Linking*** -  doesn’t require the code to be copied, it is done by just placing name of the library in the binary file. The actual linking happens when the program is run, when both the binary file and the library are in memory. Examples of Dynamic libraries (libraries which are linked at run-time) are, ***.so\*** in Linux and ***.dll\*** in Windows.  

28. ***Pointers*** -  symbolic representation of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. 

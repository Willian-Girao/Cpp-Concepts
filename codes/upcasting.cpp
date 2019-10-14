#include <iostream>
using namespace std;

class Super { 
    int x;
    public:
    void foo() {cout << "Foo.\n";}
};

class Sub:public Super { 
    int y;
};

int main() {
	Sub obj;
	// upcasting
    Super* ptr = &obj;    // pointer to super class
    Super &ref = obj;    // super class's reference

    ptr->foo();
    ref.foo();

	return 0;
}
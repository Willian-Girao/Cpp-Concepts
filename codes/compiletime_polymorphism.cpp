// Static Binding, Early Binding, Compiletime Polymorphism, 
//Function Overloading, Operator Overloading
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
 
class Multiply {
	private: 
    	int real, imag; 
	public:
		Multiply(int r = 0, int i =0)  {real = r;   imag = i;}
		// function overloading
        void operate(const int& a, const int& b) { cout << "\nInteger: " << a/b; }
        void operate(const double& a, const double& b) { cout << "\nDouble: " << a/b; }
        void print() { cout << "\n" << real << " + i" << imag << endl; } 
        // operator overloading
	    Multiply operator + (Multiply const &obj) { 
	         Multiply res; 
	         res.real = real + obj.real; 
	         res.imag = imag + obj.imag; 
	         return res; 
	    } 
};

int main() {
   Multiply m1(10, 5), m2(2, 4); ;

   m1.operate(5, 2);
   m1.operate(5.0, 2.0);

   Multiply m3 = m1 + m2; // an example call to "operator+" 
   m3.print(); 
   
   return 0;
}
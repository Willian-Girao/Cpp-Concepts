// Dynamic Binding, Late Binding, Runtime Polymorphism, Function Overriding
#include <iostream>
using namespace std;

template <typename T>
T getMax(T x, T y) { 
	return (x > y)? x: y; 
} 
int main() { 
  cout << getMax<int>(3, 1) << endl;  // call getMax for int 
  cout << getMax<double>(4.1, 7.5) << endl; // call getMax for double 
  cout << getMax<char>('a', 'z') << endl;   // call getMax for char 
  return 0; 
}
#include <iostream>
using namespace std;
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

// reference as parameter
void swap(int& x, int& y);

// returning value by reference
double& setValues( int i );

int main () {
   // declare simple variables
   int i;
   int a = 100;
   int b = 200;

   // reference variables
   int& r = i;
   
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;

   /* reference as paremeters */
 
   cout << "\nBefore swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
 
   swap(a, b);
 
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;

   /* reference as return value */

   cout << "\nValue before change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }
 
   // When a function returns a reference, it returns an implicit 
   //pointer to its return value. This way, a function can be used 
   //on the left side of an assignment statement.
   setValues(1) = 20.23; // change 2nd element
   setValues(3) = 70.8;  // change 4th element
 
   cout << "Value after change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }
   
   return 0;
}

// function definition to swap the values.
void swap(int& x, int& y) {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

double& setValues( int i ) {
   return vals[i];   // return a reference to the ith element
}
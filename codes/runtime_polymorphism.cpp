// Dynamic Binding, Late Binding, Runtime Polymorphism, Function Overriding
#include <iostream>
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape(int a = 0, int b = 0){
         width = a;
         height = b;
      }
      // Without the use of 'virtual' the polymorphism would be
      //prevented: the function call would be fixed during com-
      //pilation (Shape's implementation).
      virtual int area() = 0; // pure virtual function
};
class Rectangle: public Shape {
   public:
      Rectangle(int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area: " << (width * height) << endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle(int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area: " << (width * height / 2) << endl;
         return (width * height / 2); 
      }
};

int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
   // store the address of Rectangle
   shape = &rec;   
   // call rectangle area.
   shape->area();
   // store the address of Triangle
   shape = &tri;
   // call triangle area.
   shape->area();
   
   return 0;
}
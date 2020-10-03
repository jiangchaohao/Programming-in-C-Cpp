/*
Polymorphism
- It is the ability to take different forms.
- It is the mechanism to use a function with same name in different ways.

=======================================================

Virtual function
- It is the member function of a class.
- It can be overriden in its derived class.
- It is declared with virtual keyword.
- Virtual function call is resolved at run-time.
*/

#include <iostream>

using namespace std;

class Parallelogram {
protected:
   int width, height, ar;

 public:
   void set_values (int a, int b) {
     width = a;
     height = b;
   }

   virtual int area() {
     ar = width * height;
     cout << "Area of Parallelogram is: " << ar << endl;
   }
};

class Rectangle : public Parallelogram {
public:
  int area() {
    ar = width * height;
    cout << "Area of Rectangle is: " << ar << endl;
  }
};

class Triangle : public Parallelogram {
public:
  int area() {
    ar = width * height / 2;
    cout << "Area of Triangle is: " << ar << endl;
  }
};



int main() {
  Parallelogram *parallel, p;
  Rectangle rect;
  Triangle trgl;

  parallel = &p;
  parallel->set_values(3, 2);
  parallel->area();

  parallel = &rect;
  parallel->set_values(4, 5);
  parallel->area();

  parallel = &trgl;
  parallel->set_values(6, 5);
  parallel->area();

  return 0;
}

/*
Area of Parallelogram is: 6
Area of Rectangle is: 20
Area of Triangle is: 15
*/

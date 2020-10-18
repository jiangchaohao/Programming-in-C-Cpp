/*
Function Overriding
- Redefining a base class function in the derived class.
- The derived class function overrides the base class function.
- But the arguments passed are same and the return-type is also same.
*/

/*
- Overloading can occur without inheritance.
- Overriding occurs when one class is inherited from another.
- In overloading the arguments and the return-type must differ.
- In overriding the arguments and the return type must be same.
- In overloading the function name is same, but it behaves differently
depending on the arguments passed to them.
- In overriding the function name, arguments passed and the return type is same.
- Derived class function can perform different operations from the base class.
*/

#include <iostream>

using namespace std;

class Arithmetic {
protected:
  int a, b, sum, sub, mul, div;

public:
  void values(int x, int y) {
    a = x, b = y;
  }

  virtual int operations() {
    sum  = a + b;
    cout << "Additions of two numbers is: " << sum << endl;
  }
};

class Subtract : public Arithmetic {
public:
  int operations() {
    sub = a - b;
    cout << "Difference of two numbers is: " << sub << endl;
  }
};

class Multiply : public Arithmetic {
public:
  int operations() {
    mul = a * b;
    cout << "Product of two numbers is: " << mul << endl;
  }
};

class Divide : public Arithmetic {
public:
  int operations() {
    div = a / b;
    cout << "Division of two numbers is: " << div << endl;
  }
};

int main() {
  // create an object of class arithmetic as p.
  // arith is the pointer to the class arithmetic.

  Arithmetic *arith, p;
  Subtract subt;
  Multiply mult;
  Divide divd;

  arith = &p;
  arith->values(30, 12);
  arith->operations();

  arith = &subt;
  arith->values(42, 5);
  arith->operations();

  arith = &mult;
  arith->values(6, 5);
  arith->operations();

  arith = &divd;
  arith->values(6, 3);
  arith->operations();

  return 0;
}

/*
Additions of two numbers is: 42
Difference of two numbers is: 37
Product of two numbers is: 30
Division of two numbers is: 2
*/

/*
Abstract class
- It is used as a base class.
- It contains at least one pure virtual function.
- We cannot create an instance of abstract class.

=====================================

Pure virtual function
- It is a function with no body.
- It is not defined in the base class.
- It is declared as follows: virtual void virtualfunname()=0;
- A derived class must override the function. Otherwise the compiler will give an error.
- It is upto a derived class to implement the function.
*/

#include <iostream>

using namespace std;

class AbstractInterface {
public:
  virtual void numbers() = 0;
  void input();
  int a, b;
};


void AbstractInterface :: input() {
  cout << "Enter the numbers: " << endl;
  cin >> a >> b;
}

class Add : public AbstractInterface {
public:
  void numbers() {
    int sum;
    sum = a + b;

    cout << "Sum is: " << sum << endl;
  }
};

class Sub : public AbstractInterface {
public:
  void numbers() {
    int diff;
    diff = a - b;

    cout << "Difference is: " << diff << endl;
  }
};

int main() {
  Add obj1;

  obj1.input();
  obj1.numbers();

  Sub obj2;
  obj2.input();
  obj2.numbers();
  return 0;
}

/*
Enter the numbers:
9
4
Sum is: 13
Enter the numbers:
8
3
Difference is: 5
*/

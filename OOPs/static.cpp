/*
Static means fixed, which cannot change.
If a variable is defined as static, it means that it is initialized.
It will remain in the memory till the end of the program.
Static variables are initialized to zero before the first object is created.

==================================================

Static functions
- A static function may be called by itself without depending on any object.
- To access a static function we use, classname :: staticfunction();
*/

#include <iostream>

using namespace std;

class statex {
private:
  int x;

public:
  static int sum;

  // Constructor
  statex() {
    x = sum++;
  }

  // static function
  static void stat () {
    cout << "Result is: " << sum << endl;
  }

  void number () {
    cout << "Number is: " << x << endl;
  }
};

/*
To declare the static variable globally we use scope resolution operator.
To access a static variable we write as: datatype classname::static var name.
Now the storage is allocated to variable sum.
It is initialized to 0.
*/

int statex :: sum;

int main() {

  statex o1, o2, o3, o4;

  o1.number();
  o2.number();
  o3.number();
  o4.number();

  statex :: stat();

  cout << "Now static var sum is " << o1.sum << endl;

  return 0;
}

/*
Number is: 0
Number is: 1
Number is: 2
Number is: 3
Result is: 4
Now static var sum is 4
*/

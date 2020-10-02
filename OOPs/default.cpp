// example on Default constructors

#include <iostream>

using namespace std;

/*
If a constructor is not declared in the class,
Then the compiler assumes a default constructor for the class.
*/

class Subtraction {
public:
  int a, b;
  int sub(int a, int b){
    return a - b;
  }

  Subtraction();
};

Subtraction :: Subtraction(){

}

int main() {
  int x;
  Subtraction s;
  x = s.sub(8, 4);
  cout << "Difference is " << x << endl;
  return 0;
}

/*
Difference is 4
*/

/*
Friend function
- The private data is not accessible outside the class.
- To access the private data we use friend function.
- A friend function is not a member of the class.
- Friend function can be invoked without using an object.
- The argument passed in the friend function is used as its object.

====================================================================

Declaration of a friend function.
friend return_type function_name(class_name object)
- friend keyword is used to declare a friend function.
- Then we give the return_type.
- function_name is the name of the function.
- Then we pass arguments as class_name and object of the class.
*/


#include <iostream>

using namespace std;

class Frnd {
private:
  int a, b;

public:
  void input(){
    cout << "Enter the values of a and b: " << endl;
    cin >> a >> b;
  }

  friend int compute(Frnd f1);
};

int compute(Frnd f1) {
  int x = f1.a + f1.b;
  return x;
}


int main() {
  Frnd f;
  f.input();
  cout << "Result is: " << compute(f) << endl;
  return 0;
}

/*
Enter the values of a and b:
8
4
Result is: 12
*/

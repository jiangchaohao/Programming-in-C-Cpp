/*
Function Overloading
- It means two or more functions can have same name.
- The number of arguments and the data-type of the arguments will be different.
- When a function is called it is selected based on the argument list.
*/

#include <iostream>

using namespace std;

int add(int a, int b, int c) {
  return (a + b + c);
}

// Overload the function add
float add(float d, float e) {
  return (d + e);
}

int main() {
  int add(int, int, int);
  float add(float, float);

  int a, b, c;
  float d, e, sum;

  cout << "Enter three integers: " << endl;
  cin >> a >> b >> c;

  sum = add(a, b, c);
  cout << "Sum of the integers is: " << sum << endl;

  cout << "Enter two floating point values: " << endl;
  cin >> d >> e;

  sum = add(d, e);
  cout << "Sum of the floating point values is: " << sum << endl;

  return 0;
}

/*
Enter three integers:
5
15
23
Sum of the integers is: 43
Enter two floating point values:
2.36666666
2.588555
Sum of the floating point values is: 4.95522
*/

/*
An exception is a problem that arises during the execution of a program.
It is a run-time error that a program may detect.

================================================

The response given to the problems occured during the execution of the program is known as exception handling.
Exception handling allows a program to continue execution, Helps Identifying the problem, and
Terminates the program in a controlled manner.

=================================================

Types of Exceptions
- Try
- Catch
- Throw
We place the error prone code inside a try block
Then it is Handled using throw.
after this the exception is caught, using catch statement
And then it is processed.
*/

#include <iostream>

using namespace std;

double division(int a, int b) {
  if (b == 0) {
    throw "Zero division error!!";
  }
  return a / b;
}

int main() {
  int x, y;
  double z;

  cout << "Enter the values of x and y: " << endl;
  cin >> x >> y;

  try {
    z = division(x, y);
    cout << z << endl;
  }

  catch(const char* msg) {
    cout << msg << endl;
  }

  return 0;
}

/*
Enter the values of x and y:
3
0
Zero division error!!

Enter the values of x and y:
8
2
4
*/

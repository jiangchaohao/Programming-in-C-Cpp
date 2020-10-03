/*
Public specifier
- The public specifier allows the data to be accessed outside the class.
- A public member can be used anywhere in the program.

Private specifier
- The members declared as private cannot be used or accessed outside the class.
- Private members can be used only by the members of the class.

Protected specifier
- Protected members cannot be accessed from outside the class.
- They can be accessed by a derived class.
*/


/*
In this program, the data and functions are combined together in a class.
Class is a single unit, in which the data and the function using them is grouped.
This mechanism is called as Encapsulation.

In this program, we have class with the private and public members.
The private data is hidden.
It cannot be accessed outside the class.
This mechanism is called as Data abstraction.
The interface is seen but the implementation is hidden.
*/

#include <iostream>

using namespace std;

class Square {
  int x; // By default, it is a private member

public:
  int area(int);
};


/* :: is the scope resolution operator
We must use this operator.
It specifies that function area is not a global function.
It is a member function of class Square.

About scope resolution operator
- It is used to access the hidden data.
- To access the variable or function with the same name,
we use the scope resolution operator.
- Suppose the local variable and the global variable have same name.
- The local variable gets the priority.
- We can access the global variable using scope resolution :: operator.
*/

int Square :: area(int a) {
  /* Here the value of a is stored in x. x is a private member.
  To access the private parameter, we used the public member a.
  private members are always hidden.
 */
  x = a;
  return x*x;
}

int main(){
  Square sqr;

  cout << "Area of the square is " << sqr.area(4) << endl;

  return 0;
}


/*
Area of the square is 16
*/

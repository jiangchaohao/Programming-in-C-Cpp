/*
Constructor
- A constructor is a member function.
- It has the same name as the class name.
- Constructors cannot return values.
- It is automatically called when an object is created.

Types of Constructors are:
- Parameterized Constructors
- Copy Constructors
- Default Constructors

==================================================

Destructor
- Destructors are used to deallocate memory.
- They are called when an object is destroyed.
- A destructor takes no arguments and has no return types.
*/

// Perform the addition of two numbers using constructor

#include <iostream>

using namespace std;

class Addition {
  int a, b;

public:
  Addition(int, int); // Constructor has the same name as the class
  ~Addition(); // Destructor

  int add(){
    return a + b;
  }
};


/*
Access the constructor using the scope resolution operator.
a and b are private members.
To access the private members we use x and y.
Then we access the destructor.
*/

Addition :: Addition (int x , int y) {
  a = x;
  b = y;
}

Addition :: ~Addition() {
  cout << "Memory Deallocation" << endl;
}


int  main(){
  // The constructor that has arguments is called parameterized constructor
  // like this one
  Addition obj (3, 4); // create an object obj of class Addition
  cout << "Sum is " << obj.add() << endl;
  return 0;
}

/*
Sum is 7
Memory Deallocation
*/

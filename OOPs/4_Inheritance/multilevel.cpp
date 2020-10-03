/*
Inheritance
- When one object acquires the property of another it is called as inheritance.
- It is the process of reusing the existing class without modifying them.

Types of Inheritance
- Single level inheritance - Only one base class and one derived class is needed.
- Multiple level inheritance - Derived class inherits from more than one base class.
- Hierarchical Inheritance -  Multiple derived classes inherits from one base.
- Multilevel inheritance - Subclass acts as the base class for other classes.
- Hybrid Inheritance - More than one form of inheritance is combined.

Base class and Derived class
- The base class has its own properties and functionality.
- It is also called as parent class.
- It has the common qualities that all the objects can inherit.
- The derived class is the child class.
- Derived class inherits the properties and functionality of the base class.
*/

#include <iostream>

using namespace std;

class Student {
private:
  int roll_no;
  char name[20];

public:
  void input();
  void display();
};

void Student :: input() {
  cout << "Enter roll number: ";
  cin >> roll_no;

  cout << "Enter name: ";
  cin >> name;
}

void Student :: display() {
  cout << "Roll number is: " << roll_no << endl;
  cout << "Name is: " << name << endl;
}

class exam_inherit : public Student {
private:
  int sub1, sub2, sub3;

public:
  int total;
  void input_exam();
  void display_exam();
};

void exam_inherit :: input_exam() {
  cout << "Enter marks of subject 1: ";
  cin >> sub1;

  cout << "Enter marks of subject 1: ";
  cin >> sub2;

  cout << "Enter marks of subject 1: ";
  cin >> sub3;
}

void exam_inherit :: display_exam() {
  total = sub1 + sub2 + sub3;
  cout << "Total marks is: " << total << endl;
}

class grade : public exam_inherit {
private:
  int avg;

public:
  void average();
};

void grade :: average() {
  avg = total/3;
  cout << "Average marks is: " << avg << endl;
}

int main(){
  grade gd;
  gd.input();
  gd.input_exam();
  gd.display();
  gd.display_exam();
  gd.average();
  return 0;
}

/*
Enter roll number: 358
Enter name: Sudhakar
Enter marks of subject 1: 98
Enter marks of subject 1: 97
Enter marks of subject 1: 93
Roll number is: 358
Name is: Sudhakar
Total marks is: 288
Average marks is: 96
*/

// String reversal using stack


#include<iostream>
#include<cstdio>
#include<cstring>
#include <string>
#include<stack> // stack from standard template library (STL)
using namespace std;

// class Stack {
// private:
//   char A[101];
//   int top;
//
// public:
//   void Push(int x)
//   void Pop();
//   int Top();
//   bool IsEmpty();
// };

void Reverse(string &C, int n) {
  stack<char> S;

  for (int i = 0; i < n; i++) {
    S.push(C[i]);
  }

  for(int i = 0; i < n; i++){
    C[i] = S.top(); // overwrite the character at index i
    S.pop(); // perform pop
  }

}

int main(){
  string s;
  printf("Enter a string: ");
  getline(cin, s);
  cin.clear();

  Reverse(s, s.length());
  cout << s << '\n';
}

/*
Enter a string: hello world
dlrow olleh
*/

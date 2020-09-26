// Check balanced parentheses using stack
// https://youtu.be/QZOLb0xHB_Q?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P
// https://gist.github.com/mycodeschool/7207410

#include<iostream>
#include<cstdio>
#include<cstring>
#include <string>
#include<stack> // stack from standard template library (STL)
using namespace std;


string Check_Bal_Parentheses(string &C, int n) {
  stack<char> S;

  for (int i = 0; i < n; i++) {
    if (C[i] == '(' || C[i] == '{' || C[i] == '[')
    S.push(C[i]);

    else if (C[i] == ')') {
      if(S.empty() || S.top() != '(') return "False";
      else S.pop();
    }

    else if (C[i] == '}') {
      if(S.empty() || S.top() != '{') return "False";
      else S.pop();
    }

    else if (C[i] == ']') {
      if(S.empty() || S.top() != '[') return "False";
      else S.pop();
    }
  }
  return S.empty() ? "True":"False";
}

int main(){
  string s;
  printf("Enter a string: ");
  getline(cin, s);
  cin.clear();

  string result = Check_Bal_Parentheses(s, s.length());
  cout << result << '\n';
}

/*
Enter a string: [(])
False

Enter a string: [()]
True

Enter a string: )(
False

Enter a string: ()
True
*/

// https://www.youtube.com/watch?v=GM9sA5PtznY&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=2

// Calculating the nth term of a Fibonacci sequence

#include<iostream>
#include<cstdio>
using namespace std; 

int fibonacci(int n){
    if (n < 2) return n; 

    int f1 = 0, f2 = 1; 
    int f;
    for(int i = 2; i <= n; i++){
        f = f1 + f2; 
        f1 = f2; 
        f2 = f; 
    }

    return f; 
}

int main(){
    int n; 
    cout << "Enter the value of n: "; 
    cin >> n; 
    int result = fibonacci(n); 
    cout << "The " << n << "-th" << " term of the Fibonacci sequence is: " <<  result << endl; 
    
}

/*
Enter the value of n: 6
The 6-th term of the Fibonacci sequence is: 8
Enter the value of n: 40
The 40-th term of the Fibonacci sequence is: 102334155
*/
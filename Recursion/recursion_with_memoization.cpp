/*
https://www.youtube.com/watch?v=UxICsjrdlJA&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=5

In computing, memoization or memoisation is an optimization technique used primarily 
to speed up computer programs by storing the results of expensive function calls and 
returning the cached result when the same inputs occur again.

Memoization is a technique for improving the performance of recursive algorithms. 
It involves rewriting the recursive algorithm so that as answers to problems are found, 
they are stored in an array. Recursive calls can look up results in the array rather than having to recalculate them.

*/

#include<iostream>
using namespace std; 

int F[51]; 

int fibonacci(int n){
    if(F[n] != -1){
        return F[n]; 
    }
    F[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return F[n];  
}


int main(){
    for(int i = 0; i < 51; i++){
        F[i] = -1; 
    }
    F[0] = 0;
    F[1] = 1; 
    int n; 
    cout << "Enter the value of n: "; 
    cin >> n; 
    int result = fibonacci(n); 
    cout << result << endl; 
    return 0; 
}

/*
Enter the value of n: 0
0
Enter the value of n: 1
1
Enter the value of n: 2
1
Enter the value of n: 3
2
Enter the value of n: 40
102334155
Enter the value of n: 45
1134903170
*/
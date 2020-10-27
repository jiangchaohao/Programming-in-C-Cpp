// https://www.youtube.com/watch?v=wAyrtLAeWvI&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=7
// Calculates x^n in O(log n) time 

#include<iostream>
using namespace std; 

int power(int x, int n){
    if (n == 0) return 1; 
    else if(n % 2 == 0){
        int temp = power(x, n/2); 
        return temp * temp; 
    } 
    else return x * power(x, n - 1); 
}

int main(){
    int base, exponent; 
    cout << "Enter the value of base follwed by power: "; 
    cin >> base >> exponent; 
    cout << "Base is: " << base << endl; 
    cout << "Power is: " << exponent << endl; 
    int result = power(base, exponent); 
    cout << base << "^" << exponent << " = " << result << endl; 
    return 0; 
}

/*
Enter the value of base follwed by power: 2 3 
Base is: 2
Power is: 3
2^3 = 8
Enter the value of base follwed by power: 2 0 
Base is: 2
Power is: 0
2^0 = 1
Enter the value of base follwed by power: 0 0 
Base is: 0
Power is: 0
0^0 = 1
Enter the value of base follwed by power: 3 5
Base is: 3
Power is: 5
3^5 = 243
*/
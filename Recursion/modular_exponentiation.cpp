// https://youtu.be/nO7_qu2kd1Q?list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO
// Calculates the modular exponentiation 
// (x^n) % M

#include<iostream>
using namespace std; 

int modular_exp(int x, int n, int M){
    if (n == 0) return 1; 
    else if (n % 2 == 0){
        int temp = modular_exp(x, n/2, M);
        return (temp * temp) % M; 
    }
    else return ((x % M) *(modular_exp(x, n - 1, M))) % M; 
}

int main(){
    int base, exponent, M; 
    cout << "Enter the base followed by exponent and M: "; 
    cin >> base >> exponent >> M; 
    int result = modular_exp(base, exponent, M); 
    cout << "(" << base << "^" << exponent << ")" << " % " << M << " = " << result << endl; 
    return 0; 
}

/*
Enter the base followed by exponent and M: 5 2 7
(5^2) % 7 = 4
Enter the base followed by exponent and M: 5 3 7
(5^3) % 7 = 6
*/


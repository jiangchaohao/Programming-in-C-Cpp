// https://youtu.be/_OmRGjbyzno?list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO
/*
Calculate factorial of a positive integer
*/

#include<iostream>
#include<cstdio>

int Factorial(int n){

    std::cout<< "Calculating Factorial(" << n << ")" << std::endl; 
    if (n == 0) return 1; 
    int F = n * Factorial(n - 1); 
    std::cout << "*****************" << std::endl; 
    std::cout << "Done ! " << "F(" << n << ") = " << F << std::endl;  
    return F; 
}

int main(){
    int num; 
    std::cout << "Enter the value of num: "; 
    std::cin >> num; 
    int result = Factorial(num); 
    std::cout << "Factorial of " << num << " is " << result << std::endl; 
    return 0; 
}

/*
Enter the value of num: 5
Calculating Factorial(5)
Calculating Factorial(4)
Calculating Factorial(3)
Calculating Factorial(2)
Calculating Factorial(1)
Calculating Factorial(0)
*****************
Done ! F(1) = 1
*****************
Done ! F(2) = 2
*****************
Done ! F(3) = 6
*****************
Done ! F(4) = 24
*****************
Done ! F(5) = 120
Factorial of 5 is 120
*/


// Recursion function is type of function which function call itself untill the condition false;
// Sometimes recursion is better than itterative;
// But sometimes itterative is better;

#include <iostream>
using namespace std;

// Here define the recursive function of factorial;
int fact (int n) {
    if ((n == 1) || (n == 0))  // Function termination condition define here;
        return 1;
    
    return (n * fact(n-1)); // Here function call itself;
}

// Here define the recursive function for the fibonacci seriese;
int fib (int n){
    if ((n == 1) || (n == 2))   // Function termination condition define here;
        return 1;
    
    return fib(n-2) + fib(n-1); // Here function call itself;
}

int main (){
    int n = 6;

    // Call recursive function;
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    cout << "Fibonacci of at " << n << "th is " << fib(n) << endl;
    
    return 0;
}
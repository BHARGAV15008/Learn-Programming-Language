// Recursive function is type function or nested function;
// Here recursive function is call itself;
// Recursive mainly used to resolve loops problem or iterative problems;
// Recurisive has single termination code needed to escape fuction;
// Recursive example: Hanoi, Fibonacci series, Factorial;

// Let's implementing Factorial in recursive;
#include <stdio.h>

// Define the Recurisive function;
int recursive(int n){
    if (n == 1 || n == 0)
        return 1;
    else
        return n * recursive(n-1);
}

int main (){
    int n, fact;

    printf("\nWrite the number for factorial: ");
    scanf("%d", &n);

    // Call recursive function here;
    fact = recursive(n);
    printf("\nFactorial of the %d is %d ...", n, fact);

    return 0;
}
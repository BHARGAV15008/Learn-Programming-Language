// Recursive problem: Fibonacci Series
// like: 0 1 1 2 3 5 8 13 21 34 55 ...

#include <stdio.h>

// Define the fibonacci function here by recursive
int fibonacci_rec(int n){

    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci_rec(n-1) + fibonacci_rec(n-2);
}

// Define the fibonacci function here by Iterative
long fibonacci_itr(int n){
    long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main (){
    int n, itr_fib, rec_fib;

    printf("\nEnter number for finding fibonacci: ");
    scanf("%d", &n);

    rec_fib = fibonacci_rec(n);
    itr_fib = fibonacci_itr(n);
    printf("\nFibonaci value by recursive: %d", rec_fib);
    printf("\nFibonaci value by iterative: %d", itr_fib);

    return 0;
}
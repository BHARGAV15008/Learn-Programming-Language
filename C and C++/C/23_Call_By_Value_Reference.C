// Call by value and Call by Reference
// In function they are two types of parameter:
//  1. Actual parameter: Parameter pass during function will call;
//  2. Formal parameter: Value is assign local variable during call the function;
// Call by value is defined as when we call the any function in block and we pass only variable;
// Call by value function define and their parameter take value of the variable which pass during call the function;
// But in call by reference we pass the address of the variable during the call the function;
// During define the the call by reference function we pass references parameter means pointer parameter;

#include <stdio.h>

// Perform swap opeation by using call by rerference;
void swap_cbr(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Perform swap opeation by using call by Value;
void swap_cbv(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}


int main (){
    int a = 43, b = 23;
    
    printf("\nBefore Call by Value applied Value of a and b is %d  %d", a, b);
    swap_cbr(&a, &b);          // Calling call by value function
    printf("\nAfter Call by Value applied Value of a and b is %d  %d", a, b);

    printf("\nBefore Call by Value applied Value of a and b is %d  %d", a, b);
    swap_cbv(a, b);        // Calling call by reference function
    printf("\nAfter Call by Value applied Value of a and b is %d  %d", a, b);

    return 0;
}
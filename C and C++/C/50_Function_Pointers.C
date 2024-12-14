// We learn pointer which store the address of variable;
// A pointer which pointing to the function's address;
// Function pointer which helps to implements callback functions;
/*
-----   Use of Function Pointer   -----
    * Usefull to implement callback function;
    * Callback Function: Passed function to called again;, helps to write less code;
    *  
*/

#include <stdio.h>

// Create function;
int sum (int a, int b) {
    return (a + b);
}

// Create Callback function;
void greetHello(int (*fptr) (int, int)) {
    printf("\nHello users.....");
    printf("\nYour sum is %d", fptr(12, 13));
}

int main (){
    int add;
    // add = sum(4, 5);
    // printf("\nThe sum of 4 and 5 is %d", add);  // Testing the function;

    // // Function pointer;
    int (*fptr) (int, int);
    fptr = &sum;
    // add = (*fptr) (12, 13);  // dereferencing function pointer;
    // printf("\nThe sum of 12 and 13 is %d", add);  // Testing the function pointer;
    greetHello(fptr);
    
    return 0;
}
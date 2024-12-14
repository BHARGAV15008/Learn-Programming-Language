// A void pointer is pointer that has no any data type associate with it;
// A void pointer can be easily typecasted to any pointer type;
// It is general purpose pointer variable;
// Every memory allocation function return void type pointer;
// This pointer not possible to dereferenced;
// In this pointer not allowed pointer arithmentics;

#include <stdio.h>

int main (){
    int x = 20;
    char y = 'Y';
    float z = 50.5;
    void *ptr;

    ptr = &x;
    printf("\nThe value of x is %d", *(int *)ptr);

    ptr = &y;
    printf("\nThe value of x is %c", *(char *)ptr);

    ptr = &z;
    printf("\nThe value of x is %f", *(float *)ptr);

    return 0;
}
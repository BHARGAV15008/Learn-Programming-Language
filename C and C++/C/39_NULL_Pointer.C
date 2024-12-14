// Null pointer is pointer which has a value reserved for indicating that the pointer or reference does not refer to a valid object;
// A null pointer is undefined behaviour in C;
// A null pointer is guaranteed to compare unequal to any pointer that points to a valid object;
// Null pointer gives a functionality to C programmer to check whether a pointer is legitimate or not;
// Pointer dereferenced only not NULL pointer;
// NULL macro is define as ((void*) 0);
// Null pointer has defined value but uninitialised has undefined values;

#include <stdio.h>

int main (){
    int a = 34;
    int *ptr = &a;  // Null initialised;

    if(ptr != NULL)
        printf("\nValue of pointer is %d --> %d", ptr, *ptr);
    else
        printf("\nValue of pointer is NULL");

    
    return 0;
}
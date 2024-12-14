// Uninitialised Pointer are known as wild pointer;
// These pointer pointing to arbitary location;
// Dereferencing wild pointer create nasty bugs;
// Simply define pointer known as wild pointer;

#include <stdio.h>
#include <stdlib.h>

int main (){
    int a = 25;
    int *ptr;  // wild pointer

    printf("\nValue of pointer is %d", *ptr);
    printf("\nAddress of pointer is %d", ptr);

    *ptr = 34;
    printf("\nValue of pointer is %d", *ptr);

    ptr = &a;
    printf("\nValue of pointer is %d", *ptr);
    printf("\nAddress of pointer is %d", ptr);
    free(ptr);
    ptr = NULL;
    
    return 0;
}
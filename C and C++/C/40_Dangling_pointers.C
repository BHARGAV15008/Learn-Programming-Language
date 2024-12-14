// A pointer pointing to a freed memory location;
// Dangling pointer arise during object destruction when an object that has an incoming reference is deleted or deallocate;
/*
------  Causes of Dangling pointer  ------
        * Deallocation of memory:
            - When mwmory is deallocated, the pointer keeps pointing to the freed memory;

        * Returning local variable in function calls:
            - Created function which return address of local variable in function;

        * Variable going out of scope;
*/
// Dangling pointer can introduce nasty bugs in our C code;
// It create bugs frequently become security holesat times;

#include <stdio.h>
#include <stdlib.h>

// Case II:
int *sumDang (){
    int a = 9;
    float b = 16.5;
    float sum = a + b;

    return &sum;
}

int main (){

    // Case I:
    int *dangPtr_1 = (int*) malloc(7 * sizeof(int));

    dangPtr_1[0] = 1;
    dangPtr_1[1] = 2;
    dangPtr_1[2] = 3;
    dangPtr_1[3] = 4;
    dangPtr_1[4] = 5;
    dangPtr_1[5] = 6;
    dangPtr_1[6] = 7;
    free(dangPtr_1);  // ptr is now dangling;

    // Case II:
    int *dangPtr_2 = sumDang();

    // Case III:
    int *dangPtr_3;
    {
        int a = 25;
        dangPtr_3 = &a;
    }
    // after block dangPtr_3 is dangling ptr;
    
    return 0;
}
// Lets discuss about Pointer Arithmetics:
//  *> ++
//  *> --
//  *> +
//  *> -

// How Array relate to Pointer;
// Fetching data with index but direct using variable we fetching address;
// like wise: int arr[50]; // Declared array;
// mem : 'arr' return address of array arr, arr+1 is equivalent to arr[1];

#include <stdio.h>


int main (){
    int a = 90;
    int *ptra = &a;
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Perform Pointer Arithmetic operations;
    printf("\nAddress of variable a is %d", ptra);
    printf("\nAddress of variable a after ++ opration is %d  --->  %d", ptra++, ptra);
    printf("\nAddress of variable a after -- opration is %d  --->  %d", ptra--, ptra);
    printf("\nAddress of variable a after -2 opration is %d", ptra-2);
    printf("\nAddress of variable a after +2 opration is %d", ptra+2);

    // Perform Pointer with Array;
    printf("\n\nAddress  %d,  %d  and value  %d,  %d...", arr, &arr[0], arr[0], *arr);
    printf("\nAddress  %d,  %d  and value  %d,  %d...", arr+1, &arr[1], arr[1], *(arr+1));
    printf("\nAddress  %d,  %d  and value  %d,  %d...", arr+2, &arr[2], arr[2], *(arr+2));
    printf("\nAddress  %d,  %d  and value  %d,  %d...", arr+3, &arr[3], arr[3], *(arr+3));
    printf("\nAddress  %d,  %d  and value  %d,  %d...", arr+4, &arr[4], arr[4], *(arr+4));
    printf("\nAddress  %d,  %d  and value  %d,  %d...", arr+5, &arr[5], arr[5], *(arr+5));


    return 0;
}
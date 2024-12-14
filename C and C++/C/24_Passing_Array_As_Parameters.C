// We pass array to a function when we need to pass list of value;
// Passing array in function by two ways:
//  1. By declaring as a parameter;
//  2. By declaring as a pointer;

#include <stdio.h>

// Case I: By declaring as a parameter;
int printArray_para (int arr[6]){
    int size = 6;

    for (int i = 0; i < size; i++)
        printf("\nThe value at %d is %d...", i, arr[i]);
    
    // NOTE: If you change any value here they reflacted to original array; 
    // because we pass array's adress to the parameter and actual parameter got pointer;
    arr[0] = 150;
        
    return 0;
}

// Case II: By declaring as a Pointer;
int printArray_poi (int *ptr){
    int size = 6;

    for (int i = 0; i < size; i++)
        printf("\nThe value at %d is %d...", i, *(ptr+i));
    
    *(ptr+3) = 250;

    return 0;
}

int main (){
    int arr[] = {1, 4, 98, 24, 77, 13};

    printf("\nBefore function call: value at 0 is %d...", arr[0]);
    printArray_para(arr);
    printf("\nAfter function call: value at 0 is %d...", arr[0]);

    printf("\n\nBefore function call: value at 3 is %d...", arr[3]);
    printArray_poi(arr);
    printf("\nAfter function call: value at 3 is %d...", arr[3]);
    
    return 0;
}
// Take user input array;
// Make reversal function for Array;
// Return Array in reversal order;

#include <stdio.h>

// Swapping two elements;
void swap (int* ptra, int* ptrb) {
    int temp = 0;
    temp = *ptra;
    *ptra =*ptrb;
    *ptrb = temp;
}

// Array reversal function;
void reverseArray (int arr[], int size) {
    for (int i = 0, j = size-1; ; i++, j--) {
        if(i >= j)
            break;

        swap(arr+j, arr+i);
    }
}

int main (){
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = sizeof(arr)/sizeof(int);

    printf("\nPrint Original Array of size %d : \n", n);
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    reverseArray(arr, n);
    printf("\nPrint Reverse Array of size %d: \n", n);
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    
    return 0;
}
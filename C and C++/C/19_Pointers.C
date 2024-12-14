// It is special type of datatypes;
// Pointer is used to dtore address of variable;
// Pointer in C programming declared with *;
// To fetch address of any variable to use & before variable;
// &a : It means take address of 'a';
// *a : It means take value stored at 'a';
// NULL is another pointer which stored none;
// Pointer using to memory allocation and data struction like: LinkedList, Trees, Graph...
// It is reduce the code and make code faster;

#include <stdio.h>

int main (){
    int num;
    int *ptr;  // Pointer
    ptr = &num;  // stored adress of num variable;

    printf("\nEnter your number: ");
    scanf("%d", &num);

    printf("\nThe address of num is %p", ptr);
    printf("\nThe address of num is %x", ptr);
    printf("\nThe value of num is %d", *ptr);

    printf("\n\nThe address of num is %p", &num);
    printf("\nThe address of num is %x", &num);
    printf("\nThe value of num is %d", *&num);

    return 0;
}
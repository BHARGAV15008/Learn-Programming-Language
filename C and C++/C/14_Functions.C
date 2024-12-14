// Function used devide large code or program into small piece of code;
// Function provide callability functionality multiple times;
// Function also provide code reusability;
// Easy to Debug;
// Avoid rewrite same type of code;
// Also called procedure and subroutine;
// Types of User define functions
//  - Void Function: with or without arguments
//  - Return Funnction: With or without arguments
//  - Nested Function
//  - Recursion Function
//  - 


#include <stdio.h>

// Here we have to declared or define the functions;
// Case I: With Return type With Arguments;
int sum(int a, int b);  // Also called Prototype

// Case II: Without Return type With Arguments;
void printStar(int n){
    for (int i = 0; i < n; i++){
        printf("%c\t", '*');
    }
}

// Case III: With Return type Without Arguments;
int takeValue(){
    int n;
    printf("\nEnter your value: ");
    scanf("%d", &n);
    return n;
}

// Case IV: Without Return type Without Arguments;
void greeting (){
    printf("Hi, How are you!");
    printf("Congrats.....");
}

int main (){
    int num1, num2, add;
    int a;

    printf("\nEnter the two number: ");
    scanf("%d %d", &num1, &num2);

    // Here we have to call the function
    add = sum(num1, num2);      // Case I
    printf("\nSum of the value is %d\n\n", add);

    printStar(num1);        // Case II

    a = takeValue();        // Case III
    printf("\nYou enter this value: %d\n", a);

    greeting();      // Case IV

    return 0;
}

// Also we have to define function here;
int sum (int a, int b){
    return a+b;
}
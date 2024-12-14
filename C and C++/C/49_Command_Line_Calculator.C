// Take input from the users;
// perform operation;
// First command - operation;
// Second and third command - values;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){
    int result, num1 = atoi(argv[2]), num2 = atoi(argv[3]);
    char *operation;
    operation = argv[1];
    
    if (!strcmp(operation, "add")) {
        result = num1 + num2;
        printf("Your result is: %d", result);
    } 
    else if (!strcmp(operation, "sub")) {
        result = num1 - num2;
        printf("Your result is: %d", result);
    } 
    else if (!strcmp(operation, "mul")) {
        result = num1 * num2;
        printf("Your result is: %d", result);
    } 
    else if (!strcmp(operation, "div")) {
        result = num1 / num2;
        printf("Your result is: %d", result);
    } 
    else if (!strcmp(operation, "mod")) {
        result = num1 % num2;
        printf("Your result is: %d", result);
    }
    
    return 0;
}
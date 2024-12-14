// This is Single line comment;
/*
    Datatype in C:
    1. int
    2. long
    3. short
    4. float
    5. double
    6. char
    7. string - external library

    *** Basic Syntax in C ***
        Datatype VariableName;  -- Declaration of variables;
        Datatype VariableName = Value;  -- Initialization of variables;
*/
#include <stdio.h>

int main(){
    int num = 5;
    float dec = 20.5;
    char alph = 'B';
    char str[] = "This is String by char array";

    printf("Hello world! \n");
    printf("Hi Let's start coding with C.\n");
    printf("\n");

    // Print the value of variables;
    printf("int value is     %d\n", num);
    printf("float value is   %f\n", dec);
    printf("char value is    %c\n", alph);
    printf("string value is  %s\n", str);

    // Size of datatypes;
    printf("\nSizeof(int)     : %lu\n", sizeof(int));
    printf("Sizeof(long)    : %lu\n", sizeof(long));
    printf("Sizeof(short)   : %lu\n", sizeof(short));
    printf("Sizeof(float)   : %lu\n", sizeof(float));
    printf("Sizeof(double)  : %lu\n", sizeof(double));
    printf("Sizeof(char)    : %lu\n", sizeof(char));
    return 0;
}
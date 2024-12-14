//  Studying about Operators in C
/*
    *** OPerators are used to perform various task in C ***
        ## Arithmetic Operators
            - Addition (+)
            - Subtraction (-)
            - Multipication (*)
            - Division (/)
            - Modulus (%)

        ## Relation Operators: Its return 0 (False) and 1 (True)
            - Equal to (==)
            - Not Equal to (!=)
            - Greater than (>)
            - Less than (<)
            - Greater than Equal to (>=)
            - Less than Equal to (<=)

        ## Logical Operators
            - And (&&)
            - Or (||)
            - Not (!)

        ## Bitwise Operators
            - And (&)
            - Or (|)
            - Xor (^)
            - Complement (~)
            - Binary right shift (>>)
            - Binary left shift (<<)

        ## Assignment Operators
            - Assign (=)
            - Assign with Addition (+=)
            - Assign with Subtraction (-=)
            - Assign with Multiplication (*=)
            - Assign with Division (/=)
            - Assign with Modulus (%=)
            - Assign with bitwise and (&=)
            - Assign with bitwise or (|=)

        ## Miscellaneous Operators
            - sizeof()
            - Address (&)
            - Pointer (*)
            - Conditional (?:)
*/
#include <stdio.h>

int main(){
    int num1 = 12, num2 = 6;
    int cmp1 = 15.0, cmp2 = 0;
    
    // Lets perform arithmetic operators
    printf("***** Perform Arithmetic Operators *****\n");
    printf("Addition             : %d\n", num1+num2);
    printf("Subtraction          : %d\n", num1-num2);
    printf("Multipication        : %d\n", num1*num2);
    printf("Division             : %d\n", num1/num2);
    printf("Modulus (Remainder)  : %d\n", num1%num2);

    // Lets perform relational operators
    printf("\n***** Perform Relational Operators *****\n");
    printf("Equal to               : %u\n", cmp1==cmp2);
    printf("Not Equal to           : %u\n", cmp1!=cmp2);
    printf("Greater than           : %u\n", cmp1>cmp2);
    printf("Less than              : %u\n", cmp1<cmp2);
    printf("Greater than Equal to  : %u\n", cmp1>=cmp2);
    printf("Less than Equal to     : %u\n", cmp1<=cmp2);

    // Lets perform logical operators
    printf("\n***** Perform Logical Operators *****\n");
    printf("And   : %u\n", cmp1&&cmp2);
    printf("Or    : %u\n", cmp1||cmp2);
    printf("Not   : %u\n", !cmp2);

    // Lets perform bitwise operators
    printf("\n***** Perform Bitwise Operators *****\n");
    printf("And                 : %u\n", cmp1&cmp2);
    printf("Or                  : %u\n", cmp1|cmp2);
    printf("Not                 : %u\n", cmp1^cmp2);
    printf("Complement          : %u\n", ~cmp2);
    printf("Binary right shift  : %u\n", cmp1<<cmp2);
    printf("Binary left shift   : %u\n", cmp1>>cmp2);

    return 0;
}

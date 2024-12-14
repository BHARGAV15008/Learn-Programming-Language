/*
    --> Format Specifier: It helps to print value of variable and also take input from the users; 
        * %d for int
        * %f for float
        * %u for unsign int
        * %c for char
        * %l for long
        * %lf for double
        * %LF for long double
    
    --> Constant: Assigned value can never changed
        * by const keyword  : const int var = 5;
        * by preprocessor   : #define var 5;
     
    --> Escape Sequences:
        * \a - Alarm and Beep
        * \b - Backspace
        * \f - Form feed
        * \n - New line
        * \r - Carraige return
        * \t - Tab
        * \v - Vertical Tab
        * \\ - backslash
        * \' - Single quote
        * \" - Double quote
        * \? - Question Mark
        * \nnn - Octal number
        * \xhh - Hexadecimal number
        * \0 - Null
*/
#include <stdio.h>
#define num1 5
int main(){
    int num2 = 10;
    const int num3 = 15;

    printf("Values : %d  %d  %d", num1, num2, num3);

    // num1 = 11; This variable is never changed there value; 
    // num3 = 11; This variable is never changed there value;
    num2 = 11; 
    printf("\nValues : %d  %d  %d", num1, num2, num3);
    return 0;
}
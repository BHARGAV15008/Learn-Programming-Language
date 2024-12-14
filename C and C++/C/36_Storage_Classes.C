/*
------  Storage classes defines scope, default initial value & lifetime of variable  ------
        * Automatic Variable:
            - Scope is local to function body;
            - Default value is garbage value;
            - Lifetime is till the function ends;
            - By default all variable is auto;
            - Syntax: int var or auto int var;

        * External Variable:
            - Scope is global;
            - Default value is 0;
            - Lifetime till the program exists;
            - Change value by anywhere;
            - Define outside the function;
            - Avoid global variable - throughout space;
            -- Extern Variable helps to use variable in different files;
            -- Syntax: extern int var;

        * Static Variable:
            - Scope is local to the function;
            - Default value is 0;
            - Lifetime is till the program;
            - Syntax: static int var;

        * Register Variable:
            - Scope is local to the function;
            - Default value id garbage value;
            - Lifetime till the program;
            - For faster use of variable;
            - Syntax: register int var;
*/

#include <stdio.h>
// int ab = 4;  //  Its global variable or External variable;

int add (int a, int b) {
    
    // extern int sum;  // External variable which usable in different files or gives priority;
    int sum;  // Its automatic variable or scope of this variable till the function;
    sum = a + b;
    return sum;
}

int main (){
    int sum;
    // Let use different variable or storage classes;
    sum = add(55, 45);
    printf("\nValue of sum is %d", sum);
    
    return 0;
}
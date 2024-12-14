// Local variable can define in any blocks like struct, function, etc;
// Local variable can accessed only in block where they defined;
// Global Variable define out of the all function or blocks which accessed at any where;
// If both name is same then blocks gives first priorities to local variable;
// Static Variable can preserve their variable of previous scope;
// Static variable can initialise at only one time;
// And static variable remain until program closed;
// Static variable can fetch out of scope;
// By default static variable initialised 0;

#include <stdio.h>

// perform static code;
void fun (int n){
    int a = 9;
    static int b = 10;
    int c = n + b + a;

    printf("\nValue of a, b, c is %d  %d  %d", a, b, c);
    printf("\n\nAddress of a, b, c is %d  %d  %d", &a, &b, &c);

    a = a + n;
    b = b + n;
}

int main (){
    int n = 6;

    fun(n);
    fun(n);
    fun(n);

    return 0;
}
// To print multiplication table;
// 1. Take input from users;
// 2. Print table of the entered number;
/*
----- Like this -----
    7 x 1 = 7
    7 x 2 = 14
    7 x 3 = 21
    7 x 4 = 28
    7 x 5 = 35
    7 x 6 = 42
    7 x 7 = 49
    7 x 8 = 56
    7 x 9 = 63
    7 x 10 = 70
*/

#include <stdio.h>

int main (){
    int n;

    printf("\nEnter number: ");
    scanf("%d", &n);

    // Without using loops;
    printf("*****  Table of the %d  Without using loops*****\n", n);
    printf("      %d  x  1  =  %d\n", n, n*1);
    printf("      %d  x  2  =  %d\n", n, n*2);
    printf("      %d  x  3  =  %d\n", n, n*3);
    printf("      %d  x  4  =  %d\n", n, n*4);
    printf("      %d  x  5  =  %d\n", n, n*5);
    printf("      %d  x  6  =  %d\n", n, n*6);
    printf("      %d  x  7  =  %d\n", n, n*7);
    printf("      %d  x  8  =  %d\n", n, n*8);
    printf("      %d  x  9  =  %d\n", n, n*9);
    printf("      %d  x  10  =  %d\n", n, n*10);

    // With loops;
    printf("\n*****  Table of the %d  With using loops*****\n", n);
    for (int i = 1; i <= 10; i++)
        printf("      %d  x  %d  =  %d\n", n, i, n*i);

    return 0;
}
// Typecasting used to change datatype of variable

#include <stdio.h>

int main (){
    int num = 65;
    float dec = 15.5;
    char chr = 'C';

    printf("\nThe value of num                          :  %d", num);
    printf("\nThe value of num without typecasting (f)  :  %f", num);
    printf("\nThe value of num with typecasting (f)     :  %f", (float)num);
    printf("\nThe value of num without typecasting (c)  :  %c", num);
    printf("\nThe value of num with typecasting (c)     :  %c", (char)num);
    printf("\nThe value of dec                          :  %d", dec);
    printf("\nThe value of dec without typecasting (d)  :  %d", dec);
    printf("\nThe value of dec with typecasting (d)     :  %d", (int)dec);
    printf("\nThe value of dec without typecasting (c)  :  %d", dec);
    printf("\nThe value of dec with typecasting (c)     :  %d", (char)dec);
    printf("\nThe value of chr                          :  %d", chr);
    printf("\nThe value of chr without typecasting (f)  :  %d", chr);
    printf("\nThe value of chr with typecasting (f)     :  %d", (float)chr);
    printf("\nThe value of chr without typecasting (d)  :  %d", chr);
    printf("\nThe value of chr with typecasting (d)     :  %d", (int)chr);

    return 0;
}
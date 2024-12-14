// If else statements perform operation based on some conditions;
// Types of If STatements;
// If Statements
// If Else Statements
// If nested Statements
// IF Else nested Statements
// IF Else ladder Statements

#include <stdio.h>

int main(){
    int age;
    int numb = 25, cmp1 = 10, cmp2 = 6, cmp3 = 20;

    printf("\nEnter your age:  ");
    scanf("%d", &age);

    // If statements: Divisible by 2
    if (numb%2 == 0) // Condition here, In statement only one line available then no need to brackets
        printf("\nGiven number is divisible by 2...");
    
    // If Else statements: Check Odd or Eved
    if (numb%2 == 0) // Condition here, In statement only one line available then no need to brackets
        printf("\nGiven number is Even...");
    else
        printf("\nGiven number is Odd...");
    
    // If Else ladder statements: Check Vote
    if (age == 17) // Condition here, In statement only one line available then no need to brackets
        printf("\nYour can vote after 1 year...");
    else if(age > 17)
        printf("\nYou can vote...");
    else
        printf("\nYou cannot vote...");

    // If Else nested statements: Check Vote
    if (cmp1 > cmp2) // Condition here;
        if (cmp1 > cmp3)
            printf("\n%d is greater than %d nad %d...", cmp1, cmp2, cmp3);
        else
            printf("\n%d is greater than %d nad %d...", cmp3, cmp1, cmp2);
    else
        if (cmp2 > cmp3)
            printf("\n%d is greater than %d nad %d...", cmp2, cmp1, cmp3);
        else
            printf("\n%d is greater than %d nad %d...", cmp3, cmp1, cmp2);
    

    return 0;
}

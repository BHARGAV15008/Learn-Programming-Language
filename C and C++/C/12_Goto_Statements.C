// Goto statement known as jump statement;
// Used to transfer predefined label;
// Mainly avoiding to use this statements;
// Goto mainly used to terminate multiple loop with single statement;

#include <stdio.h>

int main(){
    int num;

    printf("\nOuter code frome label...");
    // Goto statement implement with basic
    start:
        printf("\nThis starting label...");
        goto end;
    goto start;

    // Goto statement implement with Loops
    printf("\nEnter your number:  ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("\nOuter loop Updated number is %d ...", i);
        for (int j = 1; j < num/2; j++){
            printf("\nOuter loop Updated number is %d ...", j);
            if (j*j == i)
                goto end;
        }
    }
    
    end:
        printf("\nThis is End label...\n");        

    return 0;
}
// Break and Continue statements are used with loops and control statements;
// Break statements used to exit loop and terminate remain execution in any blocks;
// Continue statement used to skip some statements;
// Continue statement used to skip remaining iteration in loop;


#include <stdio.h>

int main(){
    int num, br, cnt;

    printf("\nEnter your number: ");
    scanf("%d", &num);

    printf("\nEnter your number where you break the loop: ");
    scanf("%d", &br);

    printf("\nEnter your number where you skip the loop: ");
    scanf("%d", &cnt);

    // Implement Continue statement
    for (int i = 0; i < num; i++){
        printf("\nUpdate number is %d ...", i);
        if(i == br){
            printf("\nBreak the loop\n");
            break;
        }
    }

    // Implement break statement
    for (int i = 0; i < num; i++){
        if(i == cnt){
            printf("\nSkip the loop\n");
            continue;
        }
        printf("\nUpdate number is %d ...", i);
    }    

    return 0;
}
// Do while loop execute atleast once;
// At end of the do while loop check the condition;
// It is known as Exit Control loop;

#include <stdio.h>

int main(){
    int numb, index = 0;
    printf("\nEnter your number: ");
    scanf("%d", &numb);
    
    // Print number 1 to given number in reverse order
    do{
        printf("\nUpdate Number is  %d", numb);
        numb--;
        index++;
    } while (numb != 0);

    printf("\n\nLoops running %d times...", index);
    
    return 0;
}
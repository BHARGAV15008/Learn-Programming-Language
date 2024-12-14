// At start of the while loop check the condition;
// It is known as Entry Control loop;

#include <stdio.h>

int main(){
    int numb, index = 0;
    printf("\nEnter your number: ");
    scanf("%d", &numb);

    // Print number 1 to given number in reverse order
    while (numb != 0){
        printf("\nUpdate Number is  %d", numb);
        numb--;
        index++;
    }

    printf("\n\nLoops running %d times...", index);
    
    return 0;
}
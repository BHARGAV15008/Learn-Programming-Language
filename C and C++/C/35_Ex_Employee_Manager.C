// For 3 employee;
// Dynamic Allocation;
// Manager employee records
// ID any length
// Take input employee id and display it on screen;

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int chars, i = 0;
    char *ptr;

    while (i < 3) {
        printf("\nEnter the number of character in employee Id: ");
        scanf("%d", &chars);

        ptr = (char*) malloc((chars+1) * sizeof(char));  // Memory allocation to employee id;
        printf("\nEnter your employee Id: ");
        scanf("%s", ptr);

        printf("\n\nYour Employee Id is %s", ptr);
        free(ptr);

        i++;
    }
    
    return 0;
}
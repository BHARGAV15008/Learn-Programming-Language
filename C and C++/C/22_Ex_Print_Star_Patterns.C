// Exercise Star patterns
/*
-----  Take in put from users and draw star pattern  -----
            1. Traingular star pattern;
            2. Reverse Traingular star pattern;
*/

#include <stdio.h>

// Traingular Star Pattern;
void starPattern (int rows){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }
}

// Reverse Traingular Star Pattern;
void reverseStarPattern (int rows){
    for (int i = rows; i > 0; i--){
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }
}

int main (){
    int choice, n;

    printf("\nEnter your choice: ");
    printf("\n\t 1. Traingular star pattern");
    printf("\n\t 2. Reverse Traingular star pattern\n");
    scanf("%d", &choice);

    printf("\nHow many rows you want: ");
    scanf("%d", &n);

    switch (choice){
        case 1:
            starPattern(n);
            break;

        case 2:
            reverseStarPattern(n);
            break;
    
        default:
            goto end;
            break;
    }

    end:
    return 0;
}
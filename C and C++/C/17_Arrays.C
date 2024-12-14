// Array stored multiple data at same time of same type;
// It's stored item in continous order;
// It is derived datatype;
// It stored data in one-dimension, two-dimension, so on...
// Some texts in 1D are Vectors, 2D are matrices;
// Used to reduced multiple variable declaration;
// Element accessed by using indexing;
// By using base address and index we have o find elements and address of the elements; 

#include <stdio.h>

int main (){
    // // // 1D Array:
    // // Array declaration;
    // int marks[10];
    // // Array declaration with initialisation;
    // int std[10] = {2, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // // Initialisation value - Case I: by index;
    // marks[0] = 56;
    // marks[1] = 65;
    // marks[2] = 50;
    // marks[3] = 96;
    // marks[4] = 47;
    // marks[5] = 56;
    // marks[6] = 00;
    // marks[7] = 56;
    // marks[8] = 58;
    // marks[9] = 58;

    // printf("\nPrint particular value by index: %d\n", marks[5]);\
    // for (int i = 0; i < 10; i++)
    //     printf("\nPrint all elements by loop: %d", marks[i]);


    // // Case II: Take value from user;
    // printf("\nEnter your marks here: \n");
    // for (int i = 0; i < 10; i++)
    //     scanf("%d", &marks[i]);
    // // Print elements;
    // for (int i = 0; i < 10; i++)
    //     printf("\nPrint all elements by loop: %d", marks[i]);

    // // 2D Array:
    printf("\n\n");
    int std_marks[2][10] = {{2, 4, 5, 6, 7, 8, 9, 10, 11, 12},
                     {56, 65, 50, 96, 47, 56, 90, 56, 58, 58}};
    
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 10; j++)
            printf("Value in 2D array is %d at position [%d][%d]...\n", std_marks[i][j], i, j);

    printf("\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 10; j++)
            printf("%d\t", std_marks[i][j]);
        
        printf("\n");
    }

    return 0;
}
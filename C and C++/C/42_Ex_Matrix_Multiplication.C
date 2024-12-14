// Matrix Multiplication;
// Row multiply with column;
// Check dimensional;
// Take input to the users matrix;

#include <stdio.h>

int main (){
    int row1, row2, col1, col2;
    int mat1[5][5], mat2[5][5], mat_mul[5][5];

    printf("Enter your Marix 1 Dimensions: ");  // Take input of matrix 1 dimensions;
    scanf("%d %d", &row1, &col1);

    printf("Enter your Marix 2 Dimensions: ");  // Take input of matrix 2 dimensions;
    scanf("%d %d", &row2, &col2);
    
    printf("\nEnter your Matrix 1: \n");   // Take input of matrix 1 elements;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            scanf("%d", &mat1[i][j]);

    printf("\nEnter your Matrix 2: \n");   // Take input of matrix 1 elements;
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col2; j++)
            for (int k = 0; k < col1; k++)
                mat_mul[i][j] = mat1[i][k] * mat2[k][j];

    if ((row1 != col2) && (row2 != col1)){
        printf("\nWe cannot multiply those of matrix, due to dimension miss matched...");
        goto end;
    }

    printf("\nResultant Matrix (Matrix_1 x Matrix_2)is: \n");   // Print resutant matrix;
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++)
            printf("%d\t", mat_mul[i][j]);
        printf("\n");
    }

    end:
    
    return 0;
}
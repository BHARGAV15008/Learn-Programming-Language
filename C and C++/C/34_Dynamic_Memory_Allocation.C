/* 
------  Dynamicmemory allocation perform by using some function like  ------
        * Malloc : 
            - Stands for memory allocation;
            - It reserve memory block according available size;
            - Memory is insufficient then it returns NULL;
            - It is the space Initialised is garbage value;
            - Syntax: ptr = (ptr-type*) malloc(size_in_bytes);
        
        * Calloc : 
            - Stands for Contiguous Allocation;
            - It also reserve memory block;
            - Also it return Void pointer;
            - It is the space Initialised with 0;
            - Syntax: ptr = (ptr-type*) calloc(n, size_in_bytes);

        * Realloc :
            - Stands for Reallocation;
            - During dynamic allocation memory is insufficient then we can change the size of memory by using realloc;
            - Syntax: ptr = (ptr-type*) realloc(ptr, new_size_in_bytes);

        * Free : 
            - It is used to gfree the allocation memory;
            - If the dynamically allocated memory is not required, then we can free it;
            - THis free memory used by another programs;
            - SYntax: free(ptr);
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    // Used of malloc;
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int));

    printf("\nEnter the five element: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &ptr[i]);

    printf("\n");
    for (int i = 0; i < 6; i++)
        printf("\nValue at position %d is %d",i, ptr[i]);


    // Used of calloc;
    int *ptr1;
    ptr1 = (int*) calloc(5, sizeof(int));

    printf("\nEnter the five element: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &ptr1[i]);

    printf("\n");
    for (int i = 0; i < 6; i++)
        printf("\nValue at position %d is %d",i, ptr1[i]);


    // Used of realloc;
    ptr1 = (int*) realloc(ptr1, 4 * sizeof(int));

    printf("\nEnter the five element: ");
    for (int i = 0; i < 4; i++)
        scanf("%d", &ptr1[i]);

    printf("\n");
    for (int i = 0; i < 4; i++)
        printf("\nValue at position %d is %d",i, ptr1[i]);

    
    // Used of free;
    free(ptr);
    free(ptr1);

    return 0;
}

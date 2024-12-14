// When you requested memory and you not used this memory and forgot to release the memory;
// This problem cause memory leak;
// Lot of memory used and after at time memory was crashed this called memory leak;

#include <stdio.h>
#include <stdlib.h>

// After this code run you watch or observe task manager;

int main (){
    int i = 0;
    int *i2;
    while (i < 4050) {
        printf("Welcome to C programming Tutorial...\n");
        i2 = (int *) malloc(50000 * sizeof(int));
        if (i % 100 == 0)
            getchar();
        i++;
    }
    free(i2); // if this line is unavailabel;
    
    
    return 0;
}
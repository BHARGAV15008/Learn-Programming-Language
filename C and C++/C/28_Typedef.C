// Typedef is keyword used to gives alias to any larger name
// typedef <original name> <aliased name>;imain

#include <stdio.h>

typedef struct Employee {
    int id = 34;
    char name[6] = "Hello";
    float marks = 85.5;
} emp;
// Now we use emp insteed of struct Employee
emp emp1;

int main (){
    
    typedef unsigned long ul;
    ul l1 = 34, l2;

    printf("\nvalue of l1 is %u", l1);
    printf("\nvalue of emp1.id is %d", emp1.id);
    printf("\nvalue of emp1.name is %s", emp1.name);
    printf("\nvalue of emp1.marks is %f", emp1.marks);
    return 0;
}
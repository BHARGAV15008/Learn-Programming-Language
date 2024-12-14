// Simillar to structure;
// It is also user define data type;
// It used single shared memory data member;
// Union size define by their largest store data member;
// In union we define multiple variable but store any variable's value one at a time;

#include <stdio.h>
#include <string.h>

// union define same as struct define
union student{
    int roll_no;    // Int takes 4 bytes of memory;
    char name[10];  // char 1*10 bytes of memory;
}; // In between char and int largest 10 bytes then union reserve 10 bytes;
typedef union student ust;

int main (){
    ust stu1;
    strcpy(stu1.name, "Rohan");
    printf("\nName of student 1 is %s", stu1.name);

    stu1.roll_no = 34;
    printf("\nName of student 1 is %d", stu1.name);
    printf("\nName of student 1 is %s", stu1.name);
    printf("\nRoll number of student 1 is %d", stu1.roll_no);

    return 0;
}
// Struct is user define datat type;
// Struct allows store multi data of different data types;
// Let example: Employee data we store- employeeId, emailId, Name, MobileNumber;
// This type of data we easily managed and stored by using structures;
// We initialised structure data:
//  1. By using struct operator;
//  2. During variable define;
//  3. In struct initialised;

#include <stdio.h>
#include <string.h>

// We can define structure in two types:
// Case I: Declare struct variable separetely;
struct Employee {
    int id;
    char name[10];
    float marks;
};

struct Employee emp1;

// Case I: Declare struct variable with struct defination;
struct Student {
    int id = 012;   // Initialise variable during structure define;
    char name[10];
    float marks;
} stu1;

int main (){
    // Variable initialised during variable define;
    emp1 = {102, "Abhishek", 86};
    struct Employee emp2 = {100, "Atul", 89};

    // Variable initialised by using struct operator;
    strcpy(stu1.name, "Vikas");
    stu1.marks = 85;

    // Print the value using struct operator;
    printf("\nName of emp1 is %s", emp1.name);
    printf("\nName of emp2 is %s", emp2.name);
    printf("\nId of emp1 is %d", emp1.id);
    printf("\nId of emp2 is %d", emp2.id);
    printf("\nMarks of emp1 is %f", emp1.marks);
    printf("\nMarks of emp2 is %f", emp2.marks);
    printf("\nName of stu1 is %s", stu1.name);
    printf("\nId of stu1 is %d", stu1.id);
    printf("\nMarks of stu1 is %f", stu1.marks);

    return 0;
}
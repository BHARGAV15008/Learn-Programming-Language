// Switch case alternative of most likely if else ladder;
// Switch case is mostly used in finding match parameter;
// Rules in Switch:
// Switch expression must be in int or char (comparable)
// case value shold be int or char;
// case have same datatype as switch expression;
#include <stdio.h>

int main(){
    int day, cla, marks;

    printf("Enter number of day: ");
    scanf("%d", &day);

    // Simple Switch case: Day with name and number
    switch (day){
        case 0:
            printf("\nThat's Sunday...");
            break;
        
        case 1:
            printf("\nThat's MOnday...");
            break;
        
        case 2:
            printf("\nThat's Tuesday...");
            break;
        
        case 3:
            printf("\nThat's Wednesday...");
            break;
        
        case 4:
            printf("\nThat's Thursday...");
            break;
        
        case 5:
            printf("\nThat's Friday...");
            break;
        
        case 6:
            printf("\nThat's Saturday...");
            break;
        
        default:
            printf("\nThere is no any Match found...");
            break;
    }

    // Nested Switch case: check marks and class
    printf("\n\nEnter your class and marks:  ");
    scanf("%d %d", &cla, &marks);
    
    switch (cla){
        case 10:
            switch (marks){
                case 80:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                case 85:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                case 90:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                case 95:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                case 100:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                
                default:
                    printf("\nThey got less than 80 marks in class %d", cla);
                    break;
                }
            break;
        
        case 12:
            switch (marks){
                case 80:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                case 85:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                case 90:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                case 95:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                case 100:
                    printf("\nThey got %d marks in class %d", marks, cla);
                    break;
                
                default:
                    printf("\nThey got less than 80 marks in class %d", cla);
                    break;
                }
            break;
        
        default:
            break;
    }

    return 0;
}
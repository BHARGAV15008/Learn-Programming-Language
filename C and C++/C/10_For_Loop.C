// At start of the for loop check the condition;
// It is quite differ than while and do while loops;
// Mainly used for traversing data structures;
// Expression 1 Optional or initialization;
// Expression 2 Condition or Optional;
// In expression 2 has multiple statements but take last as condition statements;
// Expression 3 optional or Update loop variables;

#include <stdio.h>

int main(){
    int numb, index = 0;
    printf("\nEnter your number: ");
    scanf("%d", &numb);

    // Print number 1 to given number in order by single variable
    for (int i = 0; i <= numb; i++){
        printf("\nUpdate Number is  %d", i);
        if (i == numb)
            index = i+1;
    }
    printf("\nLoops running %d times...\n", index);

    // Print number 1 to given number in order by two variable
    for (int i = 0, j = 0; i <= numb; i++, j+=2){
        printf("\nUpdate Number is  %d ... %d", i, j);
        if (i == numb)
            index = i+1;
    }
    printf("\nLoops running %d times...\n", index);

    // Print number 1 to given number in order by Optional field leave as empty
    // Case I : Initialization field leave empty;
    int i = 0;
    for (; i <= numb; i++){
        printf("\nCase I:  Update Number is  %d", i);
        if (i == numb)
            index = i+1;
    }
    printf("\nLoops running %d times...\n", index);

    // Case II : Condition field leave empty;
    for (int i = 0; ; i++){
        printf("\nCase II:  Update Number is  %d", i);
        if (i == numb){
            index = i+1;
            break;
        }
    }
    printf("\nLoops running %d times...\n", index);

    // Case III : Updation field leave empty;
    for (int i = 0; i <= numb;){
        printf("\nCase III:  Update Number is  %d", i);
        if (i == numb)
            index = i+1;
        i++;
    }
    printf("\nLoops running %d times...\n", index);

    // Case IV : Second statement in condition field take as main condition;
    index = 0;
    for (int i = 0; i <= numb, i <= numb*2; i+=2){
        printf("\nCase IV:  Update Number is  %d", i);
        index++;
    }
    printf("\nLoops running %d times...\n", index);
    
    return 0;
}
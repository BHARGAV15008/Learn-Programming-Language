// String is not supported datatype in C;
// But string define or create using char data type;
// String array can terminated by null character like '\0';
// TO stored string we create array of character datatype;

#include <stdio.h>


int main (){

    // By user we take input string in two ways:
    char str1[10], str2[5];

    // initiallised string;
    char str3[] = "Hello everybody";   //or
    char str4[] = {'a', 'b', 'c', 'd', '\0'};

    // Print string:
    // Case I: By for loops
    printf("\nCase I: \n");
    for (int i = 0; i < sizeof(str4); i++)
        printf("%c", str4[i]);

    // Case II: Print string directly
    printf("\n\nCase II:  \nSttring is %s", str3);

    // Case III: Take input using gets
    printf("\n\nEnter your string : ");
    gets(str1);
    printf("\n\nCase III:  \nSttring is %s", str1);

    // Case IV: Take input using scanf and print using puts
    printf("\n\nEnter your string : ");
    scanf("%s", str2);
    printf("\n\nCase IV:  \nSttring is ");
    puts(str2);

    printf("\n\nEnter your string : ");
    for (int i = 0; i < sizeof(str2); i++)
        scanf("%c", &str2[i]);
    printf("\n\nCase IV:  \nSttring is ");
    puts(str2);

    return 0;
}
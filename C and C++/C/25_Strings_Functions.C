// Using string library's function;
/*
    * strcat(): Used to concatinate two strings;
    * strlen(): Returns the length of the strigs;
    * strrev(): Reverse the string;
    * strcpy(): Copy string to other variable;
    * strcmp(): Compare two string;
*/

#include <stdio.h>
#include <string.h>

int main (){
    char str1[] = "parmar ";
    char str2[] = "smit";
    char cpy_str[10];

    printf("\nString 1 is %s", str1);
    printf("\nString 2 is %s", str2);
    printf("\nLength of String 2 is %d", strlen(str2));
    printf("\nString 1 and string 2 concat is %s", strcat(str1, str2));
    printf("\nString 1 is reverse %s", strrev(str1));
    strcpy(cpy_str, strcat(str1, str2));
    printf("\nString 3 copy of string 1 and string 2 is %s", cpy_str);
    printf("\nString 1 and string 2 compare is %d", strcmp(str1, str2));

    return 0;
}
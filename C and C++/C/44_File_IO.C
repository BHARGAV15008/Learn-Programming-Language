// File is used to store data and information;
// Files helps to user to read and write data to hard disk any time;
// When C program is terminate then Ram is lost;
/*
-----   There is two types of files   -----
    * Binary files
    * Text files

-----   Function in Files IO   -----
    * Creating FILE pointer;
    * fopen(): This function helps to open files in our code;
    * fclose(): This function helps to close open file in code;
    * fscanf(): This function helps to read data from files;
    * fprintf(): This function helps to write data to files;
*/

#include <stdio.h>

int main (){
    FILE *ptr = NULL;
    char str[50] = "This code is belongs to @leafTech Company\n";

    // // Reading a file;
    // ptr = fopen("44_file.txt", "r");
    // fscanf(ptr, "%s", str);
    // printf("\n%s", str);

    // Write to the file;
    // ptr = fopen("44_file.txt", "w");
    ptr = fopen("44_file.txt", "a");
    fprintf(ptr, "%s", str);

    fclose(ptr);
    return 0;
}
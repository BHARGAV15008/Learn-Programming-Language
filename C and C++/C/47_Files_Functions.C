// More on file I/O in C;
/*
-----   Mode and Description   -----
    * r - Open existing files for reading;
    * w - Open existing files or Creating new files for reading and writing begining of the files;
    * a - Open existing files or create file for appending last to content;
    * r+ - Open existing files for reading and writing;
    * w+ - Open existing files for reading and writing but first truncate the files;
    * a+ - Open existing files or create file for reading and writing end of the content;

-----   Some function in FILE   -----
    * fputc :
        - If fails then return EOF;
        - Write character in to the files;

    * fputs :
        - If fails then return EOF;
        - Write string in to the files;

    * fgetc :
        - If fails then return EOF;
        - To read character from the files;

    * fgets :
        - If fails then return EOF;
        - To read string from the files;
*/

#include <stdio.h>

int main (){
    FILE *fptr = NULL;  // Create file pointer;
    char str[20], ch;

    fptr = fopen("44_file.txt", "a");

    // Implement file function;
    ch = fgetc(fptr);  // fgetc()
    printf("\nThe character of file is %c", ch);
    ch = fgetc(fptr);
    printf("\nThe character of file is %c", ch);
    
    fgets(str, 10, fptr);  // fgets()
    printf("\nThe string of file is %s",str);
    fgets(str, 10, fptr);
    printf("\nThe string of file is %s",str);

    fputc('\n', fptr);  // fputc()
    fputc('B', fptr);
    
    fputs("\n", fptr);  // fputs()
    fputs("Hello Bodys...", fptr);

    fclose(fptr);
    return 0;
}
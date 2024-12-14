// Sometimes we need to pass arguments from the command line to the program a set of inputs;
// Command line arguments sre used to supply parameters to the program when it is invoked;
// It is mostly used you need control code from the console;
// ARGC is number of arguments;
// ARGV is set of arguments;

#include <stdio.h>

int main(int argc, char const *argv[]) {

    printf("Value of ARGC is %d", argc);
    for (int i = 0; i < argc; i++)
        printf("\nValue at arg position %d --> %s", i, argv[i]);
    
    return 0;
}

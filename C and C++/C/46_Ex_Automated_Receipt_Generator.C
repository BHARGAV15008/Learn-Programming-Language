// Fill the template letter.txt
// Like: Thanks {{Name}} for purchasing {{item}} from our outlet {{outlet}}.
// Please visit our outlet {{outlet}} for any kind of problems.
// We plan to serve you again soon.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord (const char *str, const char *oldWord, const char *newWord) {
    // Replacing word code is here;
    char *newStr;
    int i, count = 0;
    int newWordLen = strlen(newWord);
    int oldWordLen = strlen(oldWord);

    for (i = 0; str[i] != '\0'; i++){
        if(strstr(&str[i], oldWord) == &str[i]){
            count++;
            // Jump the word;
            i += (oldWordLen -1);
        }
    }

    // Making new word to fit in the replace words;
    newStr = (char *) malloc(i * count * (newWordLen - oldWordLen) + 1);
    i = 0; // reuse i variable;

    while (*str) {
        // Compare the substring with newStr;
        if(strstr(&newStr[i], newWord)) {
            strcpy(&newStr[i], newWord);
            i += newWordLen;
            str += oldWordLen;
        } else {
            newStr[i] = *str;
            i++;
            str++;
        }
    }
    newStr[i] = '\0';
    return newStr;
}

int main (){
    FILE *fptr = NULL;
    FILE *fptrgen = NULL;
    fptr = fopen("Bill.txt", "r");  // Create bill text file;
    fptrgen = fopen("genBill.txt", "w");  // Create bill text file;
    char str[200];
    fgets(str, 200, fptr);

    printf("\nThe given bill template: \n%s", str);

    // // Call the replace function;
    char *newStr;
    newStr = replaceWord(str, "{{outlet}}", "JB Electronics");
    newStr = replaceWord(newStr, "{{name}}", "Rakesh");
    newStr = replaceWord(newStr, "{{item}}", "Table Lamp");
    printf("\nThe new bill template: \n%s", str);
    fprintf(fptrgen, "%s", newStr);

    fclose(fptr);
    fclose(fptrgen);
    
    return 0;
}
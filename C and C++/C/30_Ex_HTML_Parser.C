// Create HTML parser;
// User gives input html code and gives parse the tag output;

#include <stdio.h>

void htmlParser (char *str, int size) {
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (str[i] == '<'){
            while(str[i] != '>'){
                i++;
                continue;
            }
            continue;
        }
        else{
            str[j] = str[i];
            j++; 
        }       
    }
    str[j] = '\0';
}

int main (){
    char html[20];

    printf("\nEnter your html code here: \n");
    gets(html);

    htmlParser(html, sizeof(html));
    printf("\nYour parse code is that: %s", html);
    
    return 0;
}
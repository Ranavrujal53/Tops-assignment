#include <stdio.h>

int main() {
    char str[200];
    int i = 0, wordCount = 0;
    int inWord = 0;  

    printf("Enter a string: ");
    gets(str);  

    while(str[i] != '\0') {
        
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if(inWord == 0) {
                wordCount++;  
                inWord = 1;
            }
        } else {
            inWord = 0;  
        }
        i++;
    }

    printf("Number of words: %d\n", wordCount);

    return 0;
}


#include <stdio.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, words = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);  

    while (1) {
        char ch = sentence[i];

        
        if (ch != ' ' && ch != '\0') {
            word[j] = ch;
            j++;
        } else {
            if (j > 0) {  
                word[j] = '\0';
                words++;

                if (j > maxLen) {
                    maxLen = j;
                    int k;
                    for (k = 0; k <= j; k++)
                        longest[k] = word[k]; 
                }
                j = 0; 
            }
        }

        if (ch == '\0') 
            break;

        i++;
    }

    printf("\nNumber of words: %d", words);
    printf("\nLongest word: %s\n", longest);

    return 0;
}


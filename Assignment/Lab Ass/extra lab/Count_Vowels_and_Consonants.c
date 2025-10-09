#include <stdio.h>

int main() {
    char str[100];
    int i;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read full line including spaces

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Special characters
        else {
            special++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d\n", special);

    return 0;
}


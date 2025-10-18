#include <stdio.h>
#include <math.h>

// Function to count digits
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n = n / 10;
    }
    return count;
}

// Function to check Armstrong number
int isArmstrong(int num) {
    int numcopy = num, rem, pow1, sum = 0;
    pow1 = countDigits(num);

    while (num != 0) {
        rem = num % 10;
        sum = sum + pow(rem, pow1);
        num = num / 10;
    }

    return (sum == numcopy);
}

// Function to check if a number is even Armstrong
void checkEvenArmstrong(int num) {
    if (num % 2 == 0) {   // only even numbers
        if (isArmstrong(num))
            printf("%d is an EVEN ARMSTRONG number.\n", num);
        else
            printf("%d is EVEN but NOT an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an even number.\n", num);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenArmstrong(num);

    return 0;
}


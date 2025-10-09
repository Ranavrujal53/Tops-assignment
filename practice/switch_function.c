#include <stdio.h>

// Function declarations
void areaOfCircle();
void simpleInterest();
void checkPrime();
void fibonacciSeries();

int main() {
    int choice;

    printf("===== MENU =====\n");
    printf("1. Area of Circle\n");
    printf("2. Simple Interest\n");
    printf("3. Prime Number Check\n");
    printf("4. Fibonacci Series\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            areaOfCircle();
            break;
        case 2:
            simpleInterest();
            break;
        case 3:
            checkPrime();
            break;
        case 4:
            fibonacciSeries();
            break;
        case 5:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please enter 1-5.\n");
    }

    return 0;
}

// Function definitions

// 1. Area of Circle
void areaOfCircle() {
    const float PI = 3.14;
    float r, area;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of Circle = %.2f\n", area);
}

// 2. Simple Interest
void simpleInterest() {
    float p, r, t, si;
    printf("Enter Principal, Rate of Interest, and Time: ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %.2f\n", si);
}

// 3. Prime Number Check
void checkPrime() {
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

// 4. Fibonacci Series
void fibonacciSeries() {
    int n, first = 0, second = 1, next, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}


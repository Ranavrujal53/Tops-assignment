#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculator using only ternary operators
    (op == '+') ? printf("%d + %d = %d\n", num1, num2, num1 + num2) :
    (op == '-') ? printf("%d - %d = %d\n", num1, num2, num1 - num2) :
    (op == '*') ? printf("%d * %d = %d\n", num1, num2, num1 * num2) :
    (op == '/' && num2 != 0) ? printf("%d / %d = %d\n", num1, num2, num1 / num2) :
    (op == '/' && num2 == 0) ? printf("Error: Division by zero not allowed!\n") :
    (op == '%' && num2 != 0) ? printf("%d %% %d = %d\n", num1, num2, num1 % num2) :
    (op == '%' && num2 == 0) ? printf("Error: Modulus by zero not allowed!\n") :
    printf("Error: Invalid operator '%c'\n", op);

    return 0;
}


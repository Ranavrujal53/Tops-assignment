#include <stdio.h>

// Function declarations
float areaOfCircle(float radius);
float areaOfRectangle(float length, float width);
float areaOfSquare(float side);

int main() {
    int choice;
    float r, l, w, s, area;

    printf("===== AREA CALCULATOR =====\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Square\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &r);
            area = areaOfCircle(r);
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter length and width of rectangle: ");
            scanf("%f %f", &l, &w);
            area = areaOfRectangle(l, w);
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter side of square: ");
            scanf("%f", &s);
            area = areaOfSquare(s);
            printf("Area of Square = %.2f\n", area);
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Please enter 1-4.\n");
    }

    return 0;
}

// Function definitions
float areaOfCircle(float radius) {
    const float PI = 3.1416;   // use datatype constant instead of #define
    return PI * radius * radius;
}

float areaOfRectangle(float length, float width) {
    return length * width;
}

float areaOfSquare(float side) {
    return side * side;
}


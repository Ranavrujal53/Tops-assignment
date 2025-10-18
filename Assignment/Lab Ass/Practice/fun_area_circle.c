#include <stdio.h>

float areaOfCircle(float radius);

int main() {
    const float PI = 3.1416;  // constant variable
    float r, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area = areaOfCircle(r);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}

float areaOfCircle(float radius) {
    const float PI = 3.1416; // you can also define inside function
    return PI * radius * radius;
}


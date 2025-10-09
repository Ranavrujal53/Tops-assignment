#include <stdio.h>

main() 
{
    int length, widht, side;
    int rectArea, squareArea;

    // Rectangle
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &widht);

    rectArea = length * widht;
    printf("Area of Rectangle = %d\n", rectArea);

    // Square
    printf("Enter side of square: ");
    scanf("%d", &side);

    squareArea = side * side;
    printf("Area of Square = %d\n", squareArea);

    return 0;
}


/*
in simple code

#include <stdio.h>

int main() {
    int l, b, s;

    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    printf("Area of Rectangle = %d\n", l * b);

    printf("Enter side of square: ");
    scanf("%d", &s);
    printf("Area of Square = %d\n", s * s);

    return 0;
}

*/

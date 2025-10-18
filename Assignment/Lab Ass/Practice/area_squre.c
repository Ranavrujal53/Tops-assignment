#include <stdio.h>

 main() 
 {
    int side, squre;
    printf("Enter side of square: ");
    scanf("%d", &side);
    
    squre = side * side;

    printf("Area of Square = %d\n", squre);
    return 0;
}


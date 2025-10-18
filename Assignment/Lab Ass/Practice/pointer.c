#include <stdio.h>

int main() {
    int a = 10;       
    int *ptr;         

    ptr = &a;         

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value stored in ptr (address of a): %p\n", ptr);
    printf("Value pointed to by ptr (*ptr): %d\n", *ptr);

    return 0;
}


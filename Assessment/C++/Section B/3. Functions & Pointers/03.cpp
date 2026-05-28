#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "\nBefore Swapping:";
    cout << "\nX = " << x;
    cout << "\nY = " << y;

    swapNumbers(&x, &y);

    cout << "\n\nAfter Swapping:";
    cout << "\nX = " << x;
    cout << "\nY = " << y;

    return 0;
}

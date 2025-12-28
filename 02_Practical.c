#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display numbers before swap
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap logic using temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display numbers after swap
    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}

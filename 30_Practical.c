#include <stdio.h>

// Function to swap two numbers using call by reference
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display numbers before swap
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Call swap function
    swap(&num1, &num2);

    // Display numbers after swap
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

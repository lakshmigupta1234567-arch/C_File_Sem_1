#include <stdio.h>

// Function to find maximum using pointers
int findMax(int *a, int *b) {
    if(*a > *b)
        return *a;
    else
        return *b;
}

int main() {
    int num1, num2, max;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call function and find maximum
    max = findMax(&num1, &num2);

    // Display result
    printf("The maximum number is: %d\n", max);

    return 0;
}

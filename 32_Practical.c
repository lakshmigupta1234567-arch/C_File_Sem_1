#include <stdio.h>

// Function to perform arithmetic operations using call by reference
void calculate(float *num1, float *num2, float *sum, float *diff, float *prod, float *quot) {
    *sum = *num1 + *num2;
    *diff = *num1 - *num2;
    *prod = *num1 * *num2;
    if(*num2 != 0)
        *quot = *num1 / *num2;
    else
        *quot = 0; // Handle division by zero
}

int main() {
    float a, b;
    float sum, diff, prod, quot;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    // Call function
    calculate(&a, &b, &sum, &diff, &prod, &quot);

    // Display results
    printf("\nResults:\n");
    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", diff);
    printf("Multiplication: %.2f\n", prod);
    if(b != 0)
        printf("Division: %.2f\n", quot);
    else
        printf("Division: Undefined (division by zero)\n");

    return 0;
}

#include <stdio.h>

// Function to calculate factorial using call by reference
void factorial(int n, long long *result) {
    *result = 1;  // Initialize result
    for(int i = 1; i <= n; i++) {
        *result *= i;
    }
}

int main() {
    int num;
    long long fact;

    // Input number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call function
        factorial(num, &fact);

        // Display result
        printf("Factorial of %d is: %lld\n", num, fact);
    }

    return 0;
}

#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;  // Multiply each number up to n
    }
    return fact;
}

int main() {
    int num;
    long long result;

    // Input number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d is: %lld\n", num, result);
    }

    return 0;
}

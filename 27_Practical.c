#include <stdio.h>

// Function to calculate square
int square(int n) {
    return n * n;
}

int main() {
    int num, result;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call function to calculate square
    result = square(num);

    // Display result
    printf("Square of %d is: %d\n", num, result);

    return 0;
}

#include <stdio.h>

// Function to find the largest of three numbers
int largest(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    } else if(b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call function to find largest
    max = largest(num1, num2, num3);

    // Display result
    printf("The largest number is: %d\n", max);

    return 0;
}

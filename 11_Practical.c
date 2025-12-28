#include <stdio.h>

int main() {
    float num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Determine the largest using nested if-else
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {  // num2 > num1
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }

    // Display the result
    printf("The largest number is: %.2f\n", largest);

    return 0;
}

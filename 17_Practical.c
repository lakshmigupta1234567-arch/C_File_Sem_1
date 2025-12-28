#include <stdio.h>

int main() {
    int month;
    int days;

    // Input month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Determine number of days using switch
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; // For simplicity, not considering leap years
            break;
        default:
            days = 0;  // Invalid month
    }

    // Display result
    if (days != 0)
        printf("Month %d has %d days.\n", month, days);
    else
        printf("Invalid month number! Please enter 1-12.\n");

    return 0;
}

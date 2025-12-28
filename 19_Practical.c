#include <stdio.h>

int main() {
    float usage, total = 0.0;

    // Input electricity usage for 7 days
    for(int day = 1; day <= 7; day++) {
        printf("Enter electricity usage for day %d (in units): ", day);
        scanf("%f", &usage);
        total += usage;  // Add daily usage to total
    }

    // Display total weekly consumption
    printf("Total weekly electricity consumption: %.2f units\n", total);

    return 0;
}

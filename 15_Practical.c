#include <stdio.h>

int main() {
    char name[50];
    int units;
    float bill;

    // Input customer name and units consumed
    printf("Enter customer name: ");
    scanf("%[^\n]", name); // Read full name including spaces
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on units
    if (units <= 100) {
        bill = units * 1.5;          // Rate: 1.5 per unit
    } else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.5;  // First 100 at 1.5, next at 2.5
    } else if (units <= 300) {
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 3.5;  // Next slab at 3.5
    } else {
        bill = 100 * 1.5 + 100 * 2.5 + 100 * 3.5 + (units - 300) * 5.0; // Above 300 units at 5
    }

    // Display bill
    printf("\nCustomer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Electricity Bill: %.2f\n", bill);

    return 0;
}

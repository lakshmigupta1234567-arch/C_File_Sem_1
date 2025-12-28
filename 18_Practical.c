#include <stdio.h>

int main() {
    float price, total = 0.0;

    // Input prices of 5 items
    for(int i = 1; i <= 5; i++) {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price);
        total += price;  // Add price to total
    }

    // Display total bill
    printf("Total bill: %.2f\n", total);

    return 0;
}

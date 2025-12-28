#include <stdio.h>

int main() {
    int x, y;

    // Input value from user
    printf("Enter a number: ");
    scanf("%d", &x);

    // Pre-increment demonstration
    y = ++x + 5;  // x is incremented first, then added
    printf("\nAfter pre-increment (++x + 5):\n");
    printf("x = %d, y = %d\n", x, y);

    // Reset x for post-increment demonstration
    printf("\nEnter the number again for post-increment: ");
    scanf("%d", &x);

    // Post-increment demonstration
    y = x++ + 5;  // x is added first, then incremented
    printf("\nAfter post-increment (x++ + 5):\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

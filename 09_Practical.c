#include <stdio.h>

int main() {
    float balance;

    // Input initial balance
    printf("Enter initial bank balance: ");
    scanf("%f", &balance);

    // Apply interest (+10%)
    balance *= 1.10;  // balance = balance * 1.10
    printf("After applying 10%% interest: %.2f\n", balance);

    // Deduct charges (-50)
    balance -= 50;    // balance = balance - 50
    printf("After deducting charges of 50: %.2f\n", balance);

    // Add bonus (+100)
    balance += 100;   // balance = balance + 100
    printf("After adding bonus of 100: %.2f\n", balance);

    // Divide balance by 2 (e.g., split or share)
    balance /= 2;     // balance = balance / 2
    printf("After dividing balance by 2: %.2f\n", balance);

    return 0;
}

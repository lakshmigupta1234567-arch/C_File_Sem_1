#include <stdio.h>

int main() {
    float balance1, balance2;

    // Input two account balances
    printf("Enter first account balance: ");
    scanf("%f", &balance1);
    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    // Using relational operators to check conditions
    printf("\nAre the balances equal? %d\n", balance1 == balance2);
    printf("Is the first balance greater? %d\n", balance1 > balance2);
    printf("Is the second balance greater? %d\n", balance2 > balance1);

    return 0;
}

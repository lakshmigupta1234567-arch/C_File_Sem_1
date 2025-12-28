#include <stdio.h>

int main() {
    int choice, num, i;

    printf("Menu:\n1 → Print Multiplication Table\n0 → Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    while(choice != 0) {  // Loop until user chooses 0
        if(choice == 1) {
            printf("Enter a number to print its multiplication table: ");
            scanf("%d", &num);

            i = 1;
            while(i <= 10) {
                printf("%d x %d = %d\n", num, i, num*i);
                i++;
            }
        } else {
            printf("Invalid choice!\n");
        }

        // Show menu again
        printf("\nMenu:\n1 → Print Multiplication Table\n0 → Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    printf("Program exited.\n");
    return 0;
}

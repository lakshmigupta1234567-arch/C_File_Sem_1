#include <stdio.h>

int main() {
    int choice, num, i;

    do {
        printf("Menu:\n1 → Print Multiplication Table\n0 → Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter a number to print its multiplication table: ");
            scanf("%d", &num);

            for(i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", num, i, num*i);
            }
        } else if(choice != 0) {
            printf("Invalid choice!\n");
        }

    } while(choice != 0);

    printf("Program exited.\n");
    return 0;
}

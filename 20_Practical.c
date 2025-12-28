#include <stdio.h>

int main() {
    int age, count = 0;

    // Input ages of 10 employees
    for(int i = 1; i <= 10; i++) {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);

        // Check if age is 30 or older
        if(age >= 30) {
            count++;
        }
    }

    // Display result
    printf("Number of employees aged 30 or older: %d\n", count);

    return 0;
}

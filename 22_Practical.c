#include <stdio.h>

int main() {
    int attendance, totalPresent = 0;

    // Input attendance for 30 days
    for(int day = 1; day <= 30; day++) {
        printf("Enter attendance for day %d (1 for present, 0 for absent): ", day);
        scanf("%d", &attendance);

        // Add to total if student is present
        if(attendance == 1) {
            totalPresent++;
        }
    }

    // Display total present days
    printf("Total days present: %d\n", totalPresent);

    return 0;
}

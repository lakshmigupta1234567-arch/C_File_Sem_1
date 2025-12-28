#include <stdio.h>

int main() {
    int i, j;
    
    // (a) Rectangle 7 columns x 4 rows
    printf("Rectangle (7x4):\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 7; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // (b) Square 4x4
    printf("Square (4x4):\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 4; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // (c) Right-angle triangle 5x5
    printf("Right-angle Triangle (5x5):\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // (d) Reverse right-angle triangle 5x5
    printf("Reverse Right-angle Triangle (5x5):\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // (e) Central triangle (pyramid) 5 rows
    printf("Central Triangle (Pyramid 5 rows):\n");
    for(i = 1; i <= 5; i++) {
        // Print spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

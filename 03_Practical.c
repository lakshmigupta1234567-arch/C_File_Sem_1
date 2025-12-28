#include <stdio.h>

int main() {
    // Variable declaration and initialization
    int num = 10;
    float price = 99.99;
    char grade = 'A';
    double largeNum = 123456.789;

    // Display values and their sizes
    printf("Integer value: %d, Size: %zu bytes\n", num, sizeof(num));
    printf("Float value: %.2f, Size: %zu bytes\n", price, sizeof(price));
    printf("Char value: %c, Size: %zu bytes\n", grade, sizeof(grade));
    printf("Double value: %.3lf, Size: %zu bytes\n", largeNum, sizeof(largeNum));

    return 0;
}

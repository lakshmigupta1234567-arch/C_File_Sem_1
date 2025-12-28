#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input marks
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Determine grade using conditional logic
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 75) {
        grade = 'B';
    } else if (marks >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    // Display the grade
    printf("Grade: %c\n", grade);

    return 0;
}

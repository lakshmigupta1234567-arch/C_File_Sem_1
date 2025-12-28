#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int marks[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

// Function to determine grade based on average
char determineGrade(float average) {
    if(average >= 90)
        return 'A';
    else if(average >= 80)
        return 'B';
    else if(average >= 70)
        return 'C';
    else if(average >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int n, total;
    float average;
    
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    int marks[n];

    // Input marks
    for(int i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate total and average
    total = calculateTotal(marks, n);
    average = (float)total / n;

    // Display results
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", determineGrade(average));

    return 0;
}

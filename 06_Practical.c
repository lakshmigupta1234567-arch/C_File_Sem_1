#include <stdio.h>

int main() {
    // Declare variables
    char name[50];
    float basic, HRA, DA, gross, tax, net;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%[^\n]", name);  // Read full name including spaces
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    // Calculate allowances
    HRA = 0.20 * basic;  // House Rent Allowance = 20% of basic
    DA  = 0.10 * basic;  // Dearness Allowance = 10% of basic

    // Calculate gross salary
    gross = basic + HRA + DA;

    // Calculate income tax
    tax = 0.05 * gross;  // 5% of gross salary

    // Calculate net salary
    net = gross - tax;

    // Display results
    printf("\nEmployee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA (20%%): %.2f\n", HRA);
    printf("DA (10%%): %.2f\n", DA);
    printf("Gross Salary: %.2f\n", gross);
    printf("Income Tax (5%%): %.2f\n", tax);
    printf("Net Salary: %.2f\n", net);

    return 0;
}

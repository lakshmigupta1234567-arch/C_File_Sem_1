#include <stdio.h>
#include <math.h>

void calculateEMI() {
    float principal, annualRate, monthlyRate, emi, totalPayment, totalInterest;
    int years, months;

    printf("--- Loan EMI & Interest Calculator ---\n");
    
    // Input Section
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Annual Interest Rate (%%): ");
    scanf("%f", &annualRate);
    printf("Enter Tenure (in years): ");
    scanf("%d", &years);

    // Conversions
    months = years * 12;
    monthlyRate = annualRate / (12 * 100);

    // EMI Formula: [P x r x (1+r)^n] / [(1+r)^n - 1]
    emi = (principal * monthlyRate * pow(1 + monthlyRate, months)) / (pow(1 + monthlyRate, months) - 1);
    
    totalPayment = emi * months;
    totalInterest = totalPayment - principal;

    // Summary Output
    printf("\n--- Loan Summary ---\n");
    printf("Monthly EMI: %.2f\n", emi);
    printf("Total Interest Payable: %.2f\n", totalInterest);
    printf("Total Amount (Principal + Int): %.2f\n", totalPayment);

    // Tabulated Repayment Schedule
    printf("\n--- Repayment Schedule ---\n");
    printf("%-10s %-15s %-15s %-15s\n", "Month", "Interest", "Principal", "Balance");
    
    float balance = principal;
    for (int i = 1; i <= months; i++) {
        float mInterest = balance * monthlyRate;
        float mPrincipal = emi - mInterest;
        balance -= mPrincipal;

        // Correct minor floating point errors at the end
        if (balance < 0) balance = 0;

        printf("%-10d %-15.2f %-15.2f %-15.2f\n", i, mInterest, mPrincipal, balance);
    }
}

int main() {
    calculateEMI();
    return 0;
}
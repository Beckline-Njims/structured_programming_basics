#include <stdio.h>

int main() {
    double balance = 5000.00;
    double annualInterestRate = 0.18;
    double monthlyInterestRate = annualInterestRate / 12.0;
    double monthlyPayment;
    double epsilon = 0.01; // Error tolerance for balance remaining at the end of 12 months
    double tempBalance; // Declare the variable "tempBalance"

    // Iterate until we find the lowest monthly payment that pays off the debt
    for (monthlyPayment = 10.0; ; monthlyPayment += 10.0) {
        tempBalance = balance; // Initialize "tempBalance" with the initial balance

        // Simulate 12 months of payments and interest
        for (int month = 1; month <= 12; month++) {
            double monthlyUnpaidBalance = tempBalance - monthlyPayment;
            tempBalance = monthlyUnpaidBalance + (monthlyInterestRate * monthlyUnpaidBalance);
        }

        // Check if the balance is paid off within 12 months
        if (tempBalance <= epsilon) {
            break;
        }
    }

    printf("Lowest Payment: %.2f\n", monthlyPayment);

    return 0;
}
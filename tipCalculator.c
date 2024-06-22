#include <stdio.h>

int main() {
    // Declare variables
    double billAmount, tipPercentage, tipAmount, totalAmount;

    // Prompt the user for the bill amount
    printf("Enter the bill amount: ");
    scanf("%lf", &billAmount);  // %lf to read a double

    // Prompt the user for the tip percentage
    printf("Enter the tip percentage: ");
    scanf("%lf", &tipPercentage);  // %lf to read a double

    // Calculate the tip amount
    tipAmount = billAmount * (tipPercentage / 100);

    // Calculate the total amount (bill + tip)
    totalAmount = billAmount + tipAmount;

    // Display the results
    printf("Tip amount: $%.2f\n", tipAmount);  // %.2f to print with two decimal places
    printf("Total amount (including tip): $%.2f\n", totalAmount);  // %.2f to print with two decimal places

    return 0;
}

#include <stdio.h>

int main() {
    double amount, discount = 0.0, finalAmount;

    // Prompt the user to enter the amount spent
    printf("Enter the amount spent: $");
    scanf("%lf", &amount);

    // Calculate discount based on the amount spent
    if (amount >= 100) {
        discount = 0.10 * amount;  // Apply 10% discount
        if (amount >= 500) {
            discount += 0.05 * amount;  // Apply additional 5% discount
        }
    }

    finalAmount = amount - discount;

    // Display the discount and final amount
    printf("Discount: $%.2f\n", discount);
    printf("Final amount after discount: $%.2f\n", finalAmount);

    return 0;
}

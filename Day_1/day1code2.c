//C program to input two numbers and display their sum, difference, product, and quotient
#include <stdio.h>

int main() {
    // Declare variables to store the two numbers
    float num1, num2;
    
    // Declare variables to store results
    float sum, difference, product, quotient;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);  // Read the first number from the user

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);  // Read the second number from the user

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Calculate the difference of the two numbers
    difference = num1 - num2;

    // Calculate the product of the two numbers
    product = num1 * num2;

    // Check if the second number is not zero to avoid division by zero
    if (num2 != 0) {
        // Calculate the quotient if division is safe
        quotient = num1 / num2;
    }

    // Display the results
    printf("Sum: %.2f\n", sum);               // Display the sum
    printf("Difference: %.2f\n", difference); // Display the difference
    printf("Product: %.2f\n", product);       // Display the product

    // Display the quotient only if division by zero is not attempted
    if (num2 != 0) {
        printf("Quotient: %.2f\n", quotient); // Display the quotient
    } else {
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0; // Indicate that the program finished successfully
    }

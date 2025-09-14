// C program two swap two numbers without the use of any third variable.

#include <stdio.h>

int main() {
    double num1, num2; // Variables to store the two numbers
    int result;         // To validate user input

    // Input validation loop for the first number
    while (1) {
        printf("Enter the first number: ");
        result = scanf("%lf", &num1);
        if (result == 1) {
            break; // Valid input, exit the loop
        } else {
            printf("Invalid input! Please enter a numeric value.\n");
            while (getchar() != '\n'); // Clear the invalid input from buffer
        }
    }

    // Input validation loop for the second number
    while (1) {
        printf("Enter the second number: ");
        result = scanf("%lf", &num2);
        if (result == 1) {
            break; // Valid input, exit the loop
        } else {
            printf("Invalid input! Please enter a numeric value.\n");
            while (getchar() != '\n'); // Clear the invalid input from buffer
        }
    }

    printf("\nBefore swapping:\n");
    printf("First number = %.2lf\n", num1);
    printf("Second number = %.2lf\n", num2);

    // Swapping without using a third variable using arithmetic operations
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping:\n");
    printf("First number = %.2lf\n", num1);
    printf("Second number = %.2lf\n", num2);

    return 0;
}

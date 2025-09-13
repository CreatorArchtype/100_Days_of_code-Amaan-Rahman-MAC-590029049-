#include <stdio.h>

int main() {
    double num1, num2; // Variables to store the two numbers
    double temp;        // Third variable used for swapping
    int result;        // Variable to check if input is valid

    // Loop until the user enters a valid first number
    while (1) {
        printf("Enter the first number: ");
        result = scanf("%lf", &num1); // Try to read a floating-point number

        // Check if input is valid
        if (result == 1) {
            break; // Input is valid, exit the loop
        } else {
            printf("Invalid input! Please enter a numeric value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Loop until the user enters a valid second number
    while (1) {
        printf("Enter the second number: ");
        result = scanf("%lf", &num2); // Try to read a floating-point number

        // Check if input is valid
        if (result == 1) {
            break; // Input is valid, exit the loop
        } else {
            printf("Invalid input! Please enter a numeric value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Display the original numbers before swapping
    printf("Before swapping:\n");
    printf(" %lf\t%lf\t", num1, num2);
  

    // Swapping the numbers using a third variable 'temp'
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    printf("After swapping:\n");
    printf(" %lf\t%lf\t", num1, num2);
    

    return 0; // Indicate that the program ended successfully
}

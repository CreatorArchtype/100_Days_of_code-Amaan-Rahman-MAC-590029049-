// C program to check whether the number as an input is positive, negatve, or zero.

#include <stdio.h>

int main() {
    int num;        // Variable to store user input
    int inputCheck; // To check if scanf() successfully reads an integer

    printf("=== Program to Check Whether a Number is Positive, Negative, or Zero ===\n");

    // Keep asking until the user enters a valid integer
    while (1) {
        printf("Enter an integer: ");

        // scanf() returns 1 if it successfully reads an integer
        inputCheck = scanf("%d", &num);

        if (inputCheck == 1) {
            // Valid integer input, break the loop
            break;
        } else {
            // Invalid input: clear input buffer and try again
            printf("Invalid input! Please enter a valid integer.\n");

            // Clear the invalid input from buffer
            while (getchar() != '\n');
        }
    }

    // Nested if–else to check number sign
    if (num >= 0) {
        if (num == 0) {
            printf("The number is ZERO.\n");
        } else {
            printf("The number is POSITIVE.\n");
        }
    } else {
        printf("The number is NEGATIVE.\n");
    }

    return 0;
}

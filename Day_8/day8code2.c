/* C program to input three integers and find the largest among them
   using if–else statements. */

#include <stdio.h>

int main() {
    int a, b, c; // Three numbers
    int result;// To check scanf success

    // Input first number with validation
    while (1) {
        printf("Enter the first integer: ");
        result = scanf("%d", &a);
        if (result == 1) {
            break; // valid integer
        } else {
            printf("Invalid input! Please enter an integer.\n");
            while (getchar() != '\n'); // clear input buffer
        }
    }

    // Input second number with validation
    while (1) {
        printf("Enter the second integer: ");
        result = scanf("%d", &b);
        if (result == 1) {
            break;
        } else {
            printf("Invalid input! Please enter an integer.\n");
            while (getchar() != '\n');
        }
    }

    // Input third number with validation
    while (1) {
        printf("Enter the third integer: ");
        result = scanf("%d", &c);
        if (result == 1) {
            break;
        } else {
            printf("Invalid input! Please enter an integer.\n");
            while (getchar() != '\n');
        }
    }

    // Finding the largest number using if–else
    if (a >= b && a >= c) {
        printf("The largest number is: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("The largest number is: %d\n", b);
    }
    else {
        printf("The largest number is: %d\n", c);
    }

    return 0;
}

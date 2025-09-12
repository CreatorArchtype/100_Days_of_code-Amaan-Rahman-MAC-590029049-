 //C program to add two numbers taken from the user
 
#include <stdio.h>

int main() {
    double num1, num2;

    // Loop until valid first number is entered
    while (1) {
        printf("Enter the first number: ");
        if (scanf("%lf", &num1) == 1) {
            break;  // valid input, exit loop
        }
        else
        {
            printf("Invalid choice\n");
            // Clear invalid input from buffer
            while (getchar() != '\n');
        }
    }

    // Loop until valid second number is entered
    while (1) {
        printf("Enter the second number: ");
        if (scanf("%lf", &num2) == 1) {
            break;
            // valid input, exit loop
        }
        else
        {
            printf("Invalid choice\n");
            // Clear invalid input from buffer
            while (getchar() != '\n');
        }
    }

    double sum = num1 + num2;
    printf("Sum = %.2lf\n", sum);

    return 0;
}
#include <stdio.h>

int main() {
    float length, breadth; // Variables to store rectangle's length and breadth
    float area, perimeter; // Variables to store calculated area and perimeter
    int result;            // Variable to check scanf success

    // Loop until a valid length is entered
    while (1) {
        printf("Enter the length of the rectangle: ");
        result = scanf("%f", &length); // Try to read a float from user

        // If scanf returns 1, input is valid; otherwise, invalid input
        if (result == 1 && length > 0) {
            break; // Valid length entered, exit the loop
        } else {
            printf("Invalid input! Please enter a positive number.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Loop until a valid breadth is entered
    while (1) {
        printf("Enter the breadth of the rectangle: ");
        result = scanf("%f", &breadth); // Try to read a float from user

        // If scanf returns 1, input is valid; otherwise, invalid input
        if (result == 1 && breadth > 0) {
            break; // Valid breadth entered, exit the loop
        } else {
            printf("Invalid input! Please enter a positive number.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Calculate the area and perimeter of the rectangle
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0; // Program ends successfully
}

// C program to print the sum from 1 to n.

#include <stdio.h>

int main(){
     int n; int sum = 0; 
     int result;

     // Input validation loop for the first number
    while (1) {
        printf("Enter the number of your choice: ");
        result = scanf("%d", &n);
        if (result == 1) {
            break; // Valid input, exit the loop
        } else {
            printf("Invalid input! Please enter a numeric value.\n");
            while (getchar() != '\n'); // Clear the invalid input from buffer
        }
    }


     for(int i = 0; i <= n; i++){ // for loop implementation

            sum+=i;// Computing sum.
     }
     printf("The sum is: %d\n", sum);// Printing the sum.

     return 0;
}
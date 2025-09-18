// C program to check whether the input number is odd or even.

#include <stdio.h>

int main(){
    int num1;
    int result;
    
    // Loop until the user enters a valid number.
    while (1) {
        printf("Enter the number fo your choice ");
        result = scanf("%d", &num1); // Try to read the number. 

        // Check if input is valid
        if (result == 1 && num1 >= 0) {
            break; // Input is valid, exit the loop
        } else {
            printf("Invalid input! Please enter a correct number.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // if-else implementation for checking whether the number is odd.
    if(num1 % 2 == 0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }


    return 0;

}
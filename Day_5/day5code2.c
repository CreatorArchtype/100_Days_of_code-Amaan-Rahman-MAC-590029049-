// C program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main()

{
 int time ; // taking the required variables.
 int hour ;
 int minutes;
 int seconds;
 int result;

 // Loop until the user enters a valid pricipal.
    while (1) {
        printf("Enter the Time ");
        result = scanf("%d", &time); // Try to read the principal 

        // Check if input is valid
        if (result == 1 && time > 0) {
            break; // Input is valid, exit the loop
        } else {
            printf("Invalid input! Please enter a correct value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

 hour = time/3600; // Calculating hours 
 minutes = (time%3600)/60; // Calculating minutes
 seconds = (time%3600)/60; // Calculating seconds


 printf("%d:%d:%d",hour,minutes,seconds); // Printing the time format. 
 
 return 0;
}
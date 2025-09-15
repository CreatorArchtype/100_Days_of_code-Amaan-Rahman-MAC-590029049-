// C program to compute simple and compound interest for given principal, rate, and time.

# include <stdio.h>
# include <math.h>

int main(){

    double pri; // Taking variables required.
    double time;
    double rate;
    double si,amount, ci;
    double var;
    int result;

    // Loop until the user enters a valid pricipal.
    while (1) {
        printf("Enter the Principal ");
        result = scanf("%lf", &pri); // Try to read the principal 

        // Check if input is valid
        if (result == 1 && pri > 0) {
            break; // Input is valid, exit the loop
        } else {
            printf("Invalid input! Please enter a correct value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Loop until the user enters a valid rate.
    while (1) {
        printf("Enter the Rate ");
        result = scanf("%lf", &rate); // Try to read the rate 

        // Check if input is valid
        if (result == 1 && rate > 0) {
            break; // Input is valid, exit the loop
        } else {
            printf("Invalid input! Please enter a correct value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }
    

     // Loop until the user enters a valid time period.
    while (1) {
        printf("Enter the Time ");
        result = scanf("%lf", &time); // Try to read the time

        // Check if input is valid
        if (result == 1 && time > 0) {
            break; // Input is valid, exit the loop
        } else {
            printf("Invalid input! Please enter a correct value.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    si = (pri*rate*time)/100; // Simple interest
    var = 1 + (rate/100); // Variable for computing amount. 
    amount = pri*pow(var, time); // Computing amount
    ci = amount - pri; // Compound Interest

    printf("The Simple interest is: %lf\n", si); // Printing Simple interest 
    printf("The Compound interest is: %lf\n ", ci); // Printing Compound Interest


    
}
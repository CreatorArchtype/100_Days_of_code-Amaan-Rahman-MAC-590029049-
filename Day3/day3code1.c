// C program to convert temperature from Celsius to Fahrenheit.

# include <stdio.h>

int main(){

    double temp; // Declaring variable for temperature
    double farenheit; //Variable for converting the temperature from Celsius to Fahrenheit.
    int result;


    while(1){

        printf("Enter Temperature (in Celsius):"); // Taking temperature as an input from the user
        result = scanf("%lf", &temp);
        
           // If scanf returns 1, input is valid; otherwise, invalid input
        if(result == 1 && temp >= 0 ){
            break;// Valid length entered, exit the loop
        } 
        else{
            printf("Invalid input! Please enter correct temperature format in celsius.\n");

             // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
         
    }
    farenheit = temp*(9/5) + 32; //Conversion of temperature from celsius to Farenheit
    printf("The Temperature in Fahrenheit is: %lf\n", farenheit);

    return 0;
    
}
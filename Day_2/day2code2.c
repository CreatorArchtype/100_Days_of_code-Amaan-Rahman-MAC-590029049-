// Find the Area and Circumference of a circle given its radius.

# include <stdio.h>
#include <math.h>
int main(){
    double pi =3.14, radius;
    double area, circumference, result;

    // Loop until a valid radius is entered 
    while(1){
        printf("Enter the radius of the circle: ");
        result = scanf("%lf", &radius); // Try to read a double from user


        // If scanf returns 1, input is valid; otherwise, invalid input
        if(result == 1 && radius >= 0 ){
            break;// Valid length entered, exit the loop
        } 
        else{
            printf("Invalid input! Please enter a positive number.\n");

             // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }

    // Calculate the area and circumference  of the rectangle
    area = pi*radius*radius;
    circumference  = 2*pi*radius;

    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0; // Program ends successfully
    
}
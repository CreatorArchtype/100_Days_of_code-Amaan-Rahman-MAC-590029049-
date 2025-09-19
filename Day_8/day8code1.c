/* C program to check if a character is 
uppercase, lowercase, digit, or special character.*/

#include <stdio.h>

int main() {
    char ch;
    int result;

    // Input validation loop
    while (1) {
        printf("Enter a character: ");
        result = scanf(" %c", &ch); // space before %c ignores whitespace/newline

        if (result == 1) {
            break; // valid character read
        } else {
            printf("Invalid input! Please enter a valid character.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Check type of character
    if (ch >= 'A' && ch <= 'Z') {
        printf("Character is Uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Character is Lowercase\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Character is a Digit\n");
    }
    else {
        printf("Character is a Special Character\n");
    }

    return 0;
}

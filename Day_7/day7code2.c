// C program to determine if a character is vowel or consonant.

# include <stdio.h>
# include <ctype.h>

int main(){
      char vowel[10] = {'a','e','i','o','u','A','E','I','O','U'}; // Array for vowel
      char in;
      int found = 0;
      int result;
      
       while(1){

        printf("Enter the character:"); // Taking character as an input from the user
        result = scanf("%c", &in);
        
        
         if(isalpha(in)) {  // If scanf returns 1, input is valid; otherwise, invalid input
          break;// Valid input entered, exit the loop
        } 
        else{
            printf("Invalid input! Please enter a correct character.\n");

             // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }
    }   

        for(int i = 0; i<=10; i++ ){
            if(vowel[i] == in){
                found = 1;
                break;
            }
        }
    if(found){
        printf("The character is a vowel");
    }
    else{
        printf("The character is a consonant");
    }

    return 0;     
         
}
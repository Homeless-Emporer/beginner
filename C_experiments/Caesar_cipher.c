/*
*0ur program will request for a character input
*0ur program will take that input and shift it some amount
*0ur program will print out the new character into the standard output
*/

#include <stdio.h>
#include <ctype.h> /* include this for isalpha and isdigit functions */

int main() {
    
    char input_char;
    int shift_amount;
    char new_char;
    
    while(1){
        printf("Enter your character: ");
        scanf("%c", &input_char);
        
        if (isalpha(input_char) || isdigit(input_char)){
            break;
        }else {
            printf("\nYour input is invalid \n");
            puts("\nplease enter a character or digit and try again");
            continue;
        }
    } 
    
    
   while(1){
       printf("Enter the shift value: ");
       if (scanf("%d", &shift_amount) == 1){
           break;
       } else {
           puts("Invalid shift amount, input an integer and try again \n");
           while(getchar() != '\n');
           continue;
       }
   } 
    
    new_char = input_char + shift_amount;
    
    printf("Your shifted character is: [%c]\n", new_char);
    
    return 0;
}
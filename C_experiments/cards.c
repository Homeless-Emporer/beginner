#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    int count = 0; // Initialize the count

    while (1) {
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        
        int val = 0;

        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                return 0; // Exit the program if 'X' is entered
            default: 
                val = atoi(card_name);
                if (val < 1 || val > 10) {
                    printf("Error: [%d] is not a valid card value.\n", val);
                    continue; // Skip to the next iteration if an error occurs
                }
                break;
        }

        // Update the count based on the card value
        if (val >= 2 && val <= 6) {
            count++;
        } else if (val == 10) {
            count--;
        }

        printf("Current count: %i\n", count);
    }
    
    return 0;
}


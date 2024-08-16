#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's choice
int getComputerChoice() {
    // Generate a random number between 0 and 2
    return rand() % 3;
}

// Function to get the user's choice
int getUserChoice() {
    int choice;
    printf("Enter your choice: (0 = Rock, 1 = Paper, 2 = Scissors): ");
    scanf("%d", &choice);
    return choice;
}

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice) {
    const char* choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    // Seed the random number generator
    srand(time(0));

    int userChoice = getUserChoice();
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice. Please enter 0, 1, or 2.\n");
        return 1;
    }

    int computerChoice = getComputerChoice();
    determineWinner(userChoice, computerChoice);

    return 0;
}

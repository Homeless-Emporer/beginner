#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    int j = length - 1;

    for (int i = 0; i < j; ++i, --j) {
        if (str[i] != str[j]) {
            // If characters at position i and j are not equal, it's not a palindrome
            return 0;
        }
    }
    // If the loop completes without returning, the string is a palindrome
    return 1;
}

int main() {
    char str[300];

    // Prompt the user for input
    puts("Enter a word to check if it's a palindrome: ");

    // Try reading the input using scanf
    int inputSuccess = scanf("%s", str);

    // Check if input was successful
    if (inputSuccess == 1) {
        // Proceed with palindrome check
        if (isPalindrome(str)) {
            printf("The string \"%s\" is a palindrome\n", str);
        } else {
            printf("The string \"%s\" is not a palindrome\n", str);
        }
    } else {
        // Handle input error
        puts("Your input was not registered. You're welcome to try again!");
    }

    return 0;
}

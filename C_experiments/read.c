
#include <stdio.h>
int main() {
    FILE *file = fopen("data.txt", "r"); // Open the file for reading
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char buffer[256]; // Buffer to hold each line

    // Read the file line by line
    while (fgets(buffer, sizeof(buffer), file) != EOF) {
        printf("%s", buffer); // Print the line to the terminal
    }

    fclose(file); // Close the file
    return 0;
}

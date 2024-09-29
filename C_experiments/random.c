#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000000
#define FREQUENCY_SIZE 11

int main(void) {
    // Seed the random number generator
    srand(time(NULL));

    unsigned long long generators[SIZE];
    unsigned long long frequency[FREQUENCY_SIZE] = {0}; // Initialize the frequency array to zero

    // Print the header
    printf("%-10s%-10s%-10s\n", "INDEX", "FREQUENCY", "BAR_CHART");

    // Generate random numbers and update the frequency array
    for (size_t num = 0; num < SIZE; ++num) {
        int randint = 1 + rand() % 10;
        generators[num] = randint;
        ++frequency[randint];
    }

    // Print the frequency array and their bar charts
    for (size_t i = 1; i <= 10; ++i) {
        printf("%-10zu%-10llu", i, frequency[i]);
        for (unsigned long long j = 0; j < frequency[i] / 10000; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

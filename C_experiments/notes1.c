#include <stdio.h>

int main() {

 char greatings[] = "Hello worlds";
    printf("%s\n", greatings);

    printf("[%c]\n", greatings[0]);
    printf("[%c]\n", greatings[1]);

    printf("[%c]\n", greatings[4]);

    printf("[%c]\n", greatings[7]);

    greatings[0] = 'P';
    printf("%s\n", greatings)
    return 0;


    
}
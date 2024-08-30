#include <stdio.h>

int main() {
    int i;
    int result = 0;
    for (i = 2; i < 200000000000; i++) {
        result += i;
    }
    
    printf("The total is [%d]\n", result);
    
    return 0;
}


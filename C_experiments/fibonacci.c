#include <stdio.h>

unsigned long long int fibonacci(long);

int main() {
    // Write C code here
    long num;
    printf("Enter a number: ");
    scanf("%li", &num);
    
    unsigned long long int result = fibonacci(num);
    
    if (result == -1)
    {
        puts("In valid input, you entered a negative number!");
    } else {
    printf("%li fibonacci is %llu", num, result);
    }

    return 0;
}

unsigned long long int fibonacci (long x)
{
 if (x == 0){
    return 0;
} else if (x == 1){
    return 1;
} else {
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

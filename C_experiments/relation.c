#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    int diff = 0;
    
    printf("Enter Two Numbers \n");
    printf("I can tell you the relation: ");
    
    scanf("%d %d", &num1, &num2);
    
    diff = num1 - num2;
    
    switch (diff) {
        case 0:
            printf("They are equal\n");
            break;
        default:
            if (diff > 0) {
                printf("%d is greater than %d \n", num1, num2);
            } else {
                printf("%d is greater than %d \n", num1, num2);
            }
            break;
    }
    
    return 0;
}

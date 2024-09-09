#include <stdio.h>

int main(){
    
    float principal;
    float rate;
    float days;
    
    do 
    {
    printf("Enter loan principal (-1 to end):");
    scanf("%f", &principal);
    if (principal == -1)
        break;
        
    printf("Enter interest rate:");
    scanf("%f", &rate);
    
    printf("Enter term of the loan in days:");
    scanf("%f", &days);
    
    float interest = (principal * rate * days) / 365;
    printf("The interest charge is: %f\n", interest);

    }//end of loop
    while(principal != -1);
    
}// end of main

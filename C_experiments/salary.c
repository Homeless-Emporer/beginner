#include <stdio.h>

int main(){
    
    float hoursWorked;
    float hourlyRate;
    float salary;
    
    while(1)
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%f", &hoursWorked);
        if (hoursWorked == -1)
            break;

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourlyRate);
        
        if (hoursWorked <= 40)
        {
            salary = hoursWorked * hourlyRate;
        }//end of if
        else 
        {
            salary = ((40 * hourlyRate) + (hoursWorked - 40) * 1.5 * hourlyRate);
        }//end of else
        printf("Salary is: %f\n", salary);
    }//end of loop
    
    return 0;
    
}// end of main

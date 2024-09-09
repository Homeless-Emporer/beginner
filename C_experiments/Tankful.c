/*
*while condition is true
*    prompt user to input number of gallons
*    read number of gallons
*    check for exit condition
*    add to total number of gallons
*    
*    prompt user to input number of miles driven
*    read number user input
*    add to total number of miles driven
*    
*check for division by 0
*calcute the avg number of miles per gallon
*Display avg number of miles per gallon
*/

#include <stdio.h>
int main() {

float totalGallons = 0;
float gallons;

float totalMiles = 0;
float miles;

float avgMilesPerGallons;

while(totalGallons >= 0)
{
    puts("Enter the gallons used (-1 to end):");
    scanf("%f", &gallons);
    if (gallons == -1)
        break;
    totalGallons = gallons + totalGallons;

    puts("Enter the miles driven:");
    scanf("%f", &miles);
    totalMiles = miles + totalMiles;
}//end of while

if (totalGallons > 0)
{
    float avgMilesPerGallons = totalMiles/totalGallons;
    printf("The overall average miles/gallon was: %f\n", avgMilesPerGallons);
}// end  of if
else
    puts("Invalid Input!\nUnable to calculate average!");
   
return 0;
}//end of main


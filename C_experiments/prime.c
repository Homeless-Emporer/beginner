/**
 * program for checking Prime Numbers
 * Author: Homeless_Emporer
 * Date: 9-16-2024
 * Comments: NONE
 */


#include <stdio.h>
#include <stdbool.h>


//function for checking prime Numbers and return a boolean value
bool isPrime(int num)
{
	if (num <= 1)
	{
		return 0;
	}//End of if statement

	for (int i = 2; (i <= num/2); ++i)
	{
		if (0 == num % i)
		{
			return 0;
		}//End of if statement
	}//End of for loop
}//End of function

//main function to start execution
int main()
{
	int num;

	printf("%s","End a number to check if it's prime: \n");
	scanf("%d", &num);

	if(isPrime(num))
	{
		printf("The number [%d] is a PRIME", num);
	}// End of if statement
	else
	{
		printf("The number [%d] is not a PRIME", num);
	}//End of else statement

	return 0;
}// End of main function



#include<stdio.h>
#define PI 3.14159

int main()
{
   double x;
   double circumference;

   printf("Enter the value of radius of the circle: ");
   scanf("%lf",&x);
   circumference = 2 * PI * x;

   printf("The perimeter of the circle is %.2f",circumference);
   return 0;
}

#include <stdio.h>

void go_south_east( int *lat, int *lon){
    
    int offSet;
    printf("Offset quantity: ");
    scanf("%d", &offSet);
    
    *lat = *lat - offSet;
    *lon = *lon - offSet;
}

int main()
{
  int active = 1;
  while (active)
  {
    int latitude;
    int longitude;
    
    printf("Enter your latitude(Enter any key to exit): ");
    if (scanf("%d", &latitude) != 1)
    {
        printf("Thank you for your time!\n");
        active -= 1;
        break;
    }
    
    printf("Enter your longitude: ");
    if (scanf("%d", &longitude) != 1)
    {
     printf("Thank you for your time!\n");
     active -= 1;
     break;
    }

    go_south_east(&latitude, &longitude);
    printf("Your new coordinates are [%i, %i] \n", latitude, longitude);
  }
}
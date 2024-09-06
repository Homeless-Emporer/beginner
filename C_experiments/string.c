
#include <stdio.h>

int main() 
{
   
   char quote[] = "Dad why are my toys shit?";
   
   int offset = 0;
   while (quote[offset] != '\0')
   { 
      if (quote[offset] == ' ')
      {
        offset++;
        printf(" \n");
        continue;
      }

      else
      {
        printf("The character at %d is:   [%c]\n",offset,quote[offset]);
        offset++;
      }
   } //end of main function
   return 0;
}
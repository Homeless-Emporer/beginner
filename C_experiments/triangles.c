#include <stdio.h>

int main() {
    
    printf("%s %20s %25s %20s\n", "(A)", "(B)", "(C)", "(D)");

    int length = 10;
    int triangle = 1;
    int length_2 = 10;
    
    for (int i = 0; i <= length; ++i)
    {
        for (int j = 0; j < triangle; ++j)
        {
            printf("%s","*");
        }
    ++triangle;
    
        for (int k = 0; k <=(length-triangle+1); ++k)
        {
            printf("%s", " ");
        }
        
        for (int p = 0; p <= i -1; ++p)
            printf(" ");

        // Triangle 2
        for (int j = -1; j <= (length_2*2)-1; j++) {
            printf("%s",  "*");
        } 
        
        --length_2;
        
        //Triangle 3
        for (int i = 0; i < (length-length_2) + 4; ++i)
        {
            printf("%s", " ");
        }

        for (int j = 0; j < (length - length_2); ++j )
        {
            printf("%s", " ");
        }

        for (int k = -3; k <= (length_2*2)-1; k++) {
            printf("%s",  "*");
        } 
        
        //TRiangle 4 

        
        for (int i = 0; i <= (length)-1; ++i)
        {
            printf("%s", " ");
        }

        for( int j = 0; j < (triangle - 1); ++j)
        {
            printf("%s", "*");
        }
        
        
    puts(" ");
        
    }    
    return 0;
}

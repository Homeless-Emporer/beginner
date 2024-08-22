#include <stdio.h>
#include <stdlib.h>

/* A study of functions in c.*/

/* functions commence with a return data type to specify what type of value the func will output*/
/* Next is the name of the func and the input arguments in the paranthese*/
/*followed by the function body or the part that does stuff*/

int main() {

    int larger(int a, int b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    int greatest = larger(100, 1000);
    printf("%i is the greast of the two!", greatest);
    return 0;

    void complain() {
        puts("I am not happy!");
    }
}

/* An input argument or parameter is just a local variable 
* which gets its value from the code that calls the function
*/

/* Functions with no return value can be given a return type of void
* this return type signifies that the function wont return anything
*/

// KEY WORD: [VOID] - Tells your compiler that you dont care about the value

// An attempt to read this return value will cause an error;

//Assignments In C: chaining assigments is used when different variables need the same value
y = x = 4;

int 
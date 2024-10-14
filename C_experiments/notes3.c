/* In this program we learn and implement a basic use of the switch function in C.
* as well as different variations of the while and for loop.
 */


int main() {
    
 int temp;

printf("Enter the temperature: ");
scanf("%d", &temp);


switch(temp / 10){

    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        puts("It is way too cold outside pls stay inside");
        break;

    case 5:
    case 6:
    case 7:
    case 8:
        puts("The temperature is perfect go outside");
        break;

    case 9:
    case 10:
        puts("It's way too hot stay inside");
        break;

    default:
        puts("Invalid temp value");
        break;
}

printf("The temperature is: [%d]", temp);

return 0;
}

/* Control statements decides if a section of code will be run 
 *and a loop statement decides how many times a piece of code 
*will be run*/

while (<some condition>){

    /* Do something here*/
}

/* if the loop condition is true by the end of the body, 
 *the computer runs the body code once more*/

do {
    /* Do something here once */
} while(have_not_won);

/* This form of while loop checks the loop condition only after the loop has been run at least once, 
 *useful for statements you want to run atleast once.*/

/* setting a step counter is often needed.*/
g

int counter = 1;
while (counter < 11) {
    printf("%i many things left to do \n", counter);
    counter++;
}

/* Different looop pattern is the for loop, which makes the above pattern of loops more concise*/

int counter;
for (counter = 1; /*intiates the counter*/ counter < 11; 
/*statement that is check before the loop is run over again*/ counter++) /* increment that runs after each loop*/ {
    printf("%i things have been done\n", counter)
}

/*break; is use to exit a loop somewhere in the middle*/

while (You want to do something) {
    do the thing();
    if (You dont feel like it, anymore) {
        break; 
    }
    thsi_will_be_skipped();
}

/*Continue; statements are for when you want to skip the rest of the loop body but want to still continue the loop at the beggining*/

while(feeling_like_doing_something) {
    if (Not_ready_to_do_it) {
        continue;
    J_do_it();
    }
}
emum primaryColor myColor, gregsColor;
enum primaryColor {red, green, blue};

myColor = red;
gresColor = blue;

enum primaryColor hisColor;
hisColor = green

char broiled;

broiled = 'T';

int main()
{
enum gender {male, female};
enum gender myGender;

myGender = male;

enum gender anotherGender = female;

bool isMale = (myGender == anotherGender);

char myCharacter = '\n'

printf("%c", myCharacter);

}

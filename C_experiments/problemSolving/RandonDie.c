#include <stdio.h>
#include <stdlib.h>

int randomDie(void);

int main(void)
{
	int roll_1 = 0;
	int roll_2 = 0;
	int roll_3 = 0;
	int roll_4 = 0;
	int roll_5 = 0;
	int roll_6 = 0;

	for (int j = 0; j < 60000000; ++j)
	{
		int face = randomDie();
 
		switch(face) {
		case 1:
			++roll_1;
			break;
		case 2:
			++roll_2;
			break;
		case 3:
			++roll_3;
			break;
		case 4:
			++roll_4;
			break;
		case 5:
			++roll_5;
			break;
		case 6:
			++roll_6;
			break;
		default:
			break;
		}
	}
	printf(
			"The frequency of 1s is: %d\nThe frequency of 2s is: %d\nThe frequency of 3s is: %d\n", roll_1, roll_2, roll_3
			);
	printf(
			"The frequency of 4s is: %d\nThe frequency of 5s is: %d\nThe freqeuncy of 6s is: %d\n", roll_4, roll_5, roll_6
		  );

	return 0;
}

int randomDie(void)
{
	return 1 + rand()%6;
}

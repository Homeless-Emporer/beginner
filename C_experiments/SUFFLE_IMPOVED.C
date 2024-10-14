#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void deal(const int deck[][13], const char* faces[], const char* suits[], int index);

int main(void){
srand(time(NULL));

const char* suits[] = {"Hearts", "Clubs", "Diamonds", "Spades"};
const char* faces[] = 
    {
    "Ace","Deuce","Three","Four","Five","Six","Seven",
    "Eight","Nine","Ten","Jack","Queen","King"
    };

int deck[4][13] = {0};

for(int i = 1; i <= 52; ++i){
    int row;
    int column;
    do{    
        row = rand()%4;
        column = rand()%13;
        }
        while (deck[row][column] != 0 );
            deck[row][column] = i;

}
puts("Player 1's deck: ");
for (int i = 1; i < 6; ++i)
{
    deal(deck, faces, suits, i);

}

puts("Player 2's deck: ");
for (int i = 1; i < 6; ++i)
{
    deal(deck, faces, suits, i);

}


puts("Player 3's deck: ");
for (int i = 1; i < 6; ++i)
{
    deal(deck, faces, suits, i);

}

puts("Player 4's deck: ");
for (int i = 1; i < 6; ++i)
{
    deal(deck, faces, suits, i);

}
puts("\ndeck array: ");
for(int i = 0; i < 4; ++i)
{
    for( int j = 0; j < 12; ++j)
    {
        printf("%d\t", deck[i][j]);
    }
    puts(" ");
}

return 0;

}

void deal(const int deck[][13], const char* faces[], const char* suits[], int index)
{
    for( size_t i = 0; i < 3; ++i)
    {
        for(size_t j = 0; j < 12; ++j)
        if (deck[i][j] == index)
        {
            printf("%s of %s\n", faces[j], suits[i]);
        }
    }
}
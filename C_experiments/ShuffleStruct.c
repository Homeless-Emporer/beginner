#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CARDS 52
#define FACES 13

typedef struct{
	const char* Faces;
	const char* Suits;
}Cards;

void filldeck(Cards deck[], const char** Faces, const char** Suits);
void shuffle(Cards deck[]);
void deal(const Cards deck[]);

int main(void){
	
	srand(time(NULL));
	Cards deck[];
	
	const char* Faces[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven","Eight", "Nine", "Ten", "Jack", "King", "Queen"};
	const char* Suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	
	filldeck(deck, Faces, Suits);
	shuffle(deck);
	deal(deck);
	return 0;
}

void filldeck( Cards* const deck, const char* Faces[], const char* Suits[]){
	for (int i = 0; i < CARDS; ++i){
		deck[i].Faces = Faces[i%FACES];
		deck[i].Suits = Suits[i/FACES];
	}
}

void shuffle( Cards* deck){
	for (int i = 0; i < CARDS; ++i){
		int j = rand()%CARDS;
		Cards temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}

void deal(const Cards* deck){
	for(int i = 0; i < CARDS; ++i){
		printf("%-5s of %8s%s", deck[i].Faces, deck[i].Suits, (i + 1) % 4 ? ", ": "\n" );
	}
}

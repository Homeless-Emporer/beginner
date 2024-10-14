#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(void){

char sentence[80];
puts("Enter a sentence: ");
fgets(sentence, 80, stdin);
int size = strlen(sentence);
sentence[size-2] = '\0';
char* token = strtok(sentence, " ");
while(token != NULL)
{
    printf("%s%cay ",&token[1], token[0]);
    token = strtok(NULL, " ");
}

}
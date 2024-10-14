#include <stdio.h>
#include <string.h>

void main(void){
    char* songs[][] = 
    {
    "I left my heart in Harvard Med School\n",
    "Newark, Newark - a wonderful town\n",
    "Dancing with a Dork\n",
    "From here to maternity",
    "The girl from Iwo Jima\n"
    };
    char input[];

    puts("Enter a bar from song: ");
    error = fgets(input, 80, stdin);

    if(*error == NULL)
    {
        puts("oh no something went bad!");
    }

    for (size_t i = 0; i  5; ++i)
    {
        char* currentSong = songs[i];
        char* occurence = strstr(currentSong, input)
        if (occurence != NULL)
        {
            printf("%s", song[i]);
        }
    }
    
}
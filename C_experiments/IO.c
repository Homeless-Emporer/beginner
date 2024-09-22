#include <stdio.h>
# include <stdlib.h>

int main() {

FILE* file =  fopen("data.txt", "a");

if (file == NULL)
{
    perror("Error opening this file!");
    return 1;
}

fprintf(file,
    "Appended to this file is the location of meet!\nIf you are a serious individual with serious attempts\nMeet us at the land beyond the horizon\nWhere the sun never sets\n"
);

fclose(file);

printf("The file \"data.txt\" has been opened\nText appended to\nThen closed!");

return 0;
}

#include <stdio.h>
#include <stdbool.h>
#define MIN_LAT 26
#define MAX_LAT 34

#define MIN_LON -76
#define MAX_LON -64

int main(void)
{
    float latitude;
    float longitude;
    char info[80];
    
    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3){

        bool isInLatRange = ((latitude > MIN_LAT) && (latitude < MAX_LAT));
        bool isInLonRange = ((longitude > MIN_LON) && (longitude < MAX_LON));
        if(isInLatRange && isInLonRange)
        {
        printf("%.2f,%.2f,%s\n", latitude, longitude, info);
        }
    }
    return 0;
}

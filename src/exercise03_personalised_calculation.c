#include <stdio.h>

int main(void)
{
    double averageSpeed = 192.0;
    double timeHours = 1.5;
    char mode = 'R';

    double distanceTravelled = averageSpeed * timeHours;

    printf("Average speed: %.1f km/h\n", averageSpeed);
    printf("Time: %.1f hours\n", timeHours);
    printf("Operation: speed x time\n");
    printf("Distance travelled: %.1f km\n", distanceTravelled);
    printf("Mode: %c\n", mode);

    return 0;
}

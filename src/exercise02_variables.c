#include <stdio.h>

int main(void)
{
    int averageSpeedKmh = 192;
    float timeHours = 1.5f;

    float distanceKm = averageSpeedKmh * timeHours;

    printf("Average speed: %d km/h\n", averageSpeedKmh);
    printf("Time: %.2f hours\n", timeHours);
    printf("Operation: speed x time\n");
    printf("Distance travelled: %.2f km\n", distanceKm);

    return 0;
}

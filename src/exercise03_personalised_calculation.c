/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Mercy Marindi
 * Registration Number: ENB211-0057/2025
 * Variant ID: V17
 * Scenario: Distance travelled
 */

#include <stdio.h>

int main(void)
{
    double speedKilometresPerHour = 40.0;
    double timeHours = 3.0;
    double distance;

    /* Multiplication calculates distance from speed and time. */
    distance = speedKilometresPerHour * timeHours;

    printf("Speed: %.2lf km/h\n", speedKilometresPerHour);
    printf("Time: %.2lf hours\n", timeHours);
    printf("Distance: %.2lf\n", distance);

    return 0;
}

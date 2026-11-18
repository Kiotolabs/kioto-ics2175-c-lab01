
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: WINNY AKINYI OCHIENG
 * Registration Number: ENB211-O121/2025
 * Variant ID: ENB211-0121/2025
 * Scenario: Distance travelled
 */

#include <stdio.h>

int main(void)
{
    float averageSpeed = 192.0f;
    float time = 1.5f;

    float distance;

    distance = averageSpeed * time;

    printf("Average speed: %.2f km/h\n", averageSpeed);
    printf("Time: %.2f hours\n", time);
    printf("Distance travelled: %.2f km\n", distance);

    return 0;
}

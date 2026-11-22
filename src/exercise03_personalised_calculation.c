/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: WINNY AKINYI OCHIENG
 * Registration Number: ENB211-0121/2025
 * Variant ID: V18
 * Scenario: Distance travelled
 */

#include <stdio.h>

int main(void)
{
    float averageSpeed = 55.0f;
    float time = 1.5f;
    float distance;

    char label[] = "Distance travelled";

    distance = averageSpeed * time;

    printf("Average speed: %.2f km/h\n", averageSpeed);
    printf("Time: %.2f hours\n", time);
    printf("%s: %.2f km\n", label, distance);

    return 0;
}
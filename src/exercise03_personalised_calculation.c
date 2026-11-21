/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: VICTOR LEKEN
 * Registration Number: ENB211-0037\2025
 * Variant ID: V16
 * Scenario: Distance travelled
 *
 * Inputs: 60 and 2.5
 * Operation: Multiplication
 * Output label: Distance
 */

#include <stdio.h>

int main(void)
{
    double distancePerTrip = 60;
    double numberOfTrips = 2.5;
    double totalDistance;
    char category = 'D';

    totalDistance = distancePerTrip * numberOfTrips;

    printf("Distance: %.2f\n", totalDistance);
    printf("Category: %c\n", category);

    return 0;
}
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Kariuki Abram
 * Registration Number: ENB211-0012/2024
 * Variant ID: V18
 * Scenario: Distance travelled
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
    /* Input variables based on assigned task */
    double averageSpeed = 144.0; /* Average speed in km/h */
    double timeHours = 1.5;      /* Time duration in hours */

    /* Calculation: distance = speed * time */
    double distanceTravelled = averageSpeed * timeHours;

    /* Display the input values, operation and the final result */
    printf("Average Speed: %.2f km/h\n", averageSpeed);
    printf("Time: %.2f hours\n", timeHours);
    printf("Distance travelled: %.2f km\n", distanceTravelled);

    return 0;
}

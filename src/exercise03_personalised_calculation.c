/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: MURIUKI RISPER MUKAMI
 * Registration Number: ENB211-0011/2025
 * Variant ID: V18
 * Scenario: Distance travelled = speed * time
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
    int averageSpeed = 144;
    float timeHours = 1.5f;
    float distanceTravelled = averageSpeed * timeHours;

    printf("Average speed (Km/h): %d\n", averageSpeed);
    printf("Time (hours): %.1f\n", timeHours);
    printf("operation: speed * time\n");
    printf("Distance travelled: %.2f Km\n", distanceTravelled);

    return 0;
}

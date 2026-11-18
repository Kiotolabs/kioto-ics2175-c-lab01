/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Collins Isaboke
 * Registration Number: ENB211-0163/23
 * Variant ID: v07
 * Scenario: Cylindrical water storage tank volume
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
    float pi = 3.14159f;
    float radius = 1.5f;
    int height = 4;
    float volumeCubicMeters;
    float capacityLiters;

    volumeCubicMeters = pi * radius * radius * height;
    capacityLiters = volumeCubicMeters * 1000.0f;

    printf("Tank Radius: %.2f m\n", radius);
    printf("Tank Height: %d m\n", height);
    printf("Calculated Volume: %.2f cubic meters\n", volumeCubicMeters);
    printf("Total Tank Capacity: %.2f liters\n", capacityLiters);

    return 0;
}

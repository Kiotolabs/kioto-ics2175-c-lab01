/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Reye Alfred Kegode
 * Registration Number: ENB 211-0030/2025
 * Variant ID: TODO   (assigned by your lecturer, e.g. V07)
 * Scenario: A water tank team estimates the volume of a rectangular tank.
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
    int tankLength = 12;
    int tankWidth = 2;
    int baseArea= tankLength * tankWidth;

    printf("Tank length: %d\n", tankLength);
    printf("Tank width: %d\n", tankWidth);
    printf("Base area: %d\n", baseArea);

    return 0;
}

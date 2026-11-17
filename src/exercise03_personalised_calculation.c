/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: PATRICKNTHANGA MUTISO
 * Registration Number: ENB211-0026/2025
 * Variant ID:   (ENB211-0026/2026)
 * Scenario:     (A small farm records the area of a rectangle demonstration plot)
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
    float plotLength = 24.0;
    float plotWidth = 13.0;
    float plotArea;
    char plotCategory = 'A';

    plotArea = plotLength * plotWidth;

    printf("Farm Plot Area Calculation\n");
    printf("---------------------------\n");
    printf("Plot category: %c\n", plotCategory);
    printf("Plot length: %.2f metres\n", plotLength);
    printf("Plot width: %.2f metres\n", plotWidth);
    printf("Plot area: %.2f square metres\n", plotArea);

    return 0;
}
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Joan Nyokabi
 * Registration Number: ENB211-0014/2025
 * Variant ID:    (number of workstations in room A = 28,number of workstations in room B =22)
 * Scenario:      (total number of workstations)
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
    int workstationsinrooma = 28;
    int workstationsinroomb = 22;
    char category = 'A';

    float totalworkstations = workstationsinrooma + workstationsinroomb

    printf("Workstations in room A : %d\n", workstationsinrooma);
    printf("Workstations in room B : %d\n", workstationsinroomb);
    printf("Total Workstations: %f\n", totalworkstations)

    return 0;
}

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: HAGREAVES ODHIAMBO
 * Registration Number: ENB211-0061/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int workstationsPerLab = 30;
    float unitCost = 125.567f;
    double unitCost = 125.5665432127;
    char lab = 'S';
    printf("Lab %c has %d workstations at %.2f each or typed as %lf.\n", lab, workstationsPerLab, unitCost);

    return 0;
}

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: PATRICK NTHANGA MUTISO
 * Registration Number: ENB211-0026/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int numberOfPlots = 2;
    float plotLength = 24.0;
    char plotGrade = 'A';

    printf("Number of plots: %d\n", numberOfPlots);
    printf("Plot length: %.2f metres\n", plotLength);
    printf("Plot grade: %c\n", plotGrade);

    return 0;
}
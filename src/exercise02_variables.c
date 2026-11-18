/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Lawrence Ndiritu Gitonga
 * Registration Number: ENB211-0011/2024
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    /* Declare and initialise an int variable */
    int plotNumber = 48;

    /* Declare and initialise a float variable */
    float soilMoisture = 24.5f;

    /* Declare and initialise a double variable */
    double plotHectares = 0.0624;

    /* Declare and initialise a char variable */
    char cropGrade = 'A';

    /* Print each value with a label and the correct format specifier */
    printf("Plot Number: %d\n", plotNumber);
    printf("Soil Moisture (%%): %.1f\n", soilMoisture);
    printf("Plot Area (ha): %.4lf\n", plotHectares);
    printf("Crop Quality Grade: %c\n", cropGrade);

    return 0;
}
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Joan Nyokabi
 * Registration Number: ENB211-0014/2025
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int numberofcars = 80
    float distancecovered = 65.4
    double speedofcars = 90.000
    char category = 'A'

    printf("Number of Cars : %d\n", numberofcars);
    printf("Distance covered : %f\n", distancecovered);
    printf("Speed of cars: %.2f\n", speedofcars);
    printf("Category: %c\n", category)


    return 0;
}

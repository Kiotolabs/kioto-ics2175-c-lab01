/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Reye Alfred Kegode
 * Registration Number: ENB 211-0030/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int score =45;
     float temperature =12.7f;
     double pi =3.142;
     char category = 'A';

    printf("Score: %d\n", score);
    printf("Temperature: %.2f\n", temperature);
    printf("Pi:%.2lf\n", pi);
    printf("Category: %c\n", category);

    return 0;
}

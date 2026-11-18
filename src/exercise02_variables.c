/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: SHARON WANJIRU
 * Registration Number:ENB211-0016\2024
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main()
{
    int books = 15;
    float temperature = 23.4;
    double distance = 43.6745;
    char grade =' A';

    printf("%d\n", books);
    printf("Temperature: %f\n", temperature);
    printf("distance: %lf\n" , distance);
    printf("Grade: %c\n" , grade);


    return 0;
}

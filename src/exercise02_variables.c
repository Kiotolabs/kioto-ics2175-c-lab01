/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: VICTOR KOOME MUTWIRI
 * Registration Number: ENB211-0042/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    /* TODO: Declare and initialise an int variable */
    int average_speed = 48;

    /* TODO: Declare and initialise a float variable */
    float time = 1.5f;

    /* TODO: Declare and initialise a double variable */
    double fuel_efficiency = 14.756;

    /* TODO: Declare and initialise a char variable */
    char vehicle_category = 'B';

    /* TODO: Print each value with a label and the correct format specifier */
    printf("Average speed (km/h): %d\n", average_speed);
    printf("Time taken (hours): %.1f\n", time);
    printf("Fuel efficiency (km/l): %.3lf\n", fuel_efficiency);
    printf("Vehicle category: %c\n", vehicle_category);

    return 0;
}

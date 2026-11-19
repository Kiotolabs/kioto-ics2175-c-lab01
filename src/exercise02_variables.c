/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Peter Mwai
 * Registration Number: ENB211-0028/2025
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
    int age = 12;
    /* TODO: Declare and initialise a float variable */
    float height = 350.50f;
    /* TODO: Declare and initialise a double variable */
    double weight = 70.543289;
    /* TODO: Declare and initialise a char variable */
    char grade = 'A';
    /* TODO: Print each value with a label and the correct format specifier */
    printf("Integer value: %d\n", age);
    printf("Float value: %.2f\n", height);
    printf("Double value: %lf\n", weight);
    printf("Character value: %c\n", grade);

    return 0;
}

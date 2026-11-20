/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Abednego Nayiya Jimba
 * Registration Number: ENB211-0046/2025
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
    int studentAge = 21;


    /* TODO: Declare and initialise a float variable */
    float bodyTemperature = 98.6;


    /* TODO: Declare and initialise a double variable */
    double campusDistance = 100.50;


    /* TODO: Declare and initialise a char variable */
    char gradeCode = 'A';

    /* TODO: Print each value with a label and the correct format specifier */
    printf("Student age: %d\n", studentAge);
    printf("Body temperature: %.1f\n", bodyTemperature);
    printf("Campus distance: %.2f\n", campusDistance);
    printf("Grade code: %c\n", gradeCode);

    return 0;
}

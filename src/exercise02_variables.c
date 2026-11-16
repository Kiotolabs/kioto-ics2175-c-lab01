/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Jonathan Maritawa Mwaniki
 * Registration Number: ENB211-0031/2025
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
    int course_units =6;
    /* TODO: Declare and initialise a float variable */
    float average_score=78.5f;
    /* TODO: Declare and initialise a double variable */
    double tuition_fee=48000.75;

    /* TODO: Declare and initialise a char variable */
    char course_grade ='A';

    /* TODO: Print each value with a label and the correct format specifier */
    printf("Course units: %d\n",course_units);
    printf("Average score:%.1f\n",average_score);
    printf("Tuition fees:%.2f\n",tuition_fee );
    printf("Course grade; %c\n", course_grade);

    return 0;
}

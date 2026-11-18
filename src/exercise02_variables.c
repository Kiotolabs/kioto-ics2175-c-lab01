/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: TODO
 * Registration Number: TODO
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int studentAge = 20;
    float averageScore = 85.5f;
    double schoolFees = 45000.75;
    char grade = 'A';

    printf("Student Age: %d\n", studentAge);
    printf("Average Score: %.1f\n", averageScore);
    printf("School Fees: %.2lf\n", schoolFees);
    printf("Grade: %c\n", grade);

    return 0;
}

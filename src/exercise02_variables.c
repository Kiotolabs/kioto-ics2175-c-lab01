/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Kariuki Abram
 * Registration Number: ENB211-0012/2024
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
    float examScore = 85.50f;
    double academicGpa = 3.82;
    char gradeLetter = 'A';

    printf("Student Age: %d\n", studentAge);
    printf("Exam Score: %f\n", examScore);
    printf("Academic GPA: %lf\n", academicGpa);
    printf("Grade Letter: %c\n", gradeLetter);

    return 0;
}

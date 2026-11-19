/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Felistas Wanjira
 * Registration Number: ENB211-0008/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int studentAge = 21;
    float laboratoryHours = 3.14f;
    double mathematicalConstant = 2.718281828;
    char grade = 'A';

    printf("Integer value: %d\n", studentAge);
    printf("Float value: %.2f\n", laboratoryHours);
    printf("Double value: %.6lf\n", mathematicalConstant);
    printf("Character value: %c\n", grade);
    return 0;
}
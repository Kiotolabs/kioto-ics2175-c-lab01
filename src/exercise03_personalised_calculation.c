/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Patricia Ndirangu
 * Registration Number: enb211-0045/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int age = 20;
    float height = 1.65f;
    double weight = 55.75;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f metres\n", height);
    printf("Weight: %.2f kg\n", weight);
    printf("Grade: %c\n", grade);

    return 0;
}

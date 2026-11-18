/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: NDEGE NELLY NJERI
 * Registration Number: ENB211-0010/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise variables
    int age = 20;
    float temperature = 36.5f;
    double distance = 150.75;
    char grade = 'A';

    // Print each value with a label and the correct format specifier
    printf("Age: %d\n", age);
    printf("Temperature: %1f\n", temperature);
    printf("Distance: %2lf\n", distance);
    printf("Grade: %c\n", grade);



    return 0;
}

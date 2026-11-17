/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
* Student Name: KENNEDY MUSYOKA KYALO
 * Registration Number: ENB211-0029/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
   int age = 25;
    float average = 76.5f;
    double distance = 98.765432;
    char initial = 'K';
    
    printf("Age: %d years\n", age);
    printf("Average: %.1f\n", average);
    printf("Distance: %.6f\n", distance);
    printf("Initial: %c\n", initial);
    return 0;
}

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Clement Lesuuda
 * Registration Number: ENB211-0013/2025
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise an int variable
    int age = 20;

    // Declare and initialise a float variable
    float temperature = 25.5f;

    // Declare and initialise a double variable
    double distance = 1250.6789;

    // Declare and initialise a char variable
    char category = 'A';

    // Print each value with the correct format specifier
    printf("Integer value (Age): %d\n", age);
    printf("Float value (Temperature): %.1f\n", temperature);
    printf("Double value (Distance): %.4f\n", distance);
    printf("Character value (Category): %c\n", category);

    return 0;
}

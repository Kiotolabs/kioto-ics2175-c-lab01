/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: VICTOR LEKEN
 * Registration Number: ENB211-0037\2025 
 */

#include <stdio.h>

int main(void)
{
    int age = 18;
    float temperature = 25.5f;
    double distance = 1234.5678;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Temperature: %.1f\n", temperature);
    printf("Distance: %.4f\n", distance);
    printf("Grade: %c\n", grade);

    return 0;
}
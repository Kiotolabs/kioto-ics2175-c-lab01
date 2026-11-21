
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Anne Favour Ouma
 * Registration Number: ENB211-0017/2025
 */

#include <stdio.h>

int main(void)
{
    int numberOfStudents = 45;
    float temperature = 26.5f;
    double distance = 12.75;
    char grade = 'A';

    printf("Number of students: %d\n", numberOfStudents);
    printf("Temperature: %.1f\n", temperature);
    printf("Distance: %.2f\n", distance);
    printf("Grade: %c\n", grade);

    return 0;
}

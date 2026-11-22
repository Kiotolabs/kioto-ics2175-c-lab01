
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Festus Maina
 * Registration Number: ENB211-0003/2025
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise variables
    int numberOfStudents = 45;
    float temperature = 26.5f;
    double distance = 125.75;
    char grade = 'A';

    // Display each variable
    printf("Number of students: %d\n", numberOfStudents);
    printf("Temperature: %.2f\n", temperature);
    printf("Distance: %.2lf\n", distance);
    printf("Grade: %c\n", grade);

    return 0;
}

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Mercy Marindi
 * Registration Number: ENB211-0057/2025
 */

#include <stdio.h>

int main(void)
{
    int numberOfStudyHours = 21;
    float distanceKilometres = 40.0f;
    double averageDistance = 40.0;
    char grade = 'A';

    printf("Integer value: %d\n", numberOfStudyHours);
    printf("Float value: %.2f\n", distanceKilometres);
    printf("Double value: %.2lf\n", averageDistance);
    printf("Character value: %c\n", grade);

    return 0;
}

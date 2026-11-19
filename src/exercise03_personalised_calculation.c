
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: YOUR FULL NAME
 * Registration Number: ENB211-0027/2025
 * Variant ID: V19
 * Scenario: Study hours
 *
 * Input values: 3 and 7
 * Operation: Multiplication
 */

#include <stdio.h>

int main(void)
{
    // Declare input variables
    int studyDays = 3;
    int hoursPerDay = 7;

    // Declare a result variable
    int totalStudyHours;

    // Perform the required calculation
    totalStudyHours = studyDays * hoursPerDay;

    // Print the result using the required output label
    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}

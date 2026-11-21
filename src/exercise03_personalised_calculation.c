
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Clement Lesuuda
 * Registration Number: ENB211-0013/2025
 * Variant ID: Vxx
 * Scenario: Study Hours Calculation
 *
 * Variable A: Morning study hours = 4
 * Variable B: Evening study hours = 3
 * Required calculation: Morning + Evening
 * Output label: Total study hours
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise input variables
    int morningStudyHours = 4;
    int eveningStudyHours = 3;

    // Declare a result variable
    int totalStudyHours;

    // Perform the required arithmetic operation
    totalStudyHours = morningStudyHours + eveningStudyHours;

    // Print the result using the required output label
    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}


/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: SADDIMBAH PHAIZARD BRACKSTONE
 * Registration Number: ENB211-0060/2025
 * Variant ID: V21
 * Scenario: STUDY HOURS
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
    int studyHours = 4;
    int days = 5;
    int totalStudyHours;

    totalStudyHours = studyHours * days;

    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Victor njogu
 * Registration Number: ENB211-0018/2025
 * Variant ID: V20
 * Scenario: Study hours
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
    /* Declare input variables with your assigned V20 values */
    int dailyStudyHours = 2;
    int numberOfDays = 14;

    /* Declare a result variable */
    int totalStudyHours;

    /* Perform the required arithmetic operation */
    totalStudyHours = dailyStudyHours * numberOfDays;

    /* Print the result using the required output label */
    printf("Daily study hours: %d\n", dailyStudyHours);
    printf("Number of days: %d\n", numberOfDays);
    printf("Operation: %d x %d\n", dailyStudyHours, numberOfDays);
    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}
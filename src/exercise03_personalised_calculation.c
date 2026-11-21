/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Jonathan Maritawa Mwaniki
 * Registration Number: ENB211-0031-2025
 * Variant ID: V19
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

int main(void) {
    /* Declare input variables with your assigned values */
    int daily_hours = 3;
    int days = 7;

    /* Declare a result variable and perform the required arithmetic operation */
    int total_study_hours = daily_hours * days;

    /* Print the result using the required output label */
    printf("Total study hours: %d\n", total_study_hours);

    return 0;
}

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Daniel Kyalo
 * Registration Number: ENB211-0025/2024
 * Variant ID: V05
 * Scenario: Event ticket revenue
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
    int input_a = 250;
    int input_b = 120;
    int total_revenue = input_a * input_b;

    printf("Total revenue: %d\n", total_revenue);

    return 0;
}
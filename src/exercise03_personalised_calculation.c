/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: VICTOR KOOME MUTWIRI
 * Registration Number: ENB211-0042/2025
 * Variant ID: V10
 * Scenario: Printing costs
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
    int quantity = 120;
    float unit_price = 2;

    float print_cost;

    print_cost = quantity * unit_price;

    printf("The number of prints to be made are %d\n", quantity);
    printf("The price per print will be Ksh %.2f\n", unit_price);
    printf("Printing cost: %.0f\n", print_cost);

    return 0;
}

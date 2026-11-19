/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Felistas Wanjira
 * Registration Number: ENB211-0008/2025
 * Variant ID: V06
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
    int ticketsSold = 1000;
    int ticketPrice = 35;
    int totalRevenue = ticketsSold * ticketPrice;

    /* Multiply the number of tickets sold by the price of one ticket. */
    printf("Total revenue: %d\n", totalRevenue);
    return 0;
}
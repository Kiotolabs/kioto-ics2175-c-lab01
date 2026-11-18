/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: TODO
 * Registration Number: TODO
 * Variant ID: TODO   (assigned by your lecturer, e.g. V07)
 * Scenario: TODO     (assigned by your lecturer)
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
    int ticketsSold = 18;
    float ticketPrice = 300.0;
    float ticketRevenue;
    char category = 'A';

    ticketRevenue = ticketsSold * ticketPrice;

    printf("Category: %c\n", category);
    printf("Tickets Sold: %d\n", ticketsSold);
    printf("Ticket Price: %.2f\n", ticketPrice);
    printf("Ticket Revenue: %.2f\n", ticketRevenue);

    return 0;
}

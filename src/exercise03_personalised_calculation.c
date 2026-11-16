/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Abednego Nayiya Jimba
 * Registration Number: ENB211-0046/2025
 * Variant ID: ENB211-0046/2025   (assigned by your lecturer, e.g. V07)
 * Scenario: A student club estimates the amount collected from event tickets.     (assigned by your lecturer)
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
    /* TODO: Declare input variables with your assigned values */
    int ticketsSold = 72;
    double ticketPrice = 250.00;

    /* TODO: Declare a result variable */
    double ticketRevenue;

    /* TODO: Perform the required arithmetic operation */
    ticketRevenue = ticketsSold * ticketPrice;

    /* TODO: Print the result using the required output label */
    printf("Tickets sold: %d\n", ticketsSold);
    printf("Ticket price: %.2f\n", ticketPrice);
    printf("Ticket revenue: %.2f\n", ticketRevenue);

    return 0;
}

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Peter Mwai
 * Registration Number: ENB211-0028/2025
 * Variant ID: V05   (assigned by your lecturer, e.g. V07)
 * Scenario: Event ticket revenue     (assigned by your lecturer)
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
    int ticketsSold = 54;
    float ticketPrice = 250.00;
    /* TODO: Declare a result variable */ 
    float ticketRevenue; 
    /* TODO: Perform the required arithmetic operation */ 
    ticketRevenue = ticketsSold * ticketPrice; 
    /* The total ticket revenue is a product of the number of tickets sold and the price per ticket. */
    /* TODO: Print the result using the required output label */ 
    printf("Ticket Revenue: %.2f\n", ticketRevenue);

    return 0;
}
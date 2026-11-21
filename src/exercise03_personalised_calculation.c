
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Brian Kibet Kipnakiy
 * Registration Number: ENB211-0036/2025
 * Variant ID: V04
 * Scenario: Event ticket revenue
 */

#include <stdio.h>

int main(void)
{
    // Declare input variables
    int ticketPrice = 500;
    int numberOfTickets = 80;

    // Declare a result variable
    int totalRevenue;

    // Perform multiplication
    totalRevenue = ticketPrice * numberOfTickets;

    // Display the results
    printf("Ticket price: %d\n", ticketPrice);
    printf("Number of tickets: %d\n", numberOfTickets);
    printf("Total revenue: %d\n", totalRevenue);

    return 0;
}

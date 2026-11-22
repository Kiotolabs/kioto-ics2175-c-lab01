
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Festus Maina
 * Registration Number: ENB211-0003/2025
 * Variant ID: V05
 * Scenario: Event ticket revenue
 */

#include <stdio.h>

int main(void)
{
    // Declare and initialise variables
    int ticketPrice = 250;
    int ticketsSold = 120;
    int totalRevenue;
    char ticketCategory = 'A';

    // Calculate total revenue
    totalRevenue = ticketPrice * ticketsSold;

    // Display the calculation
    printf("Ticket category: %c\n", ticketCategory);
    printf("Ticket price: %d\n", ticketPrice);
    printf("Tickets sold: %d\n", ticketsSold);
    printf("Total revenue: %d\n", totalRevenue);

    return 0;
}

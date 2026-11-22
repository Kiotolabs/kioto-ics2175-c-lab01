
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Ruth Owiti
 * Registration Number: ENB211-0122/2025
 * Variant ID: V05
 * Scenario: Event ticket revenue
 *
 * Input values:
 *   Ticket price = 250
 *   Number of tickets = 120
 *
 * Operation: Multiplication
 * Required output label: Total revenue
 */

#include <stdio.h>

int main(void)
{
    float ticketPrice = 250;
    int numberOfTickets = 120;
    float totalRevenue = ticketPrice * numberOfTickets;

    printf("Ticket price: %.2f\n", ticketPrice);
    printf("Number of tickets: %d\n", numberOfTickets);
    printf("Total revenue: %.2f\n", totalRevenue);

    return 0;
}

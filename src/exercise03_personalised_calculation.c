
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Abednego Nayiya Jimba
 * Registration Number: ENB211-0046/2025
 * Variant ID: V11
 * Scenario: Printing Costs
 */

#include <stdio.h>

int main(void)
{
    // Declare input variables
    int pagesPrinted = 75;
    int costPerPage = 5;

    // Declare result variable
    int printingCost;

    // Calculate printing cost
    printingCost = pagesPrinted * costPerPage;

    // Display the result
    printf("Printing cost: %d\n", printingCost);

    return 0;
}

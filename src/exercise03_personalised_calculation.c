
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: CLINTON KIPCHIRCHIR
 * Registration Number: ENB211-0111/2025
 * Variant ID: V03
 * Scenario: Stationery order cost
 */

#include <stdio.h>

int main(void)
{
    // Declare input variables
    int pricePerItem = 40;
    int quantity = 4;

    // Declare a character variable
    char category = 'A';

    // Declare result variable
    int totalCost;

    // Perform multiplication
    totalCost = pricePerItem * quantity;

    // Display the results
    printf("Price per item: %d\n", pricePerItem);
    printf("Quantity: %d\n", quantity);
    printf("Category: %c\n", category);
    printf("Total cost: %d\n", totalCost);

    return 0;
}


/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: PATRICK NTHANGA MUTISO
 * Registration Number: ENB211-0026/2025
 * Variant ID: V02
 * Scenario: Stationery order cost
 *
 * Input value 1: 15
 * Input value 2: 12
 * Operation: Multiply
 * Required output label: Total cost
 */

#include <stdio.h>

int main(void)
{
    int notebooks = 15;
    int costPerNotebook = 12;
    int totalCost;

    totalCost = notebooks * costPerNotebook;

    printf("Stationery Order Cost Calculation\n");
    printf("---------------------------------\n");
    printf("Number of notebooks: %d\n", notebooks);
    printf("Cost per notebook: %d\n", costPerNotebook);
    printf("Total cost: %d\n", totalCost);

    return 0;
}

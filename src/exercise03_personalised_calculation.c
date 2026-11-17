/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Victor njogu
 * Registration Number: ENB211-0018/2025
 * Variant ID: TODO   (ENB211-0018/2025)
 * Scenario: TODO     (Campus stationery desk order total calculation)
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
    /* Declare input variables with your assigned values */
    int numberOfNotebooks = 4;
    double pricePerNotebook = 125.5;

    /* Declare a result variable */
    double orderTotal;

    /* Perform the required arithmetic operation */
    orderTotal = numberOfNotebooks * pricePerNotebook;

    /* Print the result using the required output label */
    printf("Number of notebooks: %d\n", numberOfNotebooks);
    printf("Price per notebook: %.2f\n", pricePerNotebook);
    printf("Operation: %d x %.2f\n", numberOfNotebooks, pricePerNotebook);
    printf("Order total: %.2f\n", orderTotal);

    return 0;
}